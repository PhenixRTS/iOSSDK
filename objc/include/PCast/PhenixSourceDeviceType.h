/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixSourceDeviceType) {
  // Null device, i.e. blank screen or silence
  PhenixSourceDeviceTypeNull,
  // Physical device, e.g. microphone or camera
  PhenixSourceDeviceTypePhysical,
  // Capture system audio or video output
  PhenixSourceDeviceTypeSystemOutput,
  // Synthetic source, used for testing
  PhenixSourceDeviceTypeSynthetic,
  // Uri source, used to stream from uri
  PhenixSourceDeviceTypeUri
};
