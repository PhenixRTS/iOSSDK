/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixObservable.h"
#import "Room/PhenixMemberRole.h"

@protocol PhenixChatUser<NSObject>

- (NSString*)getSessionId;

- (PhenixObservable<NSString*>*)getObservableScreenName;

- (PhenixObservable<NSNumber*>*)getObservableMemberRole;

- (PhenixObservable<NSDate*>*)getObservableLastUpdate;

@end
