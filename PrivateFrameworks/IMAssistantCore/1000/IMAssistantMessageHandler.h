//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantINMessageConverterPersonProvider-Protocol.h>
#import <IMAssistantCore/IMAssistantIdentifiableIntentHandler-Protocol.h>

@class CNContactStore, IMChatRegistry, NSArray, NSString;

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler>
{
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    NSString *_intentIdentifier;
    IMChatRegistry *_chatRegistry;
}

+ (id)spiHandleToPersonCache;
+ (id)handleToContactIdentifierCache;
+ (void)registerForContactStoreChangeNotifications;
+ (void)contactStoreDidChange:(id)arg1;
+ (id)connectToIMDaemonController;
@property(retain, nonatomic) IMChatRegistry *chatRegistry; // @synthesize chatRegistry=_chatRegistry;
- (void).cxx_destruct;
- (void)forceTriggerResumeNotification;
- (id)personFromSPIHandle:(id)arg1;
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;
- (id)meContactIdentifier;
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandle:(id)arg1;
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandleID:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsMatchingINPerson:(id)arg1;
@property(readonly, copy, nonatomic) NSString *intentIdentifier;
@property(readonly, nonatomic) NSArray *keysToFetch;
@property(readonly, nonatomic) CNContactStore *contactStore;
- (id)_initWithContactStore:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithContactStore:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

