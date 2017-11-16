/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixObservable.h"
#import "Room/PhenixStreamType.h"
#import "Room/PhenixTrackState.h"

#import <Foundation/Foundation.h>

@protocol PhenixStream<NSObject>

- (NSString*)getStreamUri;

- (PhenixStreamType)getStreamType;

- (PhenixObservable<NSNumber*>*)getObservableAudioState;

- (PhenixObservable<NSNumber*>*)getObservableVideoState;

@end
