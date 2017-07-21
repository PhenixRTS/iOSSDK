/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixRequestStatus.h"
#import "Room/PhenixMember.h"
#import "Room/PhenixRoomType.h"

#import <Foundation/Foundation.h>

@protocol PhenixRoom<NSObject>

typedef void (^RoomCommitCallback)(PhenixRequestStatus status, NSString* message);

- (NSString*)getRoomId;

- (PhenixObservable<NSString*>*)getObservableAlias;

- (PhenixObservable<NSString*>*)getObservableName;

- (PhenixObservable<NSString*>*)getObservableDescription;

- (PhenixObservable<NSNumber*>*)getObservableType;

- (PhenixObservable<NSArray<id<PhenixMember>>*>*)getObservableMembers;

- (PhenixObservable<NSString*>*)getObservableBridgeId;

- (PhenixObservable<NSString*>*)getObservablPin;

- (void)commitChanges:(RoomCommitCallback)callback;

- (void)reload;

@end
