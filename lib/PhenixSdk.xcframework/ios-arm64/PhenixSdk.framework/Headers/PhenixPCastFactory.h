/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixPCast.h"
#import "PhenixUserMediaOptions.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixPCastFactory : NSObject

+ (id<PhenixPCast>)createPCast;

+ (id<PhenixPCast>)createPCast:(NSString*)uri;

@end
    // clang-format on
