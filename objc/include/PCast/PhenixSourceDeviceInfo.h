/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixFacingMode.h"
#import "PCast/PhenixMediaType.h"
#import "PCast/PhenixSourceDeviceType.h"

__attribute__((visibility("default"))) @interface PhenixSourceDeviceInfo : NSObject

@property(nonatomic, readonly) NSString* id;
@property(nonatomic, readonly) NSString* name;
@property(nonatomic, readonly) PhenixMediaType mediaType;
@property(nonatomic, readonly) PhenixSourceDeviceType deviceType;
@property(nonatomic, readonly) PhenixFacingMode facingMode;

@end
