//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

@interface OADCustomPattern : OADPattern
{
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

