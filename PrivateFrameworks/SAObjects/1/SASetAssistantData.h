//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAssistantData;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAWatchData *watchData;
@property(copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property(nonatomic) BOOL voiceOver;
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSNumber *uiScale;
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property(retain, nonatomic) SAVoice *ttsVoice;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *temperatureUnit;
@property(copy, nonatomic) NSNumber *storefront;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *preferredLanguage;
@property(copy, nonatomic) NSArray *parentalRestrictions;
@property(copy, nonatomic) NSString *osVersion;
@property(nonatomic) BOOL mediaPlayerExplicitContentDisallowed;
@property(retain, nonatomic) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property(copy, nonatomic) NSArray *meCards;
@property(copy, nonatomic) NSString *lastName;
@property(nonatomic) BOOL inRetailStoreDemoMode;
@property(copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property(nonatomic) BOOL handsFree;
@property(copy, nonatomic) NSString *fullStorefrontId;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *deviceVersion;
@property(copy, nonatomic) NSString *deviceEnclosure;
@property(copy, nonatomic) NSString *deviceColor;
@property(copy, nonatomic) NSArray *deviceCapabilities;
@property(copy, nonatomic) NSNumber *debugFlags;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) BOOL censorSpeech;
@property(copy, nonatomic) NSString *anchor;
@property(copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property(copy, nonatomic) NSArray *abSources;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

