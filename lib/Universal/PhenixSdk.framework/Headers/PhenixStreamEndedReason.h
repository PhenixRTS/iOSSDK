/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixStreamEndedReason) {
  PhenixStreamEndedReasonEnded,
  PhenixStreamEndedReasonFailed,
  PhenixStreamEndedReasonCensored,
  PhenixStreamEndedReasonMaintenance,
  PhenixStreamEndedReasonCapacity,
  PhenixStreamEndedReasonAppBackground,
  PhenixStreamEndedReasonCustom,
  PhenixStreamEndedReasonOverload
};
