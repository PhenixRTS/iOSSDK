/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

// clang-format off

__attribute__((visibility("default"))) @interface PhenixTimeShiftOptions : NSObject

@property(nonatomic) BOOL viewportSizeBasedRenditionSelectionEnabled;

@property(nonatomic) BOOL lowerBandwidthWhileSeekingEnabled;

@end
// clang-format on
