/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixPublishRemoteOptions.h"

@protocol PhenixPublishRemoteOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishRemoteOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

- (id<PhenixPublishRemoteOptionsBuilder>)withStreamUri:(NSString*)streamUri;

- (id<PhenixPublishRemoteOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixPublishRemoteOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixPublishRemoteOptionsBuilder>)withPrerollSkipDuration:(NSTimeInterval)prerollSkipDuration;

- (id<PhenixPublishRemoteOptionsBuilder>)withMaximumFrameRateConstraint:(double)maxFrameRateInFramesPerSecond;

- (id<PhenixPublishRemoteOptionsBuilder>)withExactFrameRateConstraint:(double)exactFrameRateInFramesPerSecond;

- (id<PhenixPublishRemoteOptionsBuilder>)withStreamToken:(NSString*)streamToken;

- (id<PhenixPublishRemoteOptions>)buildPublishRemoteOptions;
// clang-format on

@end
