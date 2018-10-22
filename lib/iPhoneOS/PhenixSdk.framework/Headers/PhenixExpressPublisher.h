/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDataQualityReason.h"
#import "PhenixDataQualityStatus.h"
#import "PhenixDisposable.h"

@protocol PhenixExpressPublisher<NSObject>

typedef void (^PhenixExpressPublisherDataQualityChangedCallback)(
    id<PhenixExpressPublisher> publisher, PhenixDataQualityStatus status, PhenixDataQualityReason reason);

// clang-format off
- (void)stop;
- (void)stop:(NSString*)reason;

- (void)enableAudio;

- (void)disableAudio;

- (void)enableVideo;

- (void)disableVideo;

- (void)setDataQualityChangedCallback:(PhenixExpressPublisherDataQualityChangedCallback)callback;

- (id<PhenixDisposable>)limitBandwidth:(UInt64)bandwidthLimitInBps;
// clang-format on

@property(readonly, nonatomic, getter=getStreamId) NSString* streamId;
@property(readonly, nonatomic, getter=hasEnded) BOOL ended;

@end
