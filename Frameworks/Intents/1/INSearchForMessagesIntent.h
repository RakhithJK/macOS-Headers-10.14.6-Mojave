//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForMessagesIntentExport-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setConversationIdentifiers:(id)arg1;
@property(readonly) long long conversationIdentifiersOperator;
@property(readonly, copy) NSArray *conversationIdentifiers;
- (void)setSpeakableGroupNames:(id)arg1;
@property(readonly) long long speakableGroupNamesOperator;
@property(readonly, copy) NSArray *speakableGroupNames;
- (void)setNotificationIdentifiers:(id)arg1;
@property(readonly) long long notificationIdentifiersOperator;
@property(readonly, copy) NSArray *notificationIdentifiers;
- (void)setIdentifiers:(id)arg1;
@property(readonly) long long identifiersOperator;
@property(readonly, copy) NSArray *identifiers;
- (void)setDateTimeRange:(id)arg1;
@property(readonly, copy) INDateComponentsRange *dateTimeRange;
- (void)setAttributes:(unsigned long long)arg1;
@property(readonly) unsigned long long attributes;
- (void)setSearchTerms:(id)arg1;
@property(readonly) long long searchTermsOperator;
@property(readonly, copy) NSArray *searchTerms;
- (void)setSenders:(id)arg1;
@property(readonly) long long sendersOperator;
@property(readonly, copy) NSArray *senders;
- (void)setRecipients:(id)arg1;
@property(readonly) long long recipientsOperator;
@property(readonly, copy) NSArray *recipients;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 conversationIdentifiers:(id)arg9;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)attributeSet;
- (id)contentPredicate;
- (long long)contentsOperator;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6;
- (long long)groupNamesOperator;
- (void)setGroupNames:(id)arg1;
- (id)groupNames;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

