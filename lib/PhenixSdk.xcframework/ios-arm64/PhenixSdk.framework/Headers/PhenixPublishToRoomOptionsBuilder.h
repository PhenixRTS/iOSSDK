/**
 * Copyright 2020 Phenix Real Time Solutions, Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMemberRole.h"
#import "PhenixPublishOptions.h"
#import "PhenixPublishRemoteOptions.h"
#import "PhenixPublishToRoomOptions.h"
#import "PhenixRoomOptions.h"
#import "PhenixStreamSelectionStrategy.h"
#import "PhenixStreamType.h"

@protocol PhenixPublishToRoomOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishToRoomOptionsBuilder>)withRoomOptions:(id<PhenixRoomOptions>)roomOptions;

- (id<PhenixPublishToRoomOptionsBuilder>)withRoomId:(NSString*)roomId;

- (id<PhenixPublishToRoomOptionsBuilder>)withMemberRole:(PhenixMemberRole)memberRole;

- (id<PhenixPublishToRoomOptionsBuilder>)withStreamType:(PhenixStreamType)streamType;

- (id<PhenixPublishToRoomOptionsBuilder>)withScreenName:(NSString*)screenName;

- (id<PhenixPublishToRoomOptionsBuilder>)withViewerStreamSelectionStrategy:(PhenixStreamSelectionStrategy)strategy;

- (id<PhenixPublishToRoomOptionsBuilder>)withWildcardTokens;

- (id<PhenixPublishToRoomOptionsBuilder>)withPublishOptions:(id<PhenixPublishOptions>)publishOptions;

- (id<PhenixPublishToRoomOptionsBuilder>)withPublishRemoteOptions:(id<PhenixPublishRemoteOptions>)publishRemoteOptions;

- (id<PhenixPublishToRoomOptionsBuilder>)withMemberRoleUpdateDeferralUntilFirstDataPublished;

- (id<PhenixPublishToRoomOptions>)buildPublishToRoomOptions;
// clang-format on

@end
