/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixExpressPublisher.h"
#import "PhenixExpressSubscriber.h"
#import "PhenixObservable.h"
#import "PhenixPCast.h"
#import "PhenixPublishOptions.h"
#import "PhenixPublishRemoteOptions.h"
#import "PhenixRenderer.h"
#import "PhenixRequestStatus.h"
#import "PhenixSubscribeOptions.h"
#import "PhenixUserMediaStream.h"

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

- (PhenixObservable<NSNumber*>*)getObservableIsOnlineStatus;
// clang-format on

@property(readonly, nonatomic) id<PhenixPCast> pcast;

@end
