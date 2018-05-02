/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "Express/PhenixMonitorOptions.h"
#import "Express/PhenixPublishOptions.h"
#import "PCast/PhenixRendererOptions.h"
#import "PCast/PhenixUserMediaOptions.h"
#import "PCast/PhenixUserMediaStream.h"

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

- (id<PhenixPublishOptions>)buildPublishOptions;
// clang-format on

@end
