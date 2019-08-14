//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

@interface OITSUDurationFormatter : NSFormatter
{
    NSString *mFormat;
    OITSULocale *mLocale;
    int mCompactStyleStartUnit;
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(readonly) OITSULocale *locale; // @synthesize locale=mLocale;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end

