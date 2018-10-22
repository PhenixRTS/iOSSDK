/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMember.h"
#import "PhenixObservable.h"
#import "PhenixRequestStatus.h"
#import "PhenixRoom.h"
#import "PhenixRoomOptions.h"
#import "PhenixRoomType.h"
#import "PhenixStream.h"

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
