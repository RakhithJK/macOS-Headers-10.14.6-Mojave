//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SALanguage : NSObject
{
    NSString *_isoCountryCodeAlpha2;
}

+ (id)languageWithEnglishName:(id)arg1;
+ (id)_languagesDict;
- (id)englishName;
- (id)isoLanguageCode;
- (void)dealloc;
- (id)_initWithISOCode:(id)arg1;

@end
