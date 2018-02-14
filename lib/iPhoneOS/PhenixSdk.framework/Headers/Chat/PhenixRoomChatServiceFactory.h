/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Chat/PhenixRoomChatService.h"
#import "Room/PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomChatServiceFactory : NSObject

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService;

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService
                                                  :(NSUInteger)batchSize;

@end
    // clang-format on
