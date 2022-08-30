/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixStreamEndedReason.h"

// clang-format off

__attribute__((visibility("default"))) @interface PhenixPublisherEndedInfo : NSObject

@property(nonatomic) BOOL hasEnded;

@property(nonatomic) PhenixStreamEndedReason reason;

@property(nonatomic, retain) NSString* reasonDescription;

@end
    // clang-format on
