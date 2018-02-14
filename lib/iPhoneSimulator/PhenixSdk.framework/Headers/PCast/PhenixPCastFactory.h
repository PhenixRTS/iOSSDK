/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixPCast.h"
#import "PCast/PhenixUserMediaOptions.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixPCastFactory : NSObject

+ (id<PhenixPCast>)createPCast;

+ (id<PhenixPCast>)createPCast:(NSString*)uri;

@end
    // clang-format on
