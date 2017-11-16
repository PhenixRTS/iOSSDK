/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixDeviceCapability.h"
#import "PCast/PhenixDeviceConstraint.h"

__attribute__((visibility("default"))) @interface PhenixMediaTrackOptions : NSObject

@property(nonatomic) BOOL enabled;
@property(nonatomic, readonly) NSMutableDictionary<NSNumber*, NSArray<PhenixDeviceConstraint*>*>* capabilityConstraints;

@end

__attribute__((visibility("default"))) @interface PhenixUserMediaOptions : NSObject

@property(nonatomic, readonly) PhenixMediaTrackOptions* audio;
@property(nonatomic, readonly) PhenixMediaTrackOptions* video;

@end
