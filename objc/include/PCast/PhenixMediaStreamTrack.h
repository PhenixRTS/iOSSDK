/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

@protocol PhenixMediaStreamTrack<NSObject>

- (void)setEnabled:(BOOL)enabled;

- (BOOL)isEnabled;

@end
