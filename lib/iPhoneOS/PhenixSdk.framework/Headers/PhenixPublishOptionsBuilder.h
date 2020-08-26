/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixMonitorOptions.h"
#import "PhenixPublishOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixUserMediaOptions.h"
#import "PhenixUserMediaStream.h"

@protocol PhenixPublishOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

- (id<PhenixPublishOptionsBuilder>)withMediaConstraints:(PhenixUserMediaOptions*)mediaConstraints;

- (id<PhenixPublishOptionsBuilder>)withUserMedia:(id<PhenixUserMediaStream>)userMediaStream;

- (id<PhenixPublishOptionsBuilder>)withPreviewRendererOptions:(PhenixRendererOptions*)rendererOptions;

- (id<PhenixPublishOptionsBuilder>)withPreviewRenderer:(CALayer*)videoElement;

- (id<PhenixPublishOptionsBuilder>)withPreviewRenderer;

- (id<PhenixPublishOptionsBuilder>)withMonitor:(PhenixMonitorSetupFailedCallback)setupFailedCallback
                                              :(PhenixMonitorStreamEndedCallback)streamEndedCallback
                                              :(id<PhenixMonitorOptions>)options;

- (id<PhenixPublishOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixPublishOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixPublishOptionsBuilder>)withStreamToken:(NSString*)streamToken;

/**
 Will not attempt to retry a stream if it failed due to unauthorized status
 */
- (id<PhenixPublishOptionsBuilder>)withSkipRetryOnUnauthorized;

- (id<PhenixPublishOptions>)buildPublishOptions;
// clang-format on

@end
