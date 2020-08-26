/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixChannelOptions.h"
#import "PhenixMemberRole.h"
#import "PhenixPublishOptions.h"
#import "PhenixPublishRemoteOptions.h"
#import "PhenixPublishToChannelOptions.h"
#import "PhenixStreamSelectionStrategy.h"
#import "PhenixStreamType.h"

@protocol PhenixPublishToChannelOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishToChannelOptionsBuilder>)withChannelOptions:(id<PhenixChannelOptions>)channelOptions;

- (id<PhenixPublishToChannelOptionsBuilder>)withChannelId:(NSString*)channelId;

- (id<PhenixPublishToChannelOptionsBuilder>)withMemberRole:(PhenixMemberRole)memberRole;

- (id<PhenixPublishToChannelOptionsBuilder>)withStreamType:(PhenixStreamType)streamType;

- (id<PhenixPublishToChannelOptionsBuilder>)withScreenName:(NSString*)screenName;

- (id<PhenixPublishToChannelOptionsBuilder>)withViewerStreamSelectionStrategy:(PhenixStreamSelectionStrategy)strategy;

- (id<PhenixPublishToChannelOptionsBuilder>)withPublishOptions:(id<PhenixPublishOptions>)publishOptions;

- (id<PhenixPublishToChannelOptionsBuilder>)withPublishRemoteOptions:(id<PhenixPublishRemoteOptions>)publishRemoteOptions;

- (id<PhenixPublishToChannelOptionsBuilder>)withMemberRoleUpdateDeferralUntilFirstDataPublished;

- (id<PhenixPublishToChannelOptionsBuilder>)withoutWildcardTokens;

- (id<PhenixPublishToChannelOptions>)buildPublishToChannelOptions;
// clang-format on

@end
