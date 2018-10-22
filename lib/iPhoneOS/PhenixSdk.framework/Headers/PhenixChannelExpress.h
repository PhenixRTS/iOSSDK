/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChannelOptions.h"
#import "PhenixImmutableRoom.h"
#import "PhenixJoinChannelOptions.h"
#import "PhenixPCastExpress.h"
#import "PhenixPublishToChannelOptions.h"
#import "PhenixRequestStatus.h"
#import "PhenixRoomExpress.h"
#import "PhenixRoomService.h"

@protocol PhenixChannelExpress<NSObject>

typedef void (^PhenixChannelExpressCreateChannelCallback)(
    PhenixRequestStatus status, id<PhenixImmutableRoom> immutableRoom);
typedef void (^PhenixChannelExpressJoinChannelCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);
typedef void (^PhenixChannelExpressPublishToChannelCallback)(
    PhenixRequestStatus status, id<PhenixRoomService> channelService, id<PhenixExpressPublisher> publisher);
typedef void (^PhenixChannelExpressPublishToChannelWithPreviewCallback)(
    PhenixRequestStatus status,
    id<PhenixRoomService> channelService,
    id<PhenixExpressPublisher> publisher,
    id<PhenixRenderer> previewRenderer);

// clang-format off
- (void)joinChannel:(id<PhenixJoinChannelOptions>)options
                   :(PhenixChannelExpressJoinChannelCallback)joinChannelCallback
                   :(PhenixPCastExpressSubscribeCallback)subscriberCallback;

- (void)createChannel:(id<PhenixChannelOptions>)options
                     :(PhenixChannelExpressCreateChannelCallback)createChannelCallback;

/**
 * @deprecated Use \ref publishToChannel:withCallback instead
 */
- (void)publishToChannel:(id<PhenixPublishToChannelOptions>)options
                        :(PhenixPCastExpressPublishCallback)publisherCallback
                        __attribute((deprecated("Use publishToChannel:withCallback instead")));

/**
 * @deprecated Use \ref publishToChannel:withPreviewCallback instead
 */
- (void)publishToChannelWithPreview:(id<PhenixPublishToChannelOptions>)options
                                   :(PhenixPCastExpressPublishWithPreviewCallback)publisherCallback
                                   __attribute((deprecated("Use publishToChannel:withPreviewCallback instead")));

- (void)publishToChannel:(id<PhenixPublishToChannelOptions>)options
            withCallback:(PhenixChannelExpressPublishToChannelCallback)publisherCallback;

- (void)publishToChannel:(id<PhenixPublishToChannelOptions>)options
     withPreviewCallback:(PhenixChannelExpressPublishToChannelWithPreviewCallback)publisherCallback;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCastExpress> pcastExpress;

@property(readonly, nonatomic) id<PhenixRoomExpress> roomExpress;

@end
