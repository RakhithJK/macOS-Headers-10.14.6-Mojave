//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallHistory/CHPhoneBookManagerProtocol-Protocol.h>

@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>
{
    CNContactStore *_fContactsStore;
}

+ (id)get;
@property(retain, nonatomic) CNContactStore *fContactsStore; // @synthesize fContactsStore=_fContactsStore;
- (void).cxx_destruct;
- (BOOL)isABContactASuggestion;
- (id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;
- (id)getPersonsNameForContact:(id)arg1;
- (id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id *)arg3;
- (id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2;
- (id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3;
- (id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

