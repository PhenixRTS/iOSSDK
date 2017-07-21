/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Chat/PhenixRoomChatService.h"
#import "Common/PhenixRequestStatus.h"
#import "PCast/PhenixMediaStream.h"
#import "PCast/PhenixPCast.h"
#import "PCast/PhenixPCastInitializeOptions.h"
#import "PCast/PhenixPublisher.h"
#import "PCast/PhenixUserMediaOptions.h"
#import "PCast/PhenixUserMediaStream.h"
#import "Room/PhenixRoomService.h"

#import <Foundation/Foundation.h>

@protocol PhenixPCast<NSObject>

typedef void (^AuthenticationCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* sessionId);
typedef void (^OnlineCallback)(id<PhenixPCast> pcast);
typedef void (^OfflineCallback)(id<PhenixPCast> pcast);
typedef void (^UserMediaCallback)(
    id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixUserMediaStream> userMediaStream);
typedef void (^PublishCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixPublisher> publisher);
typedef void (^SubscribeCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixMediaStream> mediaStream);
typedef void (^LogMessageCollectionCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* messages);

// clang-format off
- (void)initialize:(const struct PhenixPCastInitializeOptions*)options;
- (void)initialize;

- (void)shutdown;

- (PhenixRequestStatus)start:(NSString*)authenticationToken
                            :(AuthenticationCallback)authenticationCallback
                            :(OnlineCallback)onlineCallback
                            :(OfflineCallback)offlineCallback;

- (PhenixRequestStatus)stop;

- (void)getUserMedia:(const PhenixUserMediaOptions*)options
                    :(UserMediaCallback)callback;

- (void)publish:(NSString*)streamToken
               :(id <PhenixMediaStream>)mediaStreamToPublish
               :(PublishCallback)callback
               :(NSArray*)tags;
- (void)publish:(NSString*)streamToken
               :(id <PhenixMediaStream>)mediaStreamToPublish
               :(PublishCallback)callback;
- (void)publishFromUri:(NSString*)streamToken
                      :(NSString*)connectUri
                      :(PublishCallback)callback
                      :(NSArray*)connectOptions;

- (void)subscribe:(NSString*)streamToken
                 :(SubscribeCallback)callback;

- (void)collectLogMessages:(LogMessageCollectionCallback)callback;

- (id<PhenixRoomService>)getRoomService;

- (id<PhenixRoomChatService>)getRoomChatService:(id<PhenixRoomService>)roomService
                                               :(NSUInteger)batchSize;
// clang-format on

@property (readonly, nonatomic, getter=getSessionId) NSString* sessionId;

@end
