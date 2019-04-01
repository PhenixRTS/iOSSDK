/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <AVFoundation/AVFoundation.h>
#import <CoreVideo/CoreVideo.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "PhenixDataQualityReason.h"
#import "PhenixDataQualityStatus.h"
#import "PhenixDimensions.h"
#import "PhenixFrameNotification.h"
#import "PhenixMediaStreamTrack.h"
#import "PhenixRendererStartStatus.h"
#import "PhenixRendererStatistics.h"

@protocol PhenixRenderer<NSObject>

typedef void (^RenderSurfaceReadyCallback)(id<PhenixRenderer> renderer, CALayer* renderSurface);
typedef void (^RendererDataQualityChangedCallback)(
    id<PhenixRenderer> renderer, PhenixDataQualityStatus status, PhenixDataQualityReason reason);
typedef void (^DataReceivedCallback)(id<PhenixRenderer> renderer);
typedef void (^LastVideoFrameRenderedReceivedCallback)(id<PhenixRenderer> renderer, CVPixelBufferRef nativeVideoFrame);
typedef void (^VideoDisplayDimensionsChangedCallback)(
    id<PhenixRenderer> renderer, const struct PhenixDimensions* displayDimensions);
typedef void (^FrameReadyForProcessingCallback)(id<PhenixFrameNotification> frameNotification);

// clang-format off
- (void)setRenderSurfaceReadyCallback:(RenderSurfaceReadyCallback)callback;

- (void)setDataQualityChangedCallback:(RendererDataQualityChangedCallback)callback;

- (void)setLastVideoFrameRenderedReceivedCallback:(LastVideoFrameRenderedReceivedCallback)callback;

- (void)setVideoDisplayDimensionsChangedCallback:(VideoDisplayDimensionsChangedCallback)callback;

- (void)setFrameReadyCallback:(id<PhenixMediaStreamTrack>)trackToReceiveFramesFrom
                             :(FrameReadyForProcessingCallback)callback;

- (PhenixRendererStartStatus)start;

- (PhenixRendererStartStatus)start:(CALayer*)renderLayer;

- (void)stop;

- (void)muteAudio;

- (void)unmuteAudio;

- (void)requestLastVideoFrameRendered;
// clang-format on

@property(readonly, nonatomic, getter=isAudioMuted) BOOL audioMuted;

@property(readonly, nonatomic) struct PhenixDimensions videoDisplayDimensions;

@property(readonly, nonatomic) struct PhenixRendererStatistics stats;

@end
