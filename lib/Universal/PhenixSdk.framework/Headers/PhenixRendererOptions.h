/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixAspectRatioMode.h"

// clang-format off

__attribute__((visibility("default"))) @interface PhenixRendererOptions : NSObject

@property(nonatomic) PhenixAspectRatioMode aspectRatioMode;

@property(nonatomic) BOOL useNullVideoDevice;

@property(nonatomic) BOOL useNullAudioDevice;

@end
    // clang-format on