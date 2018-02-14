/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixAspectRatioMode) {
  // Automatically select optimal mode (usually fill)
  PhenixAspectRatioModeAutomatic,
  // Fill entire render area. Video may be truncated.
  PhenixAspectRatioModeFill,
  // Black bars are added on sides or top/bottom or render area, video will not be truncated
  PhenixAspectRatioModeLetterbox
};
