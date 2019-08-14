//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject
{
    unsigned long long _language;
    ICRandomNumberGenerator *_randomNumberGenerator;
}

+ (id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(BOOL)arg2;
+ (BOOL)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1;
+ (id)wordsForLanguage:(unsigned long long)arg1;
+ (id)loadWordsForLanguage:(unsigned long long)arg1;
@property(retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator; // @synthesize randomNumberGenerator=_randomNumberGenerator;
@property(nonatomic) unsigned long long language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4;
- (id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2;
- (id)paragraph;
- (id)sentence;
- (id)lineOfText;
@property(readonly, nonatomic) BOOL isRightToLeftLanguage;
- (id)initWithRandomNumberGenerator:(id)arg1;

@end
