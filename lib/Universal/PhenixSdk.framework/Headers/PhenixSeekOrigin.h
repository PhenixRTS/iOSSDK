/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

// Used with relative Seek APIs to indicate from where to start the seek operation
typedef NS_ENUM(NSInteger, PhenixSeekOrigin) {
  // Seek offset is relative to the beginning of the content
  PhenixSeekOriginBeginning,
  // Seek offset is relative to the current position (which could be the playback head for instance)
  PhenixSeekOriginCurrent,
  // Seek offset is relative to the end of the content
  PhenixSeekOriginEnd
};
