//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString;

@protocol ABSearchElementOrderManagerProtocol
- (BOOL)isDateComparison:(long long)arg1 forProperty:(NSString *)arg2;
- (BOOL)isWithinTimePeriodComparison:(long long)arg1 forProperty:(NSString *)arg2;
- (BOOL)isYearLessComparison:(long long)arg1 forProperty:(NSString *)arg2;
- (NSString *)entryForProperty:(NSString *)arg1 withComparison:(long long)arg2;
- (NSString *)typeForProperty:(NSString *)arg1 withComparison:(long long)arg2;
- (BOOL)propertyIsComposite:(NSString *)arg1;
- (BOOL)putPropertyInOtherMenu:(NSString *)arg1;
- (void)updatePropertyWidth:(double *)arg1 andComparisonWidth:(double *)arg2;
- (NSString *)localizedStringForProperty:(NSString *)arg1;
- (NSString *)localizedStringForComparison:(long long)arg1 withProperty:(NSString *)arg2;
- (NSArray *)orderForProperty:(NSString *)arg1 comparison:(long long)arg2;
- (NSArray *)comparisonsForProperty:(NSString *)arg1;
- (NSArray *)properties;
@end

