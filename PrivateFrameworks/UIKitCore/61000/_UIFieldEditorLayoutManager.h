//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSLayoutManager.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorLayoutManager : NSLayoutManager
{
    UIFont *_fontForExtraBulletRendering;
}

- (void).cxx_destruct;
- (void)_completeBulletRenderingForTextContainer:(id)arg1;
- (struct CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(struct _NSRange)arg2;
- (long long)_generateBulletGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5 unobscuredRange:(struct _NSRange)arg6 obscuredLength:(long long)arg7 obscureExistingText:(BOOL)arg8;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)resetFontForExtraBulletRendering;
- (void)useFontForExtraBulletRendering:(id)arg1;

@end

