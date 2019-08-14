//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter
{
    AVTimeFormatterInternal *_internal;
}

- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (void)setCachedDateFormatterTemplate:(id)arg1;
- (id)cachedDateFormatterTemplate;
- (void)setCachedDateFormatterFormat:(id)arg1;
- (id)cachedDateFormatterFormat;
- (void)setIsRightToLeft:(BOOL)arg1;
- (BOOL)isRightToLeft;
- (void)setLocale:(id)arg1;
- (id)locale;
@property(nonatomic, getter=isFullWidth) BOOL fullWidth;
@property(nonatomic) double formatTemplate;
@property(nonatomic) long long style;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)stringFromSeconds:(double)arg1;
- (id)stringFromCMTime:(CDStruct_1b6d18a9)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

