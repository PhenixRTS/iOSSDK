/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixMonitorOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixSubscribeToMemberStreamOptions.h"

/**
 An options builder for `[PhenixRoomExpress subscribeToMemberStream]`
 */
@protocol PhenixSubscribeToMemberStreamOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

/**
 Automatically instantiates a Renderer using the provided options in case of a successful member stream subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

/**
 Automatically instantiates a Renderer using the provided video layer in case of a successful member stream
 subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRenderer:(CALayer*)videoElement;

/**
 Automatically instantiates an audio-only Renderer in case of a successful member stream subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withAudioOnlyRenderer;

/**
 Automatically instantiates an audio-only Renderer in case of a successful member stream subscription.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 - Attention: Use `withAudioOnlyRenderer` instead
 */
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withRenderer
  __attribute((deprecated("Use withAudioOnlyRenderer instead")));

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withMonitor:(PhenixMonitorSetupFailedCallback)setupFailedCallback
                                                              :(PhenixMonitorStreamEndedCallback)streamEndedCallback
                                                              :(id<PhenixMonitorOptions>)options;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withConnectOptions:(NSArray<NSString*>*)connectOptions;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withTags:(NSArray<NSString*>*)tags;

- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withStreamToken:(NSString*)streamToken;

/**
 Will not attempt to retry a stream if it failed due to unauthorized status
 */
- (id<PhenixSubscribeToMemberStreamOptionsBuilder>)withSkipRetryOnUnauthorized;

- (id<PhenixSubscribeToMemberStreamOptions>)buildSubscribeToMemberStreamOptions;
// clang-format on

@end
