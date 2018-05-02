/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixAudioEchoCancelationMode.h"
#import "PCast/PhenixAutoFocusMode.h"
#import "PCast/PhenixFacingMode.h"
#import "PCast/PhenixFlashMode.h"
#import "PCast/PhenixLocation.h"
#import "PCast/PhenixPolarPattern.h"
#import "PCast/PhenixVideoSourceRotationMode.h"

typedef NS_ENUM(NSInteger, PhenixConstraintType) {
  // Hard constraint: Capability must have at least the specified value
  PhenixConstraintTypeMin,
  // Hard constraint: Capability must have at most the specified value
  PhenixConstraintTypeMax,
  // Hard constraint: Capability must have exactly the specified value
  PhenixConstraintTypeExact,
  // Soft constraint: Capability should have specified value, but other values are acceptable
  PhenixConstraintTypeIdeal
};

// clang-format off
__attribute__((visibility("default"))) @interface PhenixDeviceConstraint : NSObject

+ (PhenixDeviceConstraint*)initWithDouble:(double)value
                                         :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithDouble:(double)value;
+ (PhenixDeviceConstraint*)initWithString:(NSString*)value
                                         :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithString:(NSString*)value;
+ (PhenixDeviceConstraint*)initWithFacingMode:(PhenixFacingMode)value
                                             :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithFacingMode:(PhenixFacingMode)value;
+ (PhenixDeviceConstraint*)initWithFlashMode:(PhenixFlashMode)value
                                            :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithFlashMode:(PhenixFlashMode)value;
+ (PhenixDeviceConstraint*)initWithLocation:(PhenixLocation)value
                                           :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithLocation:(PhenixLocation)value;
+ (PhenixDeviceConstraint*)initWithPolarPattern:(PhenixPolarPattern)value
                                               :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithPolarPattern:(PhenixPolarPattern)value;
+ (PhenixDeviceConstraint*)initWithAudioEchoCancelationMode:(PhenixAudioEchoCancelationMode)value
                                                           :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithAudioEchoCancelationMode:(PhenixAudioEchoCancelationMode)value;
+ (PhenixDeviceConstraint*)initWithVideoSourceRotationMode:(PhenixVideoSourceRotationMode)value
                                                          :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithVideoSourceRotationMode:(PhenixVideoSourceRotationMode)value;
+ (PhenixDeviceConstraint*)initWithAutoFocusMode:(PhenixAutoFocusMode)value
                                                :(PhenixConstraintType)type;
+ (PhenixDeviceConstraint*)initWithAutoFocusMode:(PhenixAutoFocusMode)value;
// clang-format on

- (void)updateDouble:(double)value;
- (void)updateString:(NSString*)value;
- (void)updateFacingMode:(PhenixFacingMode)value;
- (void)updateFlashMode:(PhenixFlashMode)value;
- (void)updateLocation:(PhenixLocation)value;
- (void)updatePolarPattern:(PhenixPolarPattern)value;
- (void)updateAudioEchoCancelationMode:(PhenixAudioEchoCancelationMode)value;
- (void)updateVideoSourceRotationMode:(PhenixVideoSourceRotationMode)value;
- (void)updateAutoFocusMode:(PhenixAutoFocusMode)value;

@property(readonly, nonatomic) PhenixConstraintType type;
@property(readonly, nonatomic) NSString* valueAsString;

@end
