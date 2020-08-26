/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixVideoRenderDeviceType) {
  // Automatically select optimal render device
  PhenixVideoRenderDeviceTypeAutomatic,
  // OpenGLES based render device
  PhenixVideoRenderDeviceOpenGLES
};
