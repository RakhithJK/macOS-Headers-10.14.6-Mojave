//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/ABCDRecord.h>

@class ABCDContactIndex, ABCDNote, NSDate, NSDateComponents, NSDictionary, NSNumber, NSSet, NSString;

@interface ABCDContact : ABCDRecord
{
    BOOL mHasUserImageChanges;
}

+ (id)keyPathsForValuesAffectingIsCompany;
+ (id)stringForIndexingKeypaths;
+ (id)preferredPhotoSortDescriptors;
+ (id)preferredNameSortDescriptors;
+ (id)_table;
+ (id)abEntityName;
@property(nonatomic) struct CGRect cropRect;
- (BOOL)hasLargeImageData;
- (void)setLargeImageData:(id)arg1;
- (id)largeImageData;
- (void)setThumbnailImageData:(id)arg1;
- (id)thumbnailImageData;
- (id)imageHelper;
- (id)imageDirectory;
- (long long)compare:(id)arg1;
- (BOOL)isMe;
- (id)fullNameIncludingPrefix:(BOOL)arg1 suffix:(BOOL)arg2 nickname:(BOOL)arg3 company:(BOOL)arg4;
- (id)fullName;
@property(nonatomic) BOOL isCompany;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)propertyHasChanged:(id)arg1;
- (id)attributedStringValue;
- (void)didSave;
- (BOOL)hasUserImageChanges;
- (void)didChangeValueForKey:(id)arg1;
- (void)awakeFromInsert;
- (void)willSave;
@property(retain, nonatomic) NSDictionary *texttone;
@property(retain, nonatomic) NSDictionary *ringtone;
@property(retain, nonatomic) NSNumber *displayFlags; // @dynamic displayFlags;
@property(retain, nonatomic) NSString *phoneticOrganization; // @dynamic phoneticOrganization;
@property(retain, nonatomic) NSString *organization; // @dynamic organization;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) NSString *phoneticLastName; // @dynamic phoneticLastName;
@property(retain, nonatomic) NSString *phoneticFirstName; // @dynamic phoneticFirstName;
- (id)callFallbackAlternateName;
- (id)_makeSortingLastName;
- (id)_makeSortingFirstName;
- (id)sortingLastName;
- (id)sortingFirstName;
- (id)_newStringForIndexing;
- (void)touch:(id)arg1;
@property(retain, nonatomic) NSDictionary *alertTonesDictionary;
@property(copy, nonatomic) NSDateComponents *birthdayComponents;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setNormalizedBirthday:(id)arg1;
@property(retain, nonatomic) NSDate *birthday;
- (long long)birthdayYear;
- (void)setBirthdayYear:(id)arg1;
- (double)birthdayYearless;
- (void)setBirthdayYearless:(id)arg1;
- (void)willRefresh:(BOOL)arg1;
- (id)_firstAvailableValueForRelationship:(id)arg1 key:(id)arg2;
- (id)nameDelimiter;
- (id)joinedName;
- (unsigned long long)nameOrderWithFormatter:(id)arg1;
- (id)lastNameWithFormatter:(id)arg1;
- (id)middleNameWithFormatter:(id)arg1;
- (id)firstNameWithFormatter:(id)arg1;
- (id)companyNameWithFormatter:(id)arg1;
- (id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(struct _NSRange *)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *alertTones; // @dynamic alertTones;
@property(retain, nonatomic) ABCDContactIndex *contactIndex; // @dynamic contactIndex;
@property(retain, nonatomic) NSString *department; // @dynamic department;
@property(retain, nonatomic) NSSet *emailAddresses; // @dynamic emailAddresses;
@property(retain, nonatomic) NSString *imageReference; // @dynamic imageReference;
@property(retain, nonatomic) NSString *jobTitle; // @dynamic jobTitle;
@property(retain, nonatomic) NSString *linkId; // @dynamic linkId;
@property(retain, nonatomic) NSString *maidenName; // @dynamic maidenName;
@property(retain, nonatomic) NSSet *messagingAddresses; // @dynamic messagingAddresses;
@property(retain, nonatomic) NSString *middleName; // @dynamic middleName;
@property(retain, nonatomic) NSString *middleNameNormalized; // @dynamic middleNameNormalized;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *nicknameNormalized; // @dynamic nicknameNormalized;
@property(retain, nonatomic) ABCDNote *note; // @dynamic note;
@property(retain, nonatomic) NSSet *phoneNumbers; // @dynamic phoneNumbers;
@property(retain, nonatomic) NSString *phonemeData; // @dynamic phonemeData;
@property(retain, nonatomic) NSString *phoneticMiddleName; // @dynamic phoneticMiddleName;
@property(retain, nonatomic) NSSet *postalAddresses; // @dynamic postalAddresses;
@property(retain, nonatomic) NSString *preferredApplePersonaIdentifier; // @dynamic preferredApplePersonaIdentifier;
@property(retain, nonatomic) NSNumber *preferredForLinkName; // @dynamic preferredForLinkName;
@property(retain, nonatomic) NSNumber *preferredForLinkPhoto; // @dynamic preferredForLinkPhoto;
@property(retain, nonatomic) NSString *preferredLikenessSource; // @dynamic preferredLikenessSource;
@property(retain, nonatomic) NSDate *primitiveBirthday; // @dynamic primitiveBirthday;
@property(retain, nonatomic) NSNumber *primitiveDisplayFlags; // @dynamic primitiveDisplayFlags;
@property(retain, nonatomic) NSString *primitiveFirstName; // @dynamic primitiveFirstName;
@property(retain, nonatomic) NSString *primitiveLastName; // @dynamic primitiveLastName;
@property(retain, nonatomic) NSString *primitiveMiddleName; // @dynamic primitiveMiddleName;
@property(retain, nonatomic) NSString *primitiveNickname; // @dynamic primitiveNickname;
@property(retain, nonatomic) NSString *primitiveOrganization; // @dynamic primitiveOrganization;
@property(retain, nonatomic) NSString *primitivePhoneticFirstName; // @dynamic primitivePhoneticFirstName;
@property(retain, nonatomic) NSString *primitivePhoneticLastName; // @dynamic primitivePhoneticLastName;
@property(retain, nonatomic) NSString *primitivePhoneticOrganization; // @dynamic primitivePhoneticOrganization;
@property(retain, nonatomic) NSString *primitiveSortingFirstName; // @dynamic primitiveSortingFirstName;
@property(retain, nonatomic) NSString *primitiveSortingLastName; // @dynamic primitiveSortingLastName;
@property(retain, nonatomic) NSSet *relatedNames; // @dynamic relatedNames;
@property(retain, nonatomic) NSSet *socialProfiles; // @dynamic socialProfiles;
@property(retain, nonatomic) NSString *suffix; // @dynamic suffix;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSSet *urlAddresses; // @dynamic urlAddresses;

@end

