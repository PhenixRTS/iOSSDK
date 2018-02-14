/**
 * Copyright 2016 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import <Foundation/Foundation.h>

// clang-format off
__attribute__((visibility("default"))) @interface PhenixStreamingSourceMapping : NSObject

@property(nonatomic, strong) NSString* patternToReplace;
@property(nonatomic, strong) NSString* replacement;

@end

__attribute__((visibility("default"))) @interface PhenixPCastInitializeOptions : NSObject

@property(nonatomic) BOOL enableProcessTerminationSignalHandling;
@property(nonatomic, strong) PhenixStreamingSourceMapping* streamingSourceMapping;

@end
    // clang-format on
