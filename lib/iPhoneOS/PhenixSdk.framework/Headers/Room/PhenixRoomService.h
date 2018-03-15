/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixObservable.h"
#import "Common/PhenixRequestStatus.h"
#import "Room/PhenixMember.h"
#import "Room/PhenixRoom.h"
#import "Room/PhenixRoomOptions.h"
#import "Room/PhenixRoomType.h"
#import "Room/PhenixStream.h"

#import <Foundation/Foundation.h>

@protocol PhenixRoomService<NSObject>

typedef void (^GetRoomInfoCallback)(id<PhenixRoomService> roomService, PhenixRequestStatus status, id<PhenixRoom> room);
typedef void (^CreateRoomCallback)(id<PhenixRoomService> roomService, PhenixRequestStatus status, id<PhenixRoom> room);
typedef void (^JoinRoomCallback)(id<PhenixRoomService> roomService, PhenixRequestStatus status, id<PhenixRoom> room);
typedef void (^LeaveRoomCallback)(id<PhenixRoomService> roomService, PhenixRequestStatus status);
typedef void (^DestroyRoomCallback)(id<PhenixRoomService> roomService, PhenixRequestStatus status);

- (id<PhenixMember>)getSelf;

- (PhenixObservable<id<PhenixRoom>>*)getObservableActiveRoom;

// clang-format off
- (void)getRoomInfo:(NSString*)roomId
                   :(NSString*)alias
                   :(GetRoomInfoCallback)callback;

- (void)createRoom:(id<PhenixRoomOptions>)options
                  :(CreateRoomCallback)callback;

- (void)joinRoom:(NSString*)roomId
                :(NSString*)alias
                :(JoinRoomCallback)callback;

- (void)leaveRoom:(LeaveRoomCallback)callback;

- (void)destroyRoom:(DestroyRoomCallback)callback;

- (id<PhenixStream>)createStream:(NSString*)streamUri
                                :(PhenixStreamType)type
                                :(PhenixTrackState)audioState
                                :(PhenixTrackState)videoState;
// clang-format on

@end
