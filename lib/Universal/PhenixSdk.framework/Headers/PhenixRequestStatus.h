/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixRequestStatus) {
  // Success
  PhenixRequestStatusOk = 200,
  // No stream available to subscribe to
  PhenixRequestStatusNoStreamPlaying = 299,
  // Missing or invalid arguments, reattempt with fixed parameters
  PhenixRequestStatusBadRequest = 400,
  // New token required, do not retry
  PhenixRequestStatusUnauthorized = 401,
  // The request conflicts with the current state of the resource, do not retry
  PhenixRequestStatusConflict = 409,
  // The resource referenced is no longer available, do not retry
  PhenixRequestStatusGone = 410,
  // PCast not initialized, do not retry
  PhenixRequestStatusNotInitialized = 412,
  // PCast not started, do not retry
  PhenixRequestStatusNotStarted = 417,
  // Request was rejected due to current load, retry with back-off
  PhenixRequestStatusRateLimited = 429,
  // Upgrade is required, do not retry
  PhenixRequestStatusUpgradeRequired = 499,
  // General error, retry once
  PhenixRequestStatusFailed = 500,
  // Capacity error, retry with back-off
  PhenixRequestStatusCapacity = 503,
  // Timeout error, retry once
  PhenixRequestStatusTimeout = 504,
  // Resource is not ready yet, retry
  PhenixRequestStatusNotReady = 599
};
