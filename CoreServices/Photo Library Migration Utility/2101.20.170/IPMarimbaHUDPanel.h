//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSPanel.h>

@interface IPMarimbaHUDPanel : NSPanel
{
    BOOL forceDisplay;
}

- (BOOL)usesProMenuTreatmentForView:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setTitle:(id)arg1;
- (id)sizedHUDBackground;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)windowDidResize:(id)arg1;
- (void)dealloc;
- (void)addCloseWidget;
- (void)awakeFromNib;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end
