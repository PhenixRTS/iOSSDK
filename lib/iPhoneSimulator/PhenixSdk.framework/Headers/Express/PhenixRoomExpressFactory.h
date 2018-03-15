/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixJoinChannelOptionsBuilder.h"
#import "Express/PhenixJoinRoomOptionsBuilder.h"
#import "Express/PhenixPCastExpress.h"
#import "Express/PhenixPublishToRoomOptionsBuilder.h"
#import "Express/PhenixRoomExpress.h"
#import "Express/PhenixRoomExpressOptionsBuilder.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomExpressFactory : NSObject


+ (id<PhenixRoomExpress>)createRoomExpress:(id<PhenixRoomExpressOptions>)options;

+ (id<PhenixRoomExpress>)createRoomExpress:(id<PhenixRoomExpressOptions>)options
                                          :(id<PhenixPCastExpress>)pcastExpress;

+ (id<PhenixRoomExpressOptionsBuilder>)createRoomExpressOptionsBuilder;

+ (id<PhenixJoinChannelOptionsBuilder>)createJoinChannelOptionsBuilder;

+ (id<PhenixJoinRoomOptionsBuilder>)createJoinRoomOptionsBuilder;

+ (id<PhenixPublishToRoomOptionsBuilder>)createPublishToRoomOptionsBuilder;
// clang-format on

@end
