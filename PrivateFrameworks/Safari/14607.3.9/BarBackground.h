//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/KeyLoopSplicingContainerView.h>

@class BackgroundColorView, NSBannerView, NSColor, NSImage, NSView, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface BarBackground : KeyLoopSplicingContainerView
{
    BOOL _becomingFirstResponder;
    NSView *_mainContentContainerView;
    BackgroundColorView *_bottomBorderView;
    NSView *_backdropDarkeningView;
    NSVisualEffectView *_backdropView;
    NSBannerView *_appKitBannerView;
    BOOL _mouseDownCanMoveWindow;
    BOOL _hasBottomBorder;
    BOOL _usesBannerAppearance;
    BOOL _usesModernToolbarAppearance;
    BOOL _usesMaterialPreferredAppearance;
    BOOL _usesBehindWindowBlending;
    BOOL _usesAppKitBannerView;
    NSColor *_bottomBorderColor;
    NSView *_contentView;
    NSColor *_backgroundColor;
    NSImage *_backgroundImage;
}

@property(nonatomic) BOOL usesAppKitBannerView; // @synthesize usesAppKitBannerView=_usesAppKitBannerView;
@property(nonatomic) BOOL usesBehindWindowBlending; // @synthesize usesBehindWindowBlending=_usesBehindWindowBlending;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL usesMaterialPreferredAppearance; // @synthesize usesMaterialPreferredAppearance=_usesMaterialPreferredAppearance;
@property(nonatomic) BOOL usesModernToolbarAppearance; // @synthesize usesModernToolbarAppearance=_usesModernToolbarAppearance;
@property(nonatomic) BOOL usesBannerAppearance; // @synthesize usesBannerAppearance=_usesBannerAppearance;
@property(retain, nonatomic) NSColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(nonatomic) BOOL hasBottomBorder; // @synthesize hasBottomBorder=_hasBottomBorder;
@property BOOL mouseDownCanMoveWindow; // @synthesize mouseDownCanMoveWindow=_mouseDownCanMoveWindow;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (void)_windowChangedKeyState;
- (void)_applyUsesMaterialPreferredAppearance;
- (void)_addBackdropDarkeningViewForModernToolbarAppearance;
- (void)_addBottomBorderViewForModernToolbarAppearance;
- (void)_addBackdropViewForModernToolbarAppearance;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)_drawBackgroundInRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
@property(readonly, retain, nonatomic) NSColor *defaultBottomBorderLineColor;

@end
