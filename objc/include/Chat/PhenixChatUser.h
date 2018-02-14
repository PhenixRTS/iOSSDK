/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
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
