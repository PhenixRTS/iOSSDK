/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixRequestStatus.h"
#import "Express/PhenixJoinChannelOptions.h"
#import "Express/PhenixJoinRoomOptions.h"
#import "Express/PhenixPCastExpress.h"
#import "Room/PhenixMember.h"
#import "Room/PhenixRoomService.h"

@protocol PhenixRoomExpress<NSObject>

typedef void (^PhenixRoomExpressJoinRoomCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);
typedef void (^PhenixRoomExpressMembersChangedCallback)(NSArray<id<PhenixMember>>* roomMembers);
typedef void (^PhenixRoomExpressJoinChannelCallback)(PhenixRequestStatus status, id<PhenixRoomService> roomService);

// clang-format off
- (void)joinRoom:(id<PhenixJoinRoomOptions>)options
                :(PhenixRoomExpressJoinRoomCallback)joinRoomCallback
                :(PhenixRoomExpressMembersChangedCallback)membersChangedCallback;
- (void)joinRoom:(id<PhenixJoinRoomOptions>)options
                :(PhenixRoomExpressJoinRoomCallback)joinRoomCallback;

- (void)joinChannel:(id<PhenixJoinChannelOptions>)options
                   :(PhenixRoomExpressJoinChannelCallback)joinChannelCallback
                   :(PhenixPCastExpressSubscribeCallback)subscriberCallback;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCastExpress> pcastExpress;

@end
