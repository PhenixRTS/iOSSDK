/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "Express/PhenixJoinChannelOptions.h"
#import "Express/PhenixJoinRoomOptions.h"
#import "Express/PhenixStreamSelectionStrategy.h"
#import "PCast/PhenixRendererOptions.h"

@protocol PhenixJoinChannelOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixJoinChannelOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

- (id<PhenixJoinChannelOptionsBuilder>)withRenderer:(CALayer*)videoElement;

- (id<PhenixJoinChannelOptionsBuilder>)withRenderer;

- (id<PhenixJoinChannelOptionsBuilder>)withStreamSelectionStrategy:
    (PhenixStreamSelectionStrategy)streamSelectionStrategy;

- (id<PhenixJoinChannelOptionsBuilder>)withJoinRoomOptions:(id<PhenixJoinRoomOptions>)joinRoomOptions;

- (id<PhenixJoinChannelOptions>)buildJoinChannelOptions;
// clang-format on

@end
