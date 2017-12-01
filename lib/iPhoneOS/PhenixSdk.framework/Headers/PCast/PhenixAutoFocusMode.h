/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixAutoFocusMode) {
  // Automatically select optimal mode (usually continuous)
  PhenixAutoFocusModeAutomatic,
  // Focus is locked
  PhenixAutoFocusModeLocked,
  // Focus is adjusted once then mode is changed to locked
  PhenixAutoFocusModeAutoThenLocked,
  // Focus is monitored and adjusted continuously
  PhenixAutoFocusModeContinuous
};
