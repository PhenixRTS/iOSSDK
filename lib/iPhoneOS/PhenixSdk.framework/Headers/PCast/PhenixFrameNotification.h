/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <CoreMedia/CoreMedia.h>
#import <Foundation/Foundation.h>

@protocol PhenixFrameNotification<NSObject>

typedef void (^ReadFrameCallback)(CMSampleBufferRef frame);

- (void)read:(ReadFrameCallback)callback;

- (void)write:(CMSampleBufferRef)newFrame;

- (void)drop;

@end
