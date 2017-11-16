/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixObservable.h"
#import "Room/PhenixMemberRole.h"

#import <Foundation/Foundation.h>

@protocol PhenixChatUser<NSObject>

- (NSString*)getSessionId;

- (PhenixObservable<NSString*>*)getObservableScreenName;

- (PhenixObservable<NSNumber*>*)getObservableMemberRole;

- (PhenixObservable<NSDate*>*)getObservableLastUpdate;

@end
