//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;
@protocol CNScheduler;

@interface CNUICoreRecentsManager : NSObject
{
    CRRecentContactsLibrary *_recentsLibrary;
    id <CNScheduler> _workQueue;
}

+ (CDUnknownBlockType)transformForPropertyDescription:(id)arg1;
+ (id)supportedPropertyDescriptions;
+ (id)supportedRecentsKinds;
+ (id)supportedRecentsDomains;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1;
+ (id)queryForHandles:(id)arg1;
+ (id)handlesForContactProperties:(id)arg1;
+ (id)allHandlesToSearchForFromContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary; // @synthesize recentsLibrary=_recentsLibrary;
- (void).cxx_destruct;
- (void)removeRecents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recentsContactsMatchingHandles:(id)arg1;
- (id)recentContactsMatchingContactProperties:(id)arg1;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2;

@end
