/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

// Microphone polar pattern.
// Note: Direction of a polar pattern is relative to the orientation of the data source
typedef NS_ENUM(NSInteger, PhenixPolarPattern) {
  PhenixPolarPatternAutomatic,
  // equally sensitive to sound from any direction
  PhenixPolarPatternOmnidirectional,
  // most sensitive to sound from the direction in which the data source points and is (nearly) insensitive to sound
  // from the opposite direction
  PhenixPolarPatternCardioid,
  // most sensitive to sound from the direction in which the data source points and is less sensitive to sound from
  // the opposite direction
  PhenixPolarPatternSubcardioid
};
