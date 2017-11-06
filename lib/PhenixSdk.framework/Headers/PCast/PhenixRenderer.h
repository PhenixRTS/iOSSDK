/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixDataQualityReason.h"
#import "PCast/PhenixDataQualityStatus.h"
#import "PCast/PhenixDimensions.h"
#import "PCast/PhenixFrameNotification.h"
#import "PCast/PhenixMediaStreamTrack.h"
#import "PCast/PhenixRendererStartStatus.h"

#import <AVFoundation/AVFoundation.h>
#import <CoreVideo/CoreVideo.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

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

- (void)stop;

- (void)muteAudio;

- (void)unmuteAudio;

- (void)requestLastVideoFrameRendered;
// clang-format on

@property(readonly, nonatomic, getter=isAudioMuted) BOOL audioMuted;

@property(readonly, nonatomic) struct PhenixDimensions videoDisplayDimensions;

@end
