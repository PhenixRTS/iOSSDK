/**
 * Copyright 2018 PhenixP2P Inc. Confidential and Proprietary. All Rights Reserved.
 */
#import <Foundation/Foundation.h>

#import "PhenixDisposable.h"

// clang-format off
__attribute__((visibility("default"))) @interface PhenixObservableChange<T> : NSObject

@property (readonly, nonatomic) T value;

@end

__attribute__((visibility("default"))) @interface PhenixObservable<T> : NSObject

typedef void (^OnChangedHandler)(PhenixObservableChange<T>* change);

- (id<PhenixDisposable>)subscribe:(OnChangedHandler)onChanged;

- (BOOL)hasValue;

- (T)getValue;

- (T)getValueOrDefault;

- (void)setValue:(T)value;

@end
    // clang-format on
