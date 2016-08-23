/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixRendererStartStatus) {
  // Success
  PhenixRendererStartStatusOk = 200,
  // Missing or invalid arguments, reattempt with fixed parameters
  PhenixRendererStartStatusBadRequest = 400,
  // The request conflicts with the current state of the resource, do not retry
  PhenixRendererStartStatusConflict = 410,
  // General error, retry once
  PhenixRendererStartStatusFailed = 500,
  // Timeout error, retry once
  PhenixRendererStartStatusTimeout = 504
};