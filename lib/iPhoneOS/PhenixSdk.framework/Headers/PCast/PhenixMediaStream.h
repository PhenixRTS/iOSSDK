/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixMediaStreamTrack.h"
#import "PCast/PhenixRenderer.h"
#import "PCast/PhenixRendererOptions.h"
#import "PCast/PhenixStreamEndedReason.h"

@protocol PhenixMediaStream<NSObject>

typedef void (^StreamEndedCallback)(
    id<PhenixMediaStream> mediaStream, PhenixStreamEndedReason reason, NSString* reasonDescription);

- (void)stop;

- (void)setStreamEndedCallback:(StreamEndedCallback)callback;

- (id<PhenixRenderer>)createRenderer;

- (id<PhenixRenderer>)createRenderer:(PhenixRendererOptions*)options;

- (NSArray<id<PhenixMediaStreamTrack>>*)getAudioTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getVideoTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getTracks;

@end
