/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixPCast.h"
#import "PCast/PhenixPCastAdmin.h"
#import "PCast/PhenixUserMediaOptions.h"

#import <Foundation/Foundation.h>

__attribute__((visibility("default"))) @interface PhenixPCastFactory : NSObject

+ (id<PhenixPCast>)createPCast;

+ (id<PhenixPCast>)createPCast:(NSString*)uri;

+ (id<PhenixPCastAdmin>)createPCastAdmin;

+ (id<PhenixPCastAdmin>)createPCastAdmin:(NSString*)uri;

@end
