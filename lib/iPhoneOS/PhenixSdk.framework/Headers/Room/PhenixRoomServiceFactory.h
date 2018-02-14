/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixPCast.h"
#import "Room/PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomServiceFactory : NSObject

+ (id<PhenixRoomService>)createRoomService:(id<PhenixPCast>)pcast;

@end
    // clang-format on
