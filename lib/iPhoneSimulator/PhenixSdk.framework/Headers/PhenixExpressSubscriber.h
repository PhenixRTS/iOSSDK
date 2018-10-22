/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMediaStreamTrack.h"
#import "PhenixRenderer.h"
#import "PhenixRendererOptions.h"

@protocol PhenixExpressSubscriber<NSObject>

// clang-format off
- (id<PhenixRenderer>)createRenderer;

- (id<PhenixRenderer>)createRenderer:(PhenixRendererOptions*)options;

- (NSArray<id<PhenixMediaStreamTrack>>*)getAudioTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getVideoTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getTracks;

- (void)stop;

- (void)enableAudio;

- (void)disableAudio;

- (void)enableVideo;

- (void)disableVideo;
// clang-format on

@end
