//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSRankingUtilities : NSObject
{
}

+ (float)floatValue:(float)arg1 withSigFigs:(long long)arg2;
+ (void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long *)arg2 countLastMonth:(unsigned long long *)arg3 countLastWeek:(unsigned long long *)arg4 countLastDay:(unsigned long long *)arg5;
+ (id)bundleIDForCategory:(id)arg1;
+ (id)categoryForBundleID:(id)arg1;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2;
+ (BOOL)multiWordString:(id)arg1 hasPrefix:(id)arg2;

@end

