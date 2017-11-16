/**
 * Copyright 2017 PhenixP2P Inc. Confidential and Proprietary. All rights reserved.
 */
#import "Common/PhenixDisposable.h"

#import <Foundation/Foundation.h>

@interface PhenixObservableChange<T> : NSObject

@property (readonly, nonatomic) T value;

@end

@interface PhenixObservable<T> : NSObject

typedef void (^OnChangedHandler)(PhenixObservableChange<T>* change);

- (id<PhenixDisposable>)subscribe:(OnChangedHandler)onChanged;

- (T)getValue;

- (void)setValue:(T)value;

@end
