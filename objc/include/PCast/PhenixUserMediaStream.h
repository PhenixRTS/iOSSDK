/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixMediaStream.h"
#import "PCast/PhenixUserMediaOptions.h"

#import <Foundation/Foundation.h>

@protocol PhenixUserMediaStream<NSObject>

- (void)applyOptions:(const PhenixUserMediaOptions*)options;

@property(readonly, nonatomic, getter=getMediaStream) id<PhenixMediaStream> mediaStream;

@end
