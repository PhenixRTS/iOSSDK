/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "PCast/PhenixMediaStreamTrack.h"
#import "PCast/PhenixRenderer.h"
#import "PCast/PhenixRendererOptions.h"

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
