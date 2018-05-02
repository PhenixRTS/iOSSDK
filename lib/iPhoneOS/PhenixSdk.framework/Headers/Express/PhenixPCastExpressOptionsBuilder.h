/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixPCastExpressOptions.h"
#import "PCast/PhenixPCastInitializeOptions.h"

@protocol PhenixPCastExpressOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPCastExpressOptionsBuilder>)withBackendUri:(NSString*)backendUri;

- (id<PhenixPCastExpressOptionsBuilder>)withPCastUri:(NSString*)pcastUri;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationData:(NSString*)authenticationData;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationToken:(NSString*)authenticationToken;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationRouteOverride:(NSString*)authRouteOverride;

- (id<PhenixPCastExpressOptionsBuilder>)withStreamRouteOverride:(NSString*)streamRouteOverride;

- (id<PhenixPCastExpressOptionsBuilder>)withPCastInitializationOptions:
    (PhenixPCastInitializeOptions*)pcastInitializationOptions;

- (id<PhenixPCastExpressOptionsBuilder>)withUnrecoverableErrorCallback:
    (PhenixPCastExpressUnrecoverableErrorCallback)callback;

- (id<PhenixPCastExpressOptions>)buildPCastExpressOptions;
// clang-format on

@end
