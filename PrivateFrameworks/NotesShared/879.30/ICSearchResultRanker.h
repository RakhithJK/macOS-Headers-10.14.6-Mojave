//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSearchResultRanker : NSObject
{
}

+ (BOOL)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2;
+ (id)rankingRules;
+ (CDUnknownBlockType)bodyOfNoteOrAttachmentMatchingRule;
+ (CDUnknownBlockType)participantNameOrEmailMatchingRule;
+ (CDUnknownBlockType)titleOfNoteOrAttachmentMatchingRule;
+ (id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(BOOL)arg2;
+ (id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2;
+ (id)relevanceBitFieldForSearchableItems:(id)arg1;

@end

