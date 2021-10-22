/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDataQualityReason.h"
#import "PhenixDataQualityStatus.h"
#import "PhenixDisposable.h"
#import "PhenixObservable.h"
#import "PhenixPublisherEndedInfo.h"
#import "PhenixStreamEndedReason.h"

@protocol PhenixPublisher<NSObject>

typedef void (^PhenixPublisherEndedCallback)(
    id<PhenixPublisher> publisher, PhenixStreamEndedReason reason, NSString* reasonDescription);
typedef void (^PhenixPublisherDataQualityChangedCallback)(
    id<PhenixPublisher> publisher, PhenixDataQualityStatus status, PhenixDataQualityReason reason);

- (void)stop;
- (void)stop:(NSString*)reason;

- (void)setPublisherEndedCallback:(PhenixPublisherEndedCallback)callback
    __attribute((deprecated("Use getObservableEndedInfo instead")));

- (void)setDataQualityChangedCallback:(PhenixPublisherDataQualityChangedCallback)callback;

- (id<PhenixDisposable>)limitBandwidth:(UInt64)bandwidthLimitInBps;

- (PhenixObservable<PhenixPublisherEndedInfo*>*)getObservableEndedInfo;

@property(readonly, nonatomic, getter=getStreamId) NSString* streamId;
@property(readonly, nonatomic, getter=hasEnded) BOOL ended;

@end
