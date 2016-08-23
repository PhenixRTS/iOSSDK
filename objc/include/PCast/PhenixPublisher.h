/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixDataQualityReason.h"
#import "PCast/PhenixDataQualityStatus.h"
#import "PCast/PhenixStreamEndedReason.h"

#import <Foundation/Foundation.h>

@protocol PhenixPublisher<NSObject>

typedef void (^PublisherEndedCallback)(
    id<PhenixPublisher> publisher, PhenixStreamEndedReason reason, NSString* reasonDescription);
typedef void (^PublisherDataQualityChangedCallback)(
    id<PhenixPublisher> publisher, PhenixDataQualityStatus status, PhenixDataQualityReason reason);

- (void)stop;
- (void)stop:(NSString*)reason;

- (void)setPublisherEndedCallback:(PublisherEndedCallback)callback;

- (void)setDataQualityChangedCallback:(PublisherDataQualityChangedCallback)callback;

@property(readonly, nonatomic, getter=getStreamId) NSString* streamId;
@property(readonly, nonatomic, getter=hasEnded) BOOL ended;

@end