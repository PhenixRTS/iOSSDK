/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "PCast/PhenixRenderer.h"
#import "PCast/PhenixStreamEndedReason.h"

#import <Foundation/Foundation.h>

@protocol PhenixMediaStream<NSObject>

typedef void (^StreamEndedCallback)(
    id<PhenixMediaStream> mediaStream, PhenixStreamEndedReason reason, NSString* reasonDescription);

- (void)stop;

- (void)setStreamEndedCallback:(StreamEndedCallback)callback;

- (id<PhenixRenderer>)createRenderer;

@end