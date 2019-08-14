//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface FRFeedLoadingGate : NSObject
{
    long long _state;
    NSString *_name;
    NSHashTable *_observers;
    unsigned long long _visibilityRequiredDepth;
    unsigned long long _loadingSuspendedDepth;
}

@property(nonatomic) unsigned long long loadingSuspendedDepth; // @synthesize loadingSuspendedDepth=_loadingSuspendedDepth;
@property(nonatomic) unsigned long long visibilityRequiredDepth; // @synthesize visibilityRequiredDepth=_visibilityRequiredDepth;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_updateState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isClosedForVisibleFeed:(BOOL)arg1;
- (BOOL)isOpenForVisibleFeed:(BOOL)arg1;
- (void)popLoadingSuspended;
- (void)pushLoadingSuspended;
- (void)popVisibilityRequired;
- (void)pushVisibilityRequired;
- (id)init;
- (id)initWithName:(id)arg1;

@end
