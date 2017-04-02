/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

@protocol PhenixMediaStreamTrack<NSObject>

- (void)setEnabled:(BOOL)enabled;

- (BOOL)isEnabled;

@end
