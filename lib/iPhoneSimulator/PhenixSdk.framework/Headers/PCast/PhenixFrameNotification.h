/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <CoreMedia/CoreMedia.h>
#import <Foundation/Foundation.h>

@protocol PhenixFrameNotification<NSObject>

typedef void (^ReadFrameCallback)(CMSampleBufferRef frame);

- (void)read:(ReadFrameCallback)callback;

- (void)write:(CMSampleBufferRef)newFrame;

- (void)drop;

@end
