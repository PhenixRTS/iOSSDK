/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
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
