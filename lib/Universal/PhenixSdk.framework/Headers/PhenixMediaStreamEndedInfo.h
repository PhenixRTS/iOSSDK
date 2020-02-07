/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixStreamEndedReason.h"
#import "PhenixStreamEndedState.h"

// clang-format off

__attribute__((visibility("default"))) @interface PhenixMediaStreamEndedInfo : NSObject

@property(nonatomic) PhenixStreamEndedState state;

@property(nonatomic) PhenixStreamEndedReason reason;

@property(nonatomic, retain) NSString* reasonDescription;

@end
