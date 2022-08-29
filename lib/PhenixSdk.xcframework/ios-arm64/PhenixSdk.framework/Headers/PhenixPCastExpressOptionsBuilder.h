/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixPCastExpressOptions.h"
#import "PhenixPCastInitializeOptions.h"

@protocol PhenixPCastExpressOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPCastExpressOptionsBuilder>)withBackendUri:(NSString*)backendUri;

- (id<PhenixPCastExpressOptionsBuilder>)withPCastUri:(NSString*)pcastUri;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationData:(NSString*)authenticationData;

- (id<PhenixPCastExpressOptionsBuilder>)addAuthenticationHeader:(NSString*)headerName
                                                               :(NSString*)headerValue;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationToken:(NSString*)authenticationToken;

- (id<PhenixPCastExpressOptionsBuilder>)withAuthenticationRouteOverride:(NSString*)authRouteOverride;

- (id<PhenixPCastExpressOptionsBuilder>)withStreamRouteOverride:(NSString*)streamRouteOverride;

- (id<PhenixPCastExpressOptionsBuilder>)withPCastInitializationOptions:
    (PhenixPCastInitializeOptions*)pcastInitializationOptions;

- (id<PhenixPCastExpressOptionsBuilder>)withUnrecoverableErrorCallback:
    (PhenixPCastExpressUnrecoverableErrorCallback)callback;

- (id<PhenixPCastExpressOptionsBuilder>)withMinimumConsoleLogLevel:(NSString*)minimumConsoleLogLevel;

- (id<PhenixPCastExpressOptions>)buildPCastExpressOptions;
// clang-format on

@end
