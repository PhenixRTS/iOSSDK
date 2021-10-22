/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChannelOptionsBuilder.h"
#import "PhenixPCast.h"
#import "PhenixRoomOptionsBuilder.h"
#import "PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomServiceFactory : NSObject

+ (id<PhenixRoomService>)createRoomService:(id<PhenixPCast>)pcast;

+ (id<PhenixRoomOptionsBuilder>)createRoomOptionsBuilder;

+ (id<PhenixChannelOptionsBuilder>)createChannelOptionsBuilder;

@end
    // clang-format on
