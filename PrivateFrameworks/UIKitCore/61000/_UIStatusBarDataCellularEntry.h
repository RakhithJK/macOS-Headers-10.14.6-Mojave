//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry
{
    BOOL _wifiCallingEnabled;
    BOOL _callForwardingEnabled;
    BOOL _showsSOSWhenDisabled;
    long long _type;
    NSString *_string;
    NSString *_crossfadeString;
    NSString *_badgeString;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL showsSOSWhenDisabled; // @synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled;
@property(nonatomic) BOOL callForwardingEnabled; // @synthesize callForwardingEnabled=_callForwardingEnabled;
@property(nonatomic) BOOL wifiCallingEnabled; // @synthesize wifiCallingEnabled=_wifiCallingEnabled;
@property(copy, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(copy, nonatomic) NSString *crossfadeString; // @synthesize crossfadeString=_crossfadeString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end

