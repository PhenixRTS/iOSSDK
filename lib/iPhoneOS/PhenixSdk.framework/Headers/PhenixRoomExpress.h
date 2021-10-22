/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixImmutableRoom.h"
#import "PhenixJoinRoomOptions.h"
#import "PhenixMember.h"
#import "PhenixPCastExpress.h"
#import "PhenixPublishToRoomOptions.h"
#import "PhenixRequestStatus.h"
#import "PhenixRoomOptions.h"
#import "PhenixRoomService.h"
#import "PhenixStream.h"
#import "PhenixSubscribeToMemberStreamOptions.h"

@protocol PhenixRoomExpress<NSObject>

typedef void (^PhenixRoomExpressJoinRoomCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);
typedef void (^PhenixRoomExpressMembersChangedCallback)(NSArray<id<PhenixMember>>* roomMembers);
typedef void (^PhenixRoomExpressCreateRoomCallback)(PhenixRequestStatus status, id<PhenixImmutableRoom> immutableRoom);
typedef void (^PhenixRoomExpressPublishToRoomCallback)(
    PhenixRequestStatus status, id<PhenixRoomService> roomService, id<PhenixExpressPublisher> publisher);
typedef void (^PhenixRoomExpressPublishToRoomWithPreviewCallback)(
    PhenixRequestStatus status,
    id<PhenixRoomService> roomService,
    id<PhenixExpressPublisher> publisher,
    id<PhenixRenderer> previewRenderer);

// clang-format off
- (void)joinRoom:(id<PhenixJoinRoomOptions>)options
                :(PhenixRoomExpressJoinRoomCallback)joinRoomCallback
                :(PhenixRoomExpressMembersChangedCallback)membersChangedCallback;
- (void)joinRoom:(id<PhenixJoinRoomOptions>)options
                :(PhenixRoomExpressJoinRoomCallback)joinRoomCallback;

- (void)createRoom:(id<PhenixRoomOptions>)options
                  :(PhenixRoomExpressCreateRoomCallback)createRoomCallback;

- (void)subscribeToMemberStream:(id<PhenixStream>)memberStream
                               :(id<PhenixSubscribeToMemberStreamOptions>)options
                               :(PhenixPCastExpressSubscribeCallback)callback;

/**
 * @deprecated Use \ref publishToRoom:withCallback instead
 */
- (void)publishToRoom:(id<PhenixPublishToRoomOptions>)options
                     :(PhenixPCastExpressPublishCallback)publisherCallback
                     __attribute((deprecated("Use publishToRoom:withCallback instead")));

/**
 * @deprecated Use \ref publishToRoom:withPreviewCallback instead
 */
- (void)publishToRoomWithPreview:(id<PhenixPublishToRoomOptions>)options
                                :(PhenixPCastExpressPublishWithPreviewCallback)publisherCallback
                                __attribute((deprecated("Use publishToRoom:withPreviewCallback instead")));

- (void)publishToRoom:(id<PhenixPublishToRoomOptions>)options
         withCallback:(PhenixRoomExpressPublishToRoomCallback)publisherCallback;

- (void)publishToRoom:(id<PhenixPublishToRoomOptions>)options
  withPreviewCallback:(PhenixRoomExpressPublishToRoomWithPreviewCallback)publisherCallback;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCastExpress> pcastExpress;

@end
