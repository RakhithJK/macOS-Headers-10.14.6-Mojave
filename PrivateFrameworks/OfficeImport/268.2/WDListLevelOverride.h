//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isListLevelOverridden;
- (id)mutableListLevel;
- (id)listLevel;
- (BOOL)isStartNumberOverridden;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;
- (unsigned char)level;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;

@end

