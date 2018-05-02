/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PhenixDataQualityReason) {
  // Nothing currently impacting data quality
  PhenixDataQualityReasonNone,
  // Limited upload bandwidth is impacting quality
  PhenixDataQualityReasonUploadLimited,
  // Limited download bandwidth is impacting quality
  PhenixDataQualityReasonDownloadLimited,
  // Limited upload bandwidth at the publisher is impacting quality
  PhenixDataQualityReasonPublisherLimited,
  // The network is limiting the bandwidth, e.g. single bit rate stream with many subscribers
  PhenixDataQualityReasonNetworkLimited
};