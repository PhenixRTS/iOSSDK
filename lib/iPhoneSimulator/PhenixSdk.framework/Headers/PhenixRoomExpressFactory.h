/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixJoinRoomOptionsBuilder.h"
#import "PhenixPCastExpress.h"
#import "PhenixPublishToRoomOptionsBuilder.h"
#import "PhenixRoomExpress.h"
#import "PhenixRoomExpressOptionsBuilder.h"
#import "PhenixSubscribeToMemberStreamOptionsBuilder.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixRoomExpressFactory : NSObject


+ (id<PhenixRoomExpress>)createRoomExpress:(id<PhenixRoomExpressOptions>)options;

+ (id<PhenixRoomExpress>)createRoomExpress:(id<PhenixRoomExpressOptions>)options
                                          :(id<PhenixPCastExpress>)pcastExpress;

+ (id<PhenixRoomExpressOptionsBuilder>)createRoomExpressOptionsBuilder;

+ (id<PhenixJoinRoomOptionsBuilder>)createJoinRoomOptionsBuilder;

+ (id<PhenixPublishToRoomOptionsBuilder>)createPublishToRoomOptionsBuilder;

+ (id<PhenixSubscribeToMemberStreamOptionsBuilder>)createSubscribeToMemberStreamOptionsBuilder;
// clang-format on

@end
