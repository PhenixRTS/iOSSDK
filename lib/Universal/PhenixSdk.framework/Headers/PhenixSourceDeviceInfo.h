/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixFacingMode.h"
#import "PhenixMediaType.h"
#import "PhenixSourceDeviceType.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixSourceDeviceInfo : NSObject

@property(nonatomic, readonly) NSString* id;
@property(nonatomic, readonly) NSString* name;
@property(nonatomic, readonly) PhenixMediaType mediaType;
@property(nonatomic, readonly) PhenixSourceDeviceType deviceType;
@property(nonatomic, readonly) PhenixFacingMode facingMode;

@end
    // clang-format on
