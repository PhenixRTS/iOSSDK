/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixRequestStatus.h"
#import "PCast/PhenixPCast.h"

#import <Foundation/Foundation.h>

@protocol PhenixPCastAdmin<PhenixPCast>

typedef void (^IssueStreamTokenCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* streamToken);
typedef void (^IssueAuthenticationTokenCallback)(
    id<PhenixPCast> pcast, PhenixRequestStatus status, NSString* authenticationToken);
typedef void (^ListStreamsCallback)(id<PhenixPCast> pcast, PhenixRequestStatus status, NSArray* streams);

// clang-format off
- (PhenixRequestStatus)start:(NSString*) applicationId
                            :(NSString*) secret
                            :(AuthenticationCallback)authenticationCallback
                            :(OnlineCallback)onlineCallback
                            :(OfflineCallback)offlineCallback;

- (void)issueStreamToken:(NSString*)applicationId
                        :(NSString*)secret
                        :(NSString*)sessionId
                        :(IssueStreamTokenCallback)callback;
- (void)issueStreamToken:(NSString*)applicationId
                        :(NSString*)secret
                        :(NSString*)sessionId
                        :(IssueStreamTokenCallback)callback
                        :(NSString*)streamId;
- (void)issueStreamToken:(NSString*)applicationId
                        :(NSString*)secret
                        :(NSString*)sessionId
                        :(IssueStreamTokenCallback)callback
                        :(NSString*)streamId
                        :(NSArray*)capabilities;

- (void)issueAuthenticationToken:(NSString*)applicationId
                                :(NSString*)secret
                                :(IssueAuthenticationTokenCallback)callback;
- (void)issueAuthenticationToken:(NSString*)applicationId
                                :(NSString*)secret
                                :(IssueAuthenticationTokenCallback)callback
                                :(NSArray*)capabilities;

- (void)listStreams:(NSString*)applicationId
                   :(NSString*)secret
                   :(ListStreamsCallback)callback;
- (void)listStreams:(NSString*)applicationId
                   :(NSString*)secret
                   :(ListStreamsCallback)callback
                   :(NSString*)startStreamId;
- (void)listStreams:(NSString*)applicationId
                   :(NSString*)secret
                   :(ListStreamsCallback)callback
                   :(NSString*)startStreamId
                   :(UInt32)length;

@end
