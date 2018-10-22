/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMonitorOptionsBuilder.h"
#import "PhenixPCast.h"
#import "PhenixPCastExpress.h"
#import "PhenixPCastExpressOptionsBuilder.h"
#import "PhenixPublishOptionsBuilder.h"
#import "PhenixPublishRemoteOptionsBuilder.h"
#import "PhenixSubscribeOptionsBuilder.h"

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
