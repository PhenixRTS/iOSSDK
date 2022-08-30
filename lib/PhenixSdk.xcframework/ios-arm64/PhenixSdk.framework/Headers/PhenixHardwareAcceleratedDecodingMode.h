/**
 * Copyright 2021 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixHardwareAcceleratedDecodingMode) {
  // Hardware acceleration is turned on if the device is certified for it
  PhenixHardwareAcceleratedDecodingModeAutomatic,
  // Hardware acceleration is always turned on
  PhenixHardwareAcceleratedDecodingModeOn,
  // Hardware acceleration is always turned off
  PhenixHardwareAcceleratedDecodingModeOff
};
