/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChannelOptions.h"

@protocol PhenixChannelOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixChannelOptionsBuilder>)withName:(NSString*)name;

- (id<PhenixChannelOptionsBuilder>)withAlias:(NSString*)alias;

- (id<PhenixChannelOptionsBuilder>)withDescription:(NSString*)description;

- (id<PhenixChannelOptions>)buildChannelOptions;
// clang-format on

@end
