//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class CNContactStore, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFavoritesPeopleSource : NSObject <CNUIPeopleSource>
{
    CNContactStore *_contactStore;
    NSArray *_cachedPeople;
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;
+ (id)sourceKind;
@property(retain, nonatomic) NSArray *cachedPeople; // @synthesize cachedPeople=_cachedPeople;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (id)groups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

