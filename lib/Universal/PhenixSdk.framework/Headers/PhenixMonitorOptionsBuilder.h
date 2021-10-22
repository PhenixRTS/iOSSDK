/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMonitorOptions.h"

@protocol PhenixMonitorOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixMonitorOptionsBuilder>)withMonitorFrameRate:(BOOL)doMonitor;

- (id<PhenixMonitorOptionsBuilder>)withFrameRateThreshold:(double)frameRateThresholdInFramesPerSecond;

- (id<PhenixMonitorOptionsBuilder>)withMonitoringInterval:(NSTimeInterval)interval;

- (id<PhenixMonitorOptionsBuilder>)withConditionCountForNotificationThreshold:(NSUInteger)count;

- (id<PhenixMonitorOptions>)buildMonitorOptions;
// clang-format on

@end
