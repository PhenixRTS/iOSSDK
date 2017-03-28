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

typedef NS_ENUM(NSInteger, PhenixFlashMode) {
  PhenixFlashModeAutomatic,
  PhenixFlashModeAlwaysOn,
  PhenixFlashModeAlwaysOff
};

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

// Indicates roughly where a source (e.g. microphone or camera) is mounted on the device (e.g. iPhone)
typedef NS_ENUM(NSInteger, PhenixLocation) { PhenixLocationAutomatic, PhenixLocationUpper, PhenixLocationLower };

typedef NS_ENUM(NSInteger, PhenixAudioEchoCancelationMode) {
  PhenixAudioEchoCancelationModeAutomatic,
  // AEC is turned on if available
  PhenixAudioEchoCancelationModeOn,
  // AEC is off
  PhenixAudioEchoCancelationModeOff
};

@interface PhenixUserMediaVideoOptions : NSObject

@property(nonatomic) BOOL enabled;
@property(nonatomic) PhenixFacingMode facingMode;
@property(nonatomic) PhenixFlashMode flashMode;

@end

@interface PhenixUserMediaAudioOptions : NSObject

@property(nonatomic) BOOL enabled;
@property(nonatomic) PhenixFacingMode facingMode;
@property(nonatomic) PhenixLocation preferredMicrophoneLocation;
@property(nonatomic) PhenixPolarPattern preferredMicrophonePolarPattern;
@property(nonatomic) PhenixAudioEchoCancelationMode preferredAudioEchoCancelationMode;

@end

@interface PhenixUserMediaOptions : NSObject

@property(nonatomic, readonly) PhenixUserMediaAudioOptions* audio;
@property(nonatomic, readonly) PhenixUserMediaVideoOptions* video;

@end
