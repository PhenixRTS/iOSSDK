/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixPCast.h"
#import "Room/PhenixChannelOptionsBuilder.h"
#import "Room/PhenixRoomOptionsBuilder.h"
#import "Room/PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomServiceFactory : NSObject

+ (id<PhenixRoomService>)createRoomService:(id<PhenixPCast>)pcast;

+ (id<PhenixRoomOptionsBuilder>)createRoomOptionsBuilder;

+ (id<PhenixChannelOptionsBuilder>)createChannelOptionsBuilder;

@end
    // clang-format on
