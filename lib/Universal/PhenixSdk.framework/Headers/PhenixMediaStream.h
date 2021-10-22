/**
 * Copyright 2019 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMediaStreamEndedInfo.h"
#import "PhenixMediaStreamTrack.h"
#import "PhenixObservable.h"
#import "PhenixRenderer.h"
#import "PhenixRendererOptions.h"
#import "PhenixStreamEndedReason.h"

@protocol PhenixMediaStream<NSObject>

typedef void (^StreamEndedCallback)(
    id<PhenixMediaStream> mediaStream, PhenixStreamEndedReason reason, NSString* reasonDescription);

- (void)stop;

- (void)setStreamEndedCallback:(StreamEndedCallback)callback
    __attribute((deprecated("Use getObservableEndedInfo instead")));

- (id<PhenixRenderer>)createRenderer;

- (id<PhenixRenderer>)createRenderer:(PhenixRendererOptions*)options;

- (NSArray<id<PhenixMediaStreamTrack>>*)getAudioTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getVideoTracks;

- (NSArray<id<PhenixMediaStreamTrack>>*)getTracks;

- (PhenixObservable<PhenixMediaStreamEndedInfo*>*)getObservableEndedInfo;

@end
