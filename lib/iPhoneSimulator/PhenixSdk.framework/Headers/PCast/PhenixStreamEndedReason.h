/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixStreamEndedReason) {
  PhenixStreamEndedReasonEnded,
  PhenixStreamEndedReasonFailed,
  PhenixStreamEndedReasonCensored,
  PhenixStreamEndedReasonMaintenance,
  PhenixStreamEndedReasonCapacity,
  PhenixStreamEndedReasonAppBackground,
  PhenixStreamEndedReasonCustom
};