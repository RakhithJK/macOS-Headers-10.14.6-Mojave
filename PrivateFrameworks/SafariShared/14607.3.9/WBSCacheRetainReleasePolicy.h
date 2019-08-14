//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject
{
    CDUnknownBlockType _purgeBlock;
    NSCountedSet *_entryRetainCounts;
    NSCountedSet *_negativeEntryRetainCounts;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *retainedKeyStrings;
- (BOOL)isEntryRetainedForKeyString:(id)arg1;
- (void)_releaseEntryForKeyString:(id)arg1;
- (void)releaseEntryWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)releaseEntriesForKeyStrings:(id)arg1;
- (void)releaseEntryForKeyString:(id)arg1;
- (void)_retainEntryForKeyString:(id)arg1;
- (void)retainEntryWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)retainEntriesForKeyStrings:(id)arg1;
- (void)retainEntryForKeyString:(id)arg1;
- (id)initWithPurgeBlock:(CDUnknownBlockType)arg1;

@end

