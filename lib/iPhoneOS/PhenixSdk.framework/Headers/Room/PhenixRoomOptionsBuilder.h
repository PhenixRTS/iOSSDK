/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

#import "Room/PhenixRoomOptions.h"
#import "Room/PhenixRoomType.h"

@protocol PhenixRoomOptionsBuilder<NSObject>

// clang-format off
- (id<PhenixRoomOptionsBuilder>)withName:(NSString*)name;

- (id<PhenixRoomOptionsBuilder>)withDescription:(NSString*)description;

- (id<PhenixRoomOptionsBuilder>)withType:(PhenixRoomType)type;

- (id<PhenixRoomOptionsBuilder>)withOptions:(NSArray<NSString*>*)options;

- (id<PhenixRoomOptions>)buildRoomOptions;
// clang-format on

@end
