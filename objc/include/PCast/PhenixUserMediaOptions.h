/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixFacingMode) {
  PhenixFacingModeUnknown,
  PhenixFacingModeUser,       /* Facing user, e.g. front camera */
  PhenixFacingModeEnvironment /* Facing surrounding environment, e.g. back camera */
};

typedef NS_ENUM(NSInteger, PhenixFlashMode) {
  PhenixFlashModeAutomatic,
  PhenixFlashModeAlwaysOn,
  PhenixFlashModeAlwaysOff
};

struct PhenixUserMediaVideoOptions {
  BOOL enabled;
  PhenixFacingMode facingMode;
  PhenixFlashMode flashMode;
};

struct PhenixUserMediaOptions {
  BOOL audio;
  struct PhenixUserMediaVideoOptions video;
};
