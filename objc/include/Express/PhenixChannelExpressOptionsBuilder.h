/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixChannelExpressOptions.h"
#import "Express/PhenixRoomExpressOptions.h"

@protocol PhenixChannelExpressOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixChannelExpressOptionsBuilder>)withRoomExpressOptions:(id<PhenixRoomExpressOptions>)options;

- (id<PhenixChannelExpressOptions>)buildChannelExpressOptions;
// clang-format on

@end
