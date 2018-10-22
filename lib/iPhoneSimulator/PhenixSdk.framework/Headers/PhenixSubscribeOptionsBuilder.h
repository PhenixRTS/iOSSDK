/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixMonitorOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixSubscribeOptions.h"

@protocol PhenixSubscribeOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixSubscribeOptionsBuilder>)withStreamId:(NSString*)streamId;

- (id<PhenixSubscribeOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

- (id<PhenixSubscribeOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

- (id<PhenixSubscribeOptionsBuilder>)withRenderer:(CALayer*)videoElement;

- (id<PhenixSubscribeOptionsBuilder>)withRenderer;

- (id<PhenixSubscribeOptionsBuilder>)withMonitor:(PhenixMonitorSetupFailedCallback)setupFailedCallback
                                                :(PhenixMonitorStreamEndedCallback)streamEndedCallback
                                                :(id<PhenixMonitorOptions>)options;

- (id<PhenixSubscribeOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixSubscribeOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixSubscribeOptionsBuilder>)withStreamToken:(NSString*)streamToken;

- (id<PhenixSubscribeOptions>)buildSubscribeOptions;
// clang-format on

@end
