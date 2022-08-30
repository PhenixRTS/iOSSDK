/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMemberRole.h"
#import "PhenixMemberState.h"
#import "PhenixObservable.h"
#import "PhenixRequestStatus.h"
#import "PhenixStream.h"

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
