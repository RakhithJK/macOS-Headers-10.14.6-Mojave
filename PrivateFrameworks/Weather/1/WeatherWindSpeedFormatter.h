//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSDictionary, NSLocale;

@interface WeatherWindSpeedFormatter : NSFormatter
{
    NSLocale *_locale;
    NSDictionary *_directionSubstringAttributes;
}

+ (id)convenienceFormatter;
@property(retain) NSDictionary *directionSubstringAttributes; // @synthesize directionSubstringAttributes=_directionSubstringAttributes;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (double)speedByConvertingToUserUnit:(double)arg1;
- (int)windSpeedUnit;
- (id)speedStringByConvertingToUserUnits:(float)arg1;
- (id)stringForWindDirection:(float)arg1;
- (id)fallbackUnitString;
- (id)fallbackStringForWindSpeed:(float)arg1;
- (id)stringForWindSpeed:(float)arg1;
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end

