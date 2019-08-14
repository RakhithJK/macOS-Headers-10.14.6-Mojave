//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ALCity : NSObject
{
    int _identifier;
    NSString *_localeCode;
    NSString *_timeZone;
    float _longitude;
    float _latitude;
    NSString *_yahooCode;
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_unlocalizedCountryOverride;
    NSString *_identifierForCPCity;
    BOOL _localizationAttempted;
}

@property(retain, nonatomic) NSString *unlocalizedCountryOverride; // @synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride;
@property(retain, nonatomic) NSString *yahooCode; // @synthesize yahooCode=_yahooCode;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *localeCode; // @synthesize localeCode=_localeCode;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(retain, nonatomic) NSString *unlocalizedCountryName;
@property(retain, nonatomic) NSString *unlocalizedName;
@property(retain, nonatomic) NSString *countryOverride;
@property(retain, nonatomic) NSString *countryName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *properties;
@property(readonly, nonatomic) NSString *classicIdentifier;
- (id)displayNameIncludingCountry:(BOOL)arg1;
- (id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2;
- (void)ensureLocalized;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSQLRow:(char **)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

