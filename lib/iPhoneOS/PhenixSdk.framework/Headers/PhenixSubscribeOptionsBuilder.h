/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixMonitorOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixSubscribeOptions.h"

/**
 An options builder for `[PhenixPCastExpress subscribe]`
 */
@protocol PhenixSubscribeOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixSubscribeOptionsBuilder>)withStreamId:(NSString*)streamId;

- (id<PhenixSubscribeOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

/**
 Automatically instantiates a Renderer using the provided options in case of a successful subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

/**
 Automatically instantiates a Renderer using the provided video layer in case of a successful subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeOptionsBuilder>)withRenderer:(CALayer*)videoElement;

/**
 Automatically instantiates an audio-only Renderer in case of a successful subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeOptionsBuilder>)withAudioOnlyRenderer;

/**
 Automatically instantiates an audio-only Renderer in case of a successful subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 - Attention: Use `withAudioOnlyRenderer` instead
 */
- (id<PhenixSubscribeOptionsBuilder>)withRenderer __attribute((deprecated("Use withAudioOnlyRenderer instead")));

- (id<PhenixSubscribeOptionsBuilder>)withMonitor:(PhenixMonitorSetupFailedCallback)setupFailedCallback
                                                :(PhenixMonitorStreamEndedCallback)streamEndedCallback
                                                :(id<PhenixMonitorOptions>)options;

- (id<PhenixSubscribeOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixSubscribeOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixSubscribeOptionsBuilder>)withStreamToken:(NSString*)streamToken;

/**
 Will not attempt to retry a stream if it failed due to unauthorized status
 */
- (id<PhenixSubscribeOptionsBuilder>)withSkipRetryOnUnauthorized;

- (id<PhenixSubscribeOptions>)buildSubscribeOptions;
// clang-format on

@end
