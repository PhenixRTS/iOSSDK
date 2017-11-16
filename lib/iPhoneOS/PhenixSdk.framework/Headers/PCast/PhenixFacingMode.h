/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixFacingMode) {
  // Selects a facing mode automatically
  PhenixFacingModeAutomatic,
  // Indicates device does not have facing mode defined
  PhenixFacingModeUndefined,
  // Facing user, e.g. front camera
  PhenixFacingModeUser,
  // Facing surrounding environment, e.g. back camera
  PhenixFacingModeEnvironment
};
