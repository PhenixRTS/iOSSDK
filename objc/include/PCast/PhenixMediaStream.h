/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixMediaStreamTrack.h"
#import "PCast/PhenixRenderer.h"
#import "PCast/PhenixStreamEndedReason.h"

#import <Foundation/Foundation.h>

@protocol PhenixMediaStream<NSObject>

typedef void (^StreamEndedCallback)(
    id<PhenixMediaStream> mediaStream, PhenixStreamEndedReason reason, NSString* reasonDescription);

- (void)stop;

- (void)setStreamEndedCallback:(StreamEndedCallback)callback;

- (id<PhenixRenderer>)createRenderer;

// NSArray of id<PhenixMediaStreamTrack>
- (NSArray*)getAudioTracks;

// NSArray of id<PhenixMediaStreamTrack>
- (NSArray*)getVideoTracks;

// NSArray of id<PhenixMediaStreamTrack>
- (NSArray*)getTracks;

@end
