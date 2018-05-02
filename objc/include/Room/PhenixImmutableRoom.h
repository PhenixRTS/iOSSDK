/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Room/PhenixMember.h"
#import "Room/PhenixRoomType.h"

@protocol PhenixImmutableRoom<NSObject>

- (NSString*)getRoomId;

- (PhenixObservable<NSString*>*)getObservableAlias;

- (PhenixObservable<NSString*>*)getObservableName;

- (PhenixObservable<NSString*>*)getObservableDescription;

- (PhenixObservable<NSNumber*>*)getObservableType;

- (PhenixObservable<NSArray<id<PhenixMember>>*>*)getObservableMembers;

- (PhenixObservable<NSString*>*)getObservableBridgeId;

- (PhenixObservable<NSString*>*)getObservablPin;

- (PhenixObservable<NSNumber*>*)getObservableEstimatedSize;

@end
