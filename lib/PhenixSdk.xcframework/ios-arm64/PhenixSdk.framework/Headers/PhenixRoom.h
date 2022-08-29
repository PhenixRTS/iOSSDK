/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixImmutableRoom.h"
#import "PhenixRequestStatus.h"

@protocol PhenixRoom<PhenixImmutableRoom>

typedef void (^PhenixRoomCommitCallback)(PhenixRequestStatus status, NSString* message);

- (void)commitChanges:(PhenixRoomCommitCallback)callback;

- (void)reload;

@end
