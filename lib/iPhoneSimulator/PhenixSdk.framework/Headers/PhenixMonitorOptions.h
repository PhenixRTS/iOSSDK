/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixOptionalAction.h"
#import "PhenixRequestStatus.h"
#import "PhenixStreamEndedReason.h"

@protocol PhenixMonitorOptions<NSObject>

typedef void (^PhenixMonitorSetupFailedCallback)(PhenixRequestStatus status, id<PhenixOptionalAction> retry);
typedef void (^PhenixMonitorStreamEndedCallback)(
    PhenixStreamEndedReason reason, NSString* description, id<PhenixOptionalAction> retry);

@end
