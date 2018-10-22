/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixObservable.h"
#import "PhenixStreamType.h"
#import "PhenixTrackState.h"

@protocol PhenixStream<NSObject>

- (NSString*)getStreamUri;

- (PhenixStreamType)getStreamType;

- (PhenixObservable<NSNumber*>*)getObservableAudioState;

- (PhenixObservable<NSNumber*>*)getObservableVideoState;

@end
