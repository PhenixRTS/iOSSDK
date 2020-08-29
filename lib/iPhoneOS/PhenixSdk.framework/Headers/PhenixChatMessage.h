/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChatUser.h"
#import "PhenixObservable.h"

@protocol PhenixChatMessage<NSObject>

- (NSString*)getMessageId;

- (PhenixObservable<NSDate*>*)getObservableTimeStamp;

- (PhenixObservable<NSDate*>*)getObservableDeletedTimeStamp;

- (PhenixObservable<id<PhenixChatUser>>*)getObservableFrom;

- (PhenixObservable<NSString*>*)getObservableMessage;

- (PhenixObservable<NSString*>*)getObservableMimeType;

@end
