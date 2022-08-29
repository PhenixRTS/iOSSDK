/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixRoomChatService.h"
#import "PhenixRoomService.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomChatServiceFactory : NSObject

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService;

+ (id<PhenixRoomChatService>)createRoomChatServiceForMimeTypes:(id<PhenixRoomService>)roomService
                                                              :(NSArray<NSString*>*)mimeTypes;

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService
                                                  :(NSUInteger)batchSize;

+ (id<PhenixRoomChatService>)createRoomChatService:(id<PhenixRoomService>)roomService
                                                  :(NSUInteger)batchSize
                                                  :(NSArray<NSString*>*)mimeTypes;

@end
// clang-format on
