//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OADTextRun;

__attribute__((visibility("hidden")))
@interface PMTextRunMapper : CMMapper
{
    OADTextRun *mTextRun;
}

- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2;
- (id)initWithOadTextRun:(id)arg1 parent:(id)arg2;
- (id)fontScheme;
- (id)copyCharacterStyleWithState:(id)arg1;
- (BOOL)_isDefaultFill:(id)arg1;

@end

