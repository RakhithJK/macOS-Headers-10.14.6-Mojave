//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject;
@protocol NSObservable, NSObserver;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;

@end

