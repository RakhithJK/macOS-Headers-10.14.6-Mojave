//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;
@protocol CNContactChangesObserver;

__attribute__((visibility("hidden")))
@interface CNContactChangesObserverProxy : NSObject
{
    BOOL _unify;
    id <CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

@property(retain, nonatomic) CNContact *contactSnapshot; // @synthesize contactSnapshot=_contactSnapshot;
@property(nonatomic) BOOL unify; // @synthesize unify=_unify;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(nonatomic) __weak id <CNContactChangesObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

