/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixDataQualityStatus) {
  // No data is being received
  PhenixDataQualityStatusNoData,
  // Only audio data is being received
  PhenixDataQualityStatusAudioOnly,
  // Receiving all data (e.g. audio and video)
  PhenixDataQualityStatusAll
};