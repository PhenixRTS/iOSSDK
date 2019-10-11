/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixJoinChannelOptions.h"
#import "PhenixJoinRoomOptions.h"
#import "PhenixRendererOptions.h"
#import "PhenixStreamSelectionStrategy.h"

/**
 An options builder for `[PhenixChannelExpress joinChannel]`
 */
@protocol PhenixJoinChannelOptionsBuilder<NSObject>

// clang-format off
/**
 Automatically instantiates a Renderer using the provided options in case of a successful channel join.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixJoinChannelOptionsBuilder>)withRendererOptions:(PhenixRendererOptions*)rendererOptions;

/**
 Automatically instantiates a Renderer using the provided video layer in case of a successful channel join.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixJoinChannelOptionsBuilder>)withRenderer:(CALayer*)videoElement;

/**
 Automatically instantiates an audio-only Renderer in case of a successful channel join.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 */
- (id<PhenixJoinChannelOptionsBuilder>)withAudioOnlyRenderer;

/**
 Automatically instantiates an audio-only Renderer in case of a successful channel join.

 - SeeAlso: `PhenixPCastExpressSubscribeCallback`
 - Attention: Use `withAudioOnlyRenderer` instead
 */
- (id<PhenixJoinChannelOptionsBuilder>)withRenderer __attribute((deprecated("Use withAudioOnlyRenderer instead")));

- (id<PhenixJoinChannelOptionsBuilder>)withStreamSelectionStrategy:
    (PhenixStreamSelectionStrategy)streamSelectionStrategy;

- (id<PhenixJoinChannelOptionsBuilder>)withJoinRoomOptions:(id<PhenixJoinRoomOptions>)joinRoomOptions;

/**
 Token to be used when attempting to subscribe to a stream. Must be a properly configured edge authentication token.

 - SeeAlso: [https://github.com/PhenixRTS/EdgeAuth]
 */
- (id<PhenixJoinChannelOptionsBuilder>)withStreamToken:(NSString*)streamToken;

/**
 Will not attempt to retry a stream if it failed due to unauthorized status
 */
- (id<PhenixJoinChannelOptionsBuilder>)withSkipRetryOnUnauthorized;

- (id<PhenixJoinChannelOptions>)buildJoinChannelOptions;
// clang-format on

@end
