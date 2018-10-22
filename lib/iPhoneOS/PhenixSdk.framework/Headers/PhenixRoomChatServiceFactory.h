/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixRoomChatService.h"
#import "PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomChatServiceFactory : NSObject

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService;

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService
                                                  :(NSUInteger)batchSize;

@end
    // clang-format on
