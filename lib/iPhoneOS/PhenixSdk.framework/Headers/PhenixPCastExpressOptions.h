/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixRequestStatus.h"

@protocol PhenixPCastExpressOptions<NSObject>

typedef void (^PhenixPCastExpressUnrecoverableErrorCallback)(PhenixRequestStatus status, NSString* description);

@end
