//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties
{
    WDFont *mFont;
    unsigned short mCharacter;
}

- (void).cxx_destruct;
- (id)description;
- (int)runType;
- (void)setCharacter:(unsigned short)arg1;
- (unsigned short)character;
- (void)setFont:(id)arg1;
- (id)font;
- (id)initWithParagraph:(id)arg1;

@end
