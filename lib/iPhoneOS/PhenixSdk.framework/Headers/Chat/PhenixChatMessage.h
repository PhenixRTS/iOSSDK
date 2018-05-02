/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Chat/PhenixChatUser.h"
#import "Common/PhenixObservable.h"

@protocol PhenixChatMessage<NSObject>

- (NSString*)getMessageId;

- (PhenixObservable<NSDate*>*)getObservableTimeStamp;

- (PhenixObservable<id<PhenixChatUser>>*)getObservableFrom;

- (PhenixObservable<NSString*>*)getObservableMessage;

@end
