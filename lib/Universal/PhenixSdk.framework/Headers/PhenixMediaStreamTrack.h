/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDisposable.h"

@protocol PhenixMediaStreamTrack<NSObject>

- (void)setEnabled:(BOOL)enabled;

- (BOOL)isEnabled;

- (id<PhenixDisposable>)limitBandwidth:(UInt64)bandwidthLimitInBps;

@end
