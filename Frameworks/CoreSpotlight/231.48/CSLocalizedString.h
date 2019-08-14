//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>

@class NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder>
{
    BOOL _didTrySettingDefaultString;
    NSString *_defaultString;
    NSDictionary *_localizedStrings;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(nonatomic) BOOL didTrySettingDefaultString; // @synthesize didTrySettingDefaultString=_didTrySettingDefaultString;
@property(readonly, nonatomic) NSString *defaultString; // @synthesize defaultString=_defaultString;
- (void).cxx_destruct;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedString;
- (id)initWithLocalizedStrings:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1;

@end

