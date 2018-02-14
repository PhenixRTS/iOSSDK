/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixOptionalAction.h"
#import "Common/PhenixRequestStatus.h"
#import "PCast/PhenixStreamEndedReason.h"

@protocol PhenixMonitorOptions<NSObject>

typedef void (^PhenixMonitorSetupFailedCallback)(PhenixRequestStatus status, id<PhenixOptionalAction> retry);
typedef void (^PhenixMonitorStreamEndedCallback)(
    PhenixStreamEndedReason reason, NSString* description, id<PhenixOptionalAction> retry);

@end
