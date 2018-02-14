/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixRequestStatus.h"

@protocol PhenixPCastExpressOptions<NSObject>

typedef void (^PhenixPCastExpressUnrecoverableErrorCallback)(PhenixRequestStatus status, NSString* description);

@end
