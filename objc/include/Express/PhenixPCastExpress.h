/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Common/PhenixRequestStatus.h"
#import "Express/PhenixExpressPublisher.h"
#import "Express/PhenixExpressSubscriber.h"
#import "Express/PhenixPublishOptions.h"
#import "Express/PhenixPublishRemoteOptions.h"
#import "Express/PhenixSubscribeOptions.h"
#import "PCast/PhenixPCast.h"
#import "PCast/PhenixRenderer.h"
#import "PCast/PhenixUserMediaStream.h"

@protocol PhenixPCastExpress<NSObject>

typedef void (^PhenixPCastExpressPublishCallback)(PhenixRequestStatus status, id<PhenixExpressPublisher> publisher);
typedef void (^PhenixPCastExpressPublishWithPreviewCallback)(
    PhenixRequestStatus status, id<PhenixExpressPublisher> publisher, id<PhenixRenderer> previewRenderer);
typedef void (^PhenixPCastExpressSubscribeCallback)(
    PhenixRequestStatus status, id<PhenixExpressSubscriber> subscriber, id<PhenixRenderer> renderer);
typedef void (^PhenixPCastExpressGetUserMediaCallback)(
    PhenixRequestStatus status, id<PhenixUserMediaStream> userMediaStream);
typedef void (^PhenixPCastExpressWaitForOnlineCallback)();

// clang-format off
- (void)getUserMedia:(const PhenixUserMediaOptions*)options
                    :(PhenixPCastExpressGetUserMediaCallback)callback;

- (void)publish:(id<PhenixPublishOptions>)options
               :(PhenixPCastExpressPublishCallback)callback;

- (void)publishWithPreview:(id<PhenixPublishOptions>)options
                          :(PhenixPCastExpressPublishWithPreviewCallback)callback;

- (void)publishRemote:(id<PhenixPublishRemoteOptions>)options
                     :(PhenixPCastExpressPublishCallback)callback;

- (void)subscribe:(id<PhenixSubscribeOptions>)options
                 :(PhenixPCastExpressSubscribeCallback)callback;

- (void)waitForOnline:(PhenixPCastExpressWaitForOnlineCallback)callback;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCast> pcast;

@end
