/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import "Common/PhenixObservable.h"
#import "Common/PhenixRequestStatus.h"
#import "Room/PhenixMemberRole.h"
#import "Room/PhenixMemberState.h"
#import "Room/PhenixStream.h"

#import <Foundation/Foundation.h>

@protocol PhenixMember<NSObject>

typedef void (^MemberCommitCallback)(PhenixRequestStatus status, NSString* message);

- (PhenixObservable<NSNumber*>*)getObservableState;

- (NSString*)getSessionId;

- (PhenixObservable<NSString*>*)getObservableScreenName;

- (PhenixObservable<NSNumber*>*)getObservableRole;

- (PhenixObservable<NSArray<id<PhenixStream>>*>*)getObservableStreams;

- (PhenixObservable<NSDate*>*)getObservableLastUpdate;

- (void)commitChanges:(MemberCommitCallback)callback;

- (void)reload;

@end
