/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChannelExpress.h"
#import "PhenixChannelExpressOptionsBuilder.h"
#import "PhenixJoinChannelOptionsBuilder.h"
#import "PhenixPublishToChannelOptionsBuilder.h"
#import "PhenixRoomExpress.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixChannelExpressFactory : NSObject


+ (id<PhenixChannelExpress>)createChannelExpress:(id<PhenixChannelExpressOptions>)options;

+ (id<PhenixChannelExpress>)createChannelExpress:(id<PhenixChannelExpressOptions>)options
                                                :(id<PhenixRoomExpress>)roomExpress;

+ (id<PhenixChannelExpressOptionsBuilder>)createChannelExpressOptionsBuilder;

+ (id<PhenixJoinChannelOptionsBuilder>)createJoinChannelOptionsBuilder;

+ (id<PhenixPublishToChannelOptionsBuilder>)createPublishToChannelOptionsBuilder;
// clang-format on

@end
