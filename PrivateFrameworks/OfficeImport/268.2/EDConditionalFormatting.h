//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDReferenceCollection, NSMutableArray;

@interface EDConditionalFormatting : NSObject
{
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    _Bool mApplyToDate;
}

+ (id)conditionalFormatting;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isApplyToDate;
- (void)addRange:(id)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)rules;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (id)init;

@end

