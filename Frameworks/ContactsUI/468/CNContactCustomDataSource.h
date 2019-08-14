//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactChangesObserver-Protocol.h>
#import <ContactsUI/CNContactDataSource-Protocol.h>

@class CNContactFilter, CNContactFormatter, CNContactStore, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;
@protocol CNContactDataSourceDelegate;

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource>
{
    BOOL _autoUpdateContacts;
    BOOL _observingContacts;
    id <CNContactDataSourceDelegate> delegate;
    CNContactFilter *_filter;
    NSMutableArray *_allContacts;
    NSArray *_keysToFetch;
    NSMapTable *_identifiersToIndexes;
    NSArray *_filteredContacts;
}

@property(nonatomic) BOOL observingContacts; // @synthesize observingContacts=_observingContacts;
@property(retain, nonatomic) NSArray *filteredContacts; // @synthesize filteredContacts=_filteredContacts;
@property(retain, nonatomic) NSMapTable *identifiersToIndexes; // @synthesize identifiersToIndexes=_identifiersToIndexes;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) NSMutableArray *allContacts; // @synthesize allContacts=_allContacts;
@property(nonatomic) BOOL autoUpdateContacts; // @synthesize autoUpdateContacts=_autoUpdateContacts;
@property(copy, nonatomic) CNContactFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_sendDataSourceDidChange;
- (void)contactDidChange:(id)arg1;
- (void)_updateContactsObserving;
- (void)_stopObservingContacts;
- (void)_startObservingContacts;
@property(readonly, nonatomic) CNContactFilter *effectiveFilter;
@property(readonly, nonatomic) BOOL canReload;
- (void)_updateFilter;
- (id)indexPathForContact:(id)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
@property(readonly, nonatomic) NSDictionary *contactMatchInfos;
@property(readonly, nonatomic) NSArray *indexSections;
@property(readonly, nonatomic) NSArray *sections;
- (id)preferredForNameMeContactIdentifier;
@property(readonly, nonatomic) NSArray *contacts;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2;
- (id)initWithContacts:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CNContactFormatter *contactFormatter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property(readonly, nonatomic) CNContactStore *store;
@property(readonly) Class superclass;

@end

