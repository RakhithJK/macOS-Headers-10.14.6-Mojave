//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXPredictiveTypingModel : NSObject
{
    void *_wordModel;
}

- (id)predictionsForText:(id)arg1;
- (id)predictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;
- (id)_nextWordPredictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;
- (id)_lastPartialWordForText:(id)arg1 orEndOfSentence:(char *)arg2;
- (id)_completionPredictionsForPrefix:(id)arg1 entireText:(id)arg2 desiredNumber:(unsigned long long)arg3;
- (unsigned int *)_newContextForText:(id)arg1 includeLastToken:(BOOL)arg2 length:(long long *)arg3;
- (void)enumerateTokensForText:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

