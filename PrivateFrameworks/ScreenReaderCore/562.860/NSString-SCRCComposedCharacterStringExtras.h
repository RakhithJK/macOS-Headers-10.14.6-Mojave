//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCRCComposedCharacterStringExtras)
- (id)scrc_composedCharacterEnumerator;
- (id)scrc_decodeUnicodeForKVO;
- (id)scrc_encodeUnicodeForKVO;
- (BOOL)scrc_containsNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)_countNumberOfGlyphs:(unsigned char)arg1;
- (unsigned char)scrc_countNumberOfGlyphs;
- (BOOL)scrc_containsOnlyOneGlyph;
- (id)scrc_composedCharacterAtIndex:(unsigned long long)arg1;
@end

