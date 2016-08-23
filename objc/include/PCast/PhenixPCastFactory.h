/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixPCast.h"
#import "PCast/PhenixPCastAdmin.h"
#import "PCast/PhenixUserMediaOptions.h"

#import <Foundation/Foundation.h>

@interface PhenixPCastFactory : NSObject

+ (id<PhenixPCast>)createPCast;

+ (id<PhenixPCastAdmin>)createPCastAdmin;

+ (void)initializeDefaultUserMediaOptions:(struct PhenixUserMediaOptions*)options;

@end