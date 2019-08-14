//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

@interface EDGradientFill : EDFill
{
    int mType;
    NSMutableDictionary *mStops;
    double mDegree;
    struct CGRect mFocusRect;
}

+ (id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;
+ (id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (void).cxx_destruct;
- (id)colorForStopAtPosition:(id)arg1;
- (struct CGRect)focusRect;
- (id)stops;
- (double)degree;
- (int)type;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGradientFill:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;
- (id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;
- (void)setStops:(id)arg1;
- (void)setFocusRect:(struct CGRect)arg1;
- (void)setDegree:(double)arg1;
- (void)setType:(int)arg1;

@end

