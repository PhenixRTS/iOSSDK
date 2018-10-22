/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixMonitorOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixSubscribeToMemberStreamOptions.h"

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
