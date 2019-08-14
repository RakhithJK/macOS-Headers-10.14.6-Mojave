//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/RolloverTrackingButton.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface RolloverImageButton : RolloverTrackingButton
{
    BOOL _allowsVibrancy;
    NSImage *_rolloverImage;
    NSImage *_focusRingMask;
}

@property(retain, nonatomic) NSImage *focusRingMask; // @synthesize focusRingMask=_focusRingMask;
@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
@property(nonatomic) BOOL allowsVibrancy; // @synthesize allowsVibrancy=_allowsVibrancy;
- (void).cxx_destruct;
- (void)_windowChangedKeyState;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setAttributes;

@end

