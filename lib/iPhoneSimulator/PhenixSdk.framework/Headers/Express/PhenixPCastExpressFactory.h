/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixMonitorOptionsBuilder.h"
#import "Express/PhenixPCastExpress.h"
#import "Express/PhenixPCastExpressOptionsBuilder.h"
#import "Express/PhenixPublishOptionsBuilder.h"
#import "Express/PhenixPublishRemoteOptionsBuilder.h"
#import "Express/PhenixSubscribeOptionsBuilder.h"
#import "PCast/PhenixPCast.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixPCastExpressFactory : NSObject


+ (id<PhenixPCastExpress>)createPCastExpress:(id<PhenixPCastExpressOptions>)options;

+ (id<PhenixPCastExpress>)createPCastExpress:(id<PhenixPCastExpressOptions>)options
                                            :(id<PhenixPCast>)pcast;

+ (id<PhenixPCastExpressOptionsBuilder>)createPCastExpressOptionsBuilder;

+ (id<PhenixPublishOptionsBuilder>)createPublishOptionsBuilder;

+ (id<PhenixPublishRemoteOptionsBuilder>)createPublishRemoteOptionsBuilder;

+ (id<PhenixSubscribeOptionsBuilder>)createSubscribeOptionsBuilder;

+ (id<PhenixMonitorOptionsBuilder>)createMonitorOptionsBuilder;
// clang-format on

@end
