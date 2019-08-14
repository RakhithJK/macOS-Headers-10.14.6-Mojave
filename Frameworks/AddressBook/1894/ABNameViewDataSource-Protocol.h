//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ABNameViewDataSource <NSObject>
- (NSArray *)nameViewKeys;
- (void)setPhoneticFamilyName:(NSString *)arg1;
- (NSString *)phoneticFamilyNamePlaceholder;
- (NSString *)phoneticFamilyName;
- (void)setPhoneticMiddleName:(NSString *)arg1;
- (NSString *)phoneticMiddleNamePlaceholder;
- (NSString *)phoneticMiddleName;
- (void)setPhoneticGivenName:(NSString *)arg1;
- (NSString *)phoneticGivenNamePlaceholder;
- (NSString *)phoneticGivenName;
- (NSString *)phoneticCompleteNamePlaceholder;
- (NSString *)phoneticCompleteName;
- (void)setJobTitle:(NSString *)arg1;
- (NSString *)jobTitlePlaceholder;
- (NSString *)jobTitle;
- (void)setDepartmentName:(NSString *)arg1;
- (NSString *)departmentNamePlaceholder;
- (NSString *)departmentName;
- (void)setPhoneticOrganizationName:(NSString *)arg1;
- (NSString *)phoneticOrganizationNamePlaceholder;
- (NSString *)phoneticOrganizationName;
- (void)setOrganizationName:(NSString *)arg1;
- (NSString *)organizationNamePlaceholder;
- (NSString *)organizationName;
- (void)setNickname:(NSString *)arg1;
- (NSString *)nicknamePlaceholder;
- (NSString *)nickname;
- (void)setNameSuffix:(NSString *)arg1;
- (NSString *)nameSuffixPlaceholder;
- (NSString *)nameSuffix;
- (void)setFamilyName:(NSString *)arg1;
- (NSString *)familyNamePlaceholder;
- (NSString *)familyName;
- (void)setMiddleName:(NSString *)arg1;
- (NSString *)middleNamePlaceholder;
- (NSString *)middleName;
- (void)setGivenName:(NSString *)arg1;
- (NSString *)givenNamePlaceholder;
- (NSString *)givenName;
- (void)setNamePrefix:(NSString *)arg1;
- (NSString *)namePrefixPlaceholder;
- (NSString *)namePrefix;
- (NSString *)completeNamePlaceholder;
- (NSString *)completeName;
- (BOOL)shouldUseUnifiedPlaceholderForKey:(NSString *)arg1;
- (BOOL)shouldOfferPhoneticName;
- (BOOL)allowsPhotoEditing;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)displayStyle;
@end

