//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface NSThemeFrameTitleTextField : NSView
{
    NSAttributedString *_text;
    BOOL _invalidateOnFrameOriginChange;
}

@property BOOL invalidateOnFrameOriginChange; // @synthesize invalidateOnFrameOriginChange=_invalidateOnFrameOriginChange;
- (BOOL)allowsVibrancy;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_windowChangedKeyState;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)isFlipped;
@property(copy) NSAttributedString *attributedStringValue; // @dynamic attributedStringValue;
- (void)dealloc;

@end

