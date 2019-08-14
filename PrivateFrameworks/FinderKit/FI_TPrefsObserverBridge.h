//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TPrefsObserverBridge : NSObject
{
    struct IPrefsObserver *_observer;
    struct set<TString, std::__1::less<TString>, std::__1::allocator<TString>> _globalKeysBeingObserved;
    struct set<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID>> _regIDsBeingObserved;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopObservingAllPrefsChanges;
- (void)stopObservingFinderPrefsResetNotification;
- (void)startObservingFinderPrefsResetNotification;
- (void)globalPrefChanged:(id)arg1;
- (void)stopObservingGlobalPrefChanges:(const struct TString *)arg1;
- (void)startObservingGlobalPrefChanges:(const struct TString *)arg1;
- (void)finderPrefChanged:(id)arg1;
- (void)stopObservingRegIDChanges:(int)arg1;
- (void)startObservingRegIDChanges:(int)arg1;
- (void)aboutToTearDown;
- (id)initWithObserver:(struct IPrefsObserver *)arg1;

@end

