/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixRequestStatus.h"
#import "Express/PhenixJoinRoomOptions.h"
#import "Express/PhenixPCastExpress.h"
#import "Express/PhenixPublishToRoomOptions.h"
#import "Express/PhenixSubscribeToMemberStreamOptions.h"
#import "Room/PhenixImmutableRoom.h"
#import "Room/PhenixMember.h"
#import "Room/PhenixRoomOptions.h"
#import "Room/PhenixRoomService.h"
#import "Room/PhenixStream.h"

@protocol PhenixRoomExpress<NSObject>

typedef void (^PhenixRoomExpressJoinRoomCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);
typedef void (^PhenixRoomExpressMembersChangedCallback)(NSArray<id<PhenixMember>>* roomMembers);
typedef void (^PhenixRoomExpressCreateRoomCallback)(PhenixRequestStatus status, id<PhenixImmutableRoom> immutableRoom);

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

- (void)publishToRoom:(id<PhenixPublishToRoomOptions>)options
                     :(PhenixPCastExpressPublishCallback)publisherCallback;
- (void)publishToRoomWithPreview:(id<PhenixPublishToRoomOptions>)options
                                :(PhenixPCastExpressPublishWithPreviewCallback)publisherCallback;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCastExpress> pcastExpress;

@end
