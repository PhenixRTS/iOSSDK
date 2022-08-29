/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixJoinRoomOptions.h"
#import "PhenixMemberRole.h"
#import "PhenixMonitorOptions.h"
#import "PhenixStream.h"

@protocol PhenixJoinRoomOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixJoinRoomOptionsBuilder>)withCapabilities:(NSArray<NSString*>*)capabilities;

- (id<PhenixJoinRoomOptionsBuilder>)withRole:(PhenixMemberRole)memberRole;

- (id<PhenixJoinRoomOptionsBuilder>)withScreenName:(NSString*)screenName;

- (id<PhenixJoinRoomOptionsBuilder>)withRoomId:(NSString*)roomId;

- (id<PhenixJoinRoomOptionsBuilder>)withRoomAlias:(NSString*)roomAlias;

- (id<PhenixJoinRoomOptionsBuilder>)withStreams:(NSArray<id<PhenixStream>>*)streams;

- (id<PhenixJoinRoomOptions>)buildJoinRoomOptions;
// clang-format on

@end
