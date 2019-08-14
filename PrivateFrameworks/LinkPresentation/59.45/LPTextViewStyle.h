//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class LPGlyphStyle, LPPadding, LPPointUnit, NSColor, NSFont;

__attribute__((visibility("hidden")))
@interface LPTextViewStyle : NSObject <NSCopying>
{
    unsigned int _maximumLines;
    NSColor *_color;
    NSFont *_font;
    long long _textAlignment;
    LPPointUnit *_firstLineLeading;
    LPGlyphStyle *_leadingGlyph;
    LPPadding *_padding;
}

@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) LPGlyphStyle *leadingGlyph; // @synthesize leadingGlyph=_leadingGlyph;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned int maximumLines; // @synthesize maximumLines=_maximumLines;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

