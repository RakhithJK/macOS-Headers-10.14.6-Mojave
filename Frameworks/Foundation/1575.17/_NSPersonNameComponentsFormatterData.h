//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NPNameParser, NSLocale;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding>
{
    long long _style;
    BOOL _phonetic;
    BOOL _forceFamilyNameFirst;
    BOOL _forceGivenNameFirst;
    BOOL _ignoresFallbacks;
    NSLocale *_locale;
    NPNameParser *_nameParser;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSLocale *locale; // @synthesize locale=_locale;
@property BOOL ignoresFallbacks; // @synthesize ignoresFallbacks=_ignoresFallbacks;
@property BOOL forceGivenNameFirst; // @synthesize forceGivenNameFirst=_forceGivenNameFirst;
@property BOOL forceFamilyNameFirst; // @synthesize forceFamilyNameFirst=_forceFamilyNameFirst;
@property BOOL phonetic; // @synthesize phonetic=_phonetic;
@property long long style; // @synthesize style=_style;
- (void)dealloc;
- (BOOL)isEqualToFormatterData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
