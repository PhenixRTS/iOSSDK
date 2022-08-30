/**
 * Copyright 2021 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixAspectRatioMode.h"
#import "PhenixHardwareAcceleratedDecodingMode.h"
#import "PhenixTimeShiftOptions.h"
#import "PhenixVideoRenderDeviceType.h"

// clang-format off

__attribute__((visibility("default"))) @interface PhenixRendererOptions : NSObject

@property(nonatomic) PhenixAspectRatioMode aspectRatioMode;

@property(nonatomic) BOOL autoMirroringEnabled;

@property(nonatomic) BOOL useNullVideoDevice;

@property(nonatomic) BOOL useNullAudioDevice;

@property(nonatomic) PhenixVideoRenderDeviceType preferredVideoRenderDeviceType;

@property(nonatomic) PhenixHardwareAcceleratedDecodingMode hardwareAcceleratedDecodingMode;

@property(nonatomic, nonnull, retain) PhenixTimeShiftOptions* timeShiftOptions;

@end
// clang-format on
