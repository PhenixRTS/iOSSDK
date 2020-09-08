/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDisposable.h"
#import "PhenixObservable.h"
#import "PhenixRequestStatusObject.h"
#import "PhenixSeekOrigin.h"

@protocol PhenixTimeShift<NSObject>

// clang-format off
- (void)loop:(NSTimeInterval)duration;

- (void)stop;

- (void)pause;

- (void)play;

- (PhenixObservable<PhenixRequestStatusObject*>*)seek:(NSTimeInterval)offset
                                                     :(PhenixSeekOrigin)origin;

- (PhenixObservable<PhenixRequestStatusObject*>*)seek:(NSDate*)absoluteTimeInUtc;

- (PhenixObservable<NSNumber*>*)getObservableReadyForPlaybackStatus;

- (PhenixObservable<PhenixRequestStatusObject*>*)getObservableFailure;

- (PhenixObservable<NSDate*>*)getObservablePlaybackHead;

- (PhenixObservable<NSNumber*>*)getObservableEnded;

- (id<PhenixDisposable>)limitBandwidth:(UInt64)bandwidthLimitInBps;
// clang-format on

@property(readonly, nonatomic, getter=getStartTime) NSDate* startTime;

@end
