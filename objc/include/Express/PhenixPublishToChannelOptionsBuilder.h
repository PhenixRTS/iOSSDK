/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixPublishOptions.h"
#import "Express/PhenixPublishRemoteOptions.h"
#import "Express/PhenixPublishToChannelOptions.h"
#import "Express/PhenixStreamSelectionStrategy.h"
#import "Room/PhenixChannelOptions.h"
#import "Room/PhenixMemberRole.h"
#import "Room/PhenixStreamType.h"

@protocol PhenixPublishToChannelOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishToChannelOptionsBuilder>)withChannelOptions:(id<PhenixChannelOptions>)channelOptions;

- (id<PhenixPublishToChannelOptionsBuilder>)withMemberRole:(PhenixMemberRole)memberRole;

- (id<PhenixPublishToChannelOptionsBuilder>)withStreamType:(PhenixStreamType)streamType;

- (id<PhenixPublishToChannelOptionsBuilder>)withScreenName:(NSString*)screenName;

- (id<PhenixPublishToChannelOptionsBuilder>)withViewerStreamSelectionStrategy:(PhenixStreamSelectionStrategy)strategy;

- (id<PhenixPublishToChannelOptionsBuilder>)withPublishOptions:(id<PhenixPublishOptions>)publishOptions;

- (id<PhenixPublishToChannelOptionsBuilder>)withPublishRemoteOptions:(id<PhenixPublishRemoteOptions>)publishRemoteOptions;

- (id<PhenixPublishToChannelOptions>)buildPublishToChannelOptions;
// clang-format on

@end
