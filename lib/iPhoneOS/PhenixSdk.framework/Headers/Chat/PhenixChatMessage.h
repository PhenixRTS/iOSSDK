/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Chat/PhenixChatUser.h"
#import "Common/PhenixObservable.h"

#import <Foundation/Foundation.h>

@protocol PhenixChatMessage<NSObject>

- (NSString*)getMessageId;

- (PhenixObservable<NSDate*>*)getObservableTimeStamp;

- (PhenixObservable<id<PhenixChatUser>>*)getObservableFrom;

- (PhenixObservable<NSString*>*)getObservableMessage;

@end
