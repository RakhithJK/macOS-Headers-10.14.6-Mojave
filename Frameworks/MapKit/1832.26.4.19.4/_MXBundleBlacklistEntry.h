//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject
{
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isExtensionAllowed:(id)arg1;
- (BOOL)isBundleProxyAllowed:(id)arg1;
- (BOOL)_isVersionValueAllowed:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;

@end
