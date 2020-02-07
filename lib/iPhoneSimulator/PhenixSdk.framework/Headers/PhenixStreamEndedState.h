/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixStreamEndedState) {
  PhenixStreamEndedStateNotEnded,
  PhenixStreamEndedStateEndedByPlatform,
  PhenixStreamEndedStateEndedByStop
};
