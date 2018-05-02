/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixChannelExpress.h"
#import "Express/PhenixChannelExpressOptionsBuilder.h"
#import "Express/PhenixJoinChannelOptionsBuilder.h"
#import "Express/PhenixPublishToChannelOptionsBuilder.h"
#import "Express/PhenixRoomExpress.h"

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
