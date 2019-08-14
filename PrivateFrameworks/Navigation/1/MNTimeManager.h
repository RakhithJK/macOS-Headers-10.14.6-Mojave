//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNObserverHashTable;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject
{
    MNObserverHashTable *_timeManagerObservers;
    id <MNTimeProvider> _provider;
}

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;
@property(retain, nonatomic) id <MNTimeProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)_resetToDefaultProvider;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end
