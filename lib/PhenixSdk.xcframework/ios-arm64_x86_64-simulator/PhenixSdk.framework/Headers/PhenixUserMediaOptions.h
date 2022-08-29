/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDeviceCapability.h"
#import "PhenixDeviceConstraint.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixMediaTrackOptions : NSObject

@property(nonatomic) BOOL enabled;
@property(nonatomic, readonly) NSMutableDictionary<NSNumber*, NSArray<PhenixDeviceConstraint*>*>* capabilityConstraints;

@end

__attribute__((visibility("default"))) @interface PhenixUserMediaOptions : NSObject

@property(nonatomic, readonly) PhenixMediaTrackOptions* audio;
@property(nonatomic, readonly) PhenixMediaTrackOptions* video;

@end
    // clang-format on
