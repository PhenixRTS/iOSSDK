/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "Express/PhenixPublishOptions.h"
#import "Express/PhenixPublishRemoteOptions.h"
#import "Express/PhenixPublishToRoomOptions.h"
#import "Express/PhenixStreamSelectionStrategy.h"
#import "Room/PhenixMemberRole.h"
#import "Room/PhenixRoomOptions.h"
#import "Room/PhenixStreamType.h"

@protocol PhenixPublishToRoomOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixPublishToRoomOptionsBuilder>)withRoomOptions:(id<PhenixRoomOptions>)roomOptions;

- (id<PhenixPublishToRoomOptionsBuilder>)withMemberRole:(PhenixMemberRole)memberRole;

- (id<PhenixPublishToRoomOptionsBuilder>)withStreamType:(PhenixStreamType)streamType;

- (id<PhenixPublishToRoomOptionsBuilder>)withScreenName:(NSString*)screenName;

- (id<PhenixPublishToRoomOptionsBuilder>)withViewerStreamSelectionStrategy:(PhenixStreamSelectionStrategy)strategy;

- (id<PhenixPublishToRoomOptionsBuilder>)withWildcardTokens;

- (id<PhenixPublishToRoomOptionsBuilder>)withPublishOptions:(id<PhenixPublishOptions>)publishOptions;

- (id<PhenixPublishToRoomOptionsBuilder>)withPublishRemoteOptions:(id<PhenixPublishRemoteOptions>)publishRemoteOptions;

- (id<PhenixPublishToRoomOptions>)buildPublishToRoomOptions;
// clang-format on

@end
