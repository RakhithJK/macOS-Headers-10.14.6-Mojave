//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppleSpell;

@interface AXMSpellChecker : NSObject
{
    AppleSpell *_spellChecker;
}

@property(retain, nonatomic) AppleSpell *spellChecker; // @synthesize spellChecker=_spellChecker;
- (void).cxx_destruct;
- (BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;
- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;

@end

