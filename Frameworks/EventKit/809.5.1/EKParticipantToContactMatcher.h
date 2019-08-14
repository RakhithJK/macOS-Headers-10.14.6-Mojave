//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface EKParticipantToContactMatcher : NSObject
{
    NSArray *_contacts;
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
    NSSet *_contactCompanyNames;
}

+ (id)_allParticipantsOnItem:(id)arg1;
+ (id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2;
+ (id)_nameComponentsForContact:(id)arg1 reverse:(BOOL)arg2;
@property(retain, nonatomic) NSSet *contactCompanyNames; // @synthesize contactCompanyNames=_contactCompanyNames;
@property(retain, nonatomic) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain, nonatomic) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (BOOL)anyContactMatchesParticipant:(id)arg1;
- (id)matchingParticipantsFromParticipants:(id)arg1;
- (id)matchingParticipantsFromItem:(id)arg1;
- (BOOL)anyContactMatchesAnyParticipant:(id)arg1;
- (BOOL)anyContactMatchesAnyParticipantFromItem:(id)arg1;
- (void)_cacheContactData;
- (id)initWithContacts:(id)arg1;

@end

