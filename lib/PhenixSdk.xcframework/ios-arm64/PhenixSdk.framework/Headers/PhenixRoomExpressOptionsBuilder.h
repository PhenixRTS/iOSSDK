/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixPCastExpressOptions.h"
#import "PhenixRoomExpressOptions.h"

@protocol PhenixRoomExpressOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixRoomExpressOptionsBuilder>)withPCastExpressOptions:(id<PhenixPCastExpressOptions>)options;

- (id<PhenixRoomExpressOptions>)buildRoomExpressOptions;
// clang-format on

@end
