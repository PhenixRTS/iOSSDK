/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChatMessage.h"
#import "PhenixObservable.h"
#import "PhenixRequestStatus.h"

@protocol PhenixRoomChatService<NSObject>

typedef void (^GetMessagesCallback)(
    id<PhenixRoomChatService> roomChatService, NSArray<id<PhenixChatMessage>>* chatMessage, PhenixRequestStatus status);
typedef void (^SendMessageCallback)(PhenixRequestStatus status, NSString* message);

- (PhenixObservable<NSNumber*>*)getObservableChatEnabled;

- (PhenixObservable<id<PhenixChatMessage>>*)getObservableLastChatMessage;

- (PhenixObservable<NSArray<id<PhenixChatMessage>>*>*)getObservableChatMessages;

- (void)sendMessageToRoom:(NSString*)message;

// clang-format off
- (void)sendMessageToRoom:(NSString*)message
                         :(SendMessageCallback)callback;

- (void)getMessages:(UInt32)batchSize
                   :(NSString*)afterMessageId
                   :(NSString*)beforeMessageId
                   :(GetMessagesCallback)callback;
// clang-format on

@end
