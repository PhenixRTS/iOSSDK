/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "Express/PhenixMonitorOptions.h"
#import "Express/PhenixSubscribeToMemberStreamOptions.h"
#import "PCast/PhenixRendererOptions.h"

@protocol PhenixSubscribeToMemberStreamOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRenderer:(CALayer*)videoElement;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRenderer;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withMonitor:(PhenixMonitorSetupFailedCallback)setupFailedCallback
                                                              :(PhenixMonitorStreamEndedCallback)streamEndedCallback
                                                              :(id<PhenixMonitorOptions>)options;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withStreamToken:(NSString*)streamToken;

- (id<PhenixSubscribeToMemberStreamOptions>)buildSubscribeToMemberStreamOptions;
// clang-format on

@end
