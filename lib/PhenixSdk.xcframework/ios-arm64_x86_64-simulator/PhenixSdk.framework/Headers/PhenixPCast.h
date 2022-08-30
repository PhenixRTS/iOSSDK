/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixMediaStream.h"
#import "PhenixMediaType.h"
#import "PhenixPCast.h"
#import "PhenixPCastInitializeOptions.h"
#import "PhenixPublisher.h"
#import "PhenixRequestStatus.h"
#import "PhenixSourceDeviceInfo.h"
#import "PhenixUserMediaOptions.h"
#import "PhenixUserMediaStream.h"

@protocol PhenixPCast<NSObject>

typedef void (^AuthenticationCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* sessionId);
typedef void (^OnlineCallback)(id<PhenixPCast> pcast);
typedef void (^OfflineCallback)(id<PhenixPCast> pcast);
typedef void (^UserMediaCallback)(
    id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixUserMediaStream> userMediaStream);
typedef void (^PublishCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixPublisher> publisher);
typedef void (^SubscribeCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, id<PhenixMediaStream> mediaStream);
typedef void (^LogMessageCollectionCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* messages);
typedef void (^EnumerateSourceDevicesCallback)(id<PhenixPCast> pcast, NSArray<PhenixSourceDeviceInfo*>* devices);

// clang-format off
- (void)initialize:(PhenixPCastInitializeOptions*)options;
- (void)initialize;

- (void)shutdown;

- (void)start:(NSString*)authenticationToken
             :(AuthenticationCallback)authenticationCallback
             :(OnlineCallback)onlineCallback
             :(OfflineCallback)offlineCallback;

- (void)stop;

- (void)enumerateSourceDevices:(EnumerateSourceDevicesCallback)callback
                              :(PhenixMediaType)mediaType;

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
// clang-format on

@property(readonly, nonatomic, getter=getSessionId) NSString* sessionId;

@end
