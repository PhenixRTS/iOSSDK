/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixRequestStatus.h"
#import "Express/PhenixJoinChannelOptions.h"
#import "Express/PhenixPCastExpress.h"
#import "Express/PhenixPublishToChannelOptions.h"
#import "Express/PhenixRoomExpress.h"
#import "Room/PhenixChannelOptions.h"
#import "Room/PhenixImmutableRoom.h"
#import "Room/PhenixRoomService.h"

@protocol PhenixChannelExpress<NSObject>

typedef void (^PhenixChannelExpressCreateChannelCallback)(PhenixRequestStatus status, id<PhenixImmutableRoom> immutableRoom);
typedef void (^PhenixChannelExpressJoinChannelCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);

// clang-format off
- (void)joinChannel:(id<PhenixJoinChannelOptions>)options
                   :(PhenixChannelExpressJoinChannelCallback)joinChannelCallback
                   :(PhenixPCastExpressSubscribeCallback)subscriberCallback;

- (void)createChannel:(id<PhenixChannelOptions>)options
                     :(PhenixChannelExpressCreateChannelCallback)createChannelCallback;

- (void)publishToChannel:(id<PhenixPublishToChannelOptions>)options
                        :(PhenixPCastExpressPublishCallback)publisherCallback;
- (void)publishToChannelWithPreview:(id<PhenixPublishToChannelOptions>)options
                                   :(PhenixPCastExpressPublishWithPreviewCallback)publisherCallback;


// clang-format on

@property(readonly, nonatomic) id<PhenixPCastExpress> pcastExpress;

@property(readonly, nonatomic) id<PhenixRoomExpress> roomExpress;

@end
