/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDisposable.h"
#import "PhenixObservable.h"
#import "PhenixRequestStatusObject.h"

@protocol PhenixTimeShift<NSObject>

// clang-format off
- (void)loop:(NSTimeInterval)duration;

- (void)stop;

- (void)pause;

- (void)play;

- (PhenixObservable<PhenixRequestStatusObject*>*)seekRelative:(NSTimeInterval)relativeFromCurrentHead;

- (PhenixObservable<PhenixRequestStatusObject*>*)seekAbsolute:(NSDate*)absoluteTimeInUtc;

- (PhenixObservable<NSNumber*>*)getObservableReadyForPlaybackStatus;

- (PhenixObservable<PhenixRequestStatusObject*>*)getObservableFailure;

- (PhenixObservable<NSDate*>*)getObservablePlaybackHead;

- (id<PhenixDisposable>)limitBandwidth:(UInt64)bandwidthLimitInBps;
// clang-format on

@end
