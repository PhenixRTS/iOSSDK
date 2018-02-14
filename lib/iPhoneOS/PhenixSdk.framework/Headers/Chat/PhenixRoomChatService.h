/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Chat/PhenixChatMessage.h"
#import "Common/PhenixObservable.h"
#import "Common/PhenixRequestStatus.h"

@protocol PhenixRoomChatService<NSObject>

typedef void (^GetMessagesCallback)(
    id<PhenixRoomChatService> roomChatService, NSArray<id<PhenixChatMessage>>* chatMessage, PhenixRequestStatus status);
typedef void (^SendMessageCallback)(PhenixRequestStatus status, NSString* message);

- (PhenixObservable<NSNumber*>*)getObservableChatEnabled;

- (PhenixObservable<NSArray<id<PhenixChatMessage>>*>*)getObservableChatMessages;

- (void)SendMessageToRoom:(NSString*)message;

// clang-format off
- (void)SendMessageToRoom:(NSString*)message
                         :(SendMessageCallback)callback;

- (void)getMessages:(UInt32)batchSize
                   :(NSString*)afterMessageId
                   :(NSString*)beforeMessageId
                   :(GetMessagesCallback)callback;
// clang-format on

@end
