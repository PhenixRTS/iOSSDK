/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixFrameNotification.h"
#import "PCast/PhenixMediaStream.h"
#import "PCast/PhenixMediaStreamTrack.h"
#import "PCast/PhenixUserMediaOptions.h"

#import <Foundation/Foundation.h>

@protocol PhenixUserMediaStream<NSObject>

typedef void (^FrameReadyForProcessingCallback)(id<PhenixFrameNotification> frameNotification);

// clang-format off
- (void)applyOptions:(const PhenixUserMediaOptions*)options;

- (void)setFrameReadyCallback:(id<PhenixMediaStreamTrack>)trackToReceiveFramesFrom
                             :(FrameReadyForProcessingCallback)callback;
// clang-format on

@property(readonly, nonatomic, getter=getMediaStream) id<PhenixMediaStream> mediaStream;

@end
