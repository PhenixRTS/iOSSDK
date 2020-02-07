/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixFrameNotification.h"
#import "PhenixMediaStream.h"
#import "PhenixMediaStreamTrack.h"
#import "PhenixRequestStatus.h"
#import "PhenixUserMediaOptions.h"

@protocol PhenixUserMediaStream<NSObject>

typedef void (^FrameReadyForProcessingCallback)(id<PhenixFrameNotification> frameNotification);

// clang-format off
- (PhenixRequestStatus)applyOptions:(const PhenixUserMediaOptions*)options;

- (void)setFrameReadyCallback:(id<PhenixMediaStreamTrack>)trackToReceiveFramesFrom
                             :(FrameReadyForProcessingCallback)callback;
// clang-format on

@property(readonly, nonatomic, getter=getMediaStream) id<PhenixMediaStream> mediaStream;

@end
