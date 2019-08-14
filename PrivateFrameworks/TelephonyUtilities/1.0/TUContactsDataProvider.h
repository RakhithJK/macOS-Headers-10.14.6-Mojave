//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject
{
    BOOL _useAsianNameFormat;
    CDUnknownBlockType _localeSupportsPrefixHintForFetchRequest;
    id <TUContactsDataSource> _contactsDataSource;
}

+ (id)asianLocaleCountryCodes;
+ (id)unsupportedLocalesForPrefixHint;
+ (id)defaultContactKeyDescriptors;
+ (id)numberFormatter;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;
@property(readonly, nonatomic) id <TUContactsDataSource> contactsDataSource; // @synthesize contactsDataSource=_contactsDataSource;
@property(copy, nonatomic) CDUnknownBlockType localeSupportsPrefixHintForFetchRequest; // @synthesize localeSupportsPrefixHintForFetchRequest=_localeSupportsPrefixHintForFetchRequest;
@property(nonatomic) BOOL useAsianNameFormat; // @synthesize useAsianNameFormat=_useAsianNameFormat;
- (void).cxx_destruct;
- (id)prefixHintForFetchRequest:(id)arg1;
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;
- (id)compositeNameForHandles:(id)arg1 countryCode:(id)arg2;
- (id)compositeNameForContacts:(id)arg1;
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;
- (id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4;
- (id)unifiedContactsForFetchRequest:(id)arg1 countryCode:(id)arg2;
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)labeledHandlesForContacts:(id)arg1;
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;
- (id)executeFetchRequest:(id)arg1;
- (id)initWithContactsDataSource:(id)arg1;
- (id)init;

@end
