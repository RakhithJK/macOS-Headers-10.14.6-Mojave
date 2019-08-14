//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXButton.h"

@class NSImageView, NSTextField, RDVersion;

@interface IPXBurstOverlayGlyphView : IPXButton
{
    NSTextField *_burstLabel;
    NSImageView *_burstGlyphImageView;
    RDVersion *_representedVersion;
    unsigned long long _glyphViewState;
}

@property(nonatomic) unsigned long long glyphViewState; // @synthesize glyphViewState=_glyphViewState;
@property(retain, nonatomic) RDVersion *representedVersion; // @synthesize representedVersion=_representedVersion;
- (void).cxx_destruct;
- (void)a_burstOverlayClicked:(id)arg1;
- (id)burstGlyphImageView;
- (id)burstLabel;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_commonInit;
- (void)_setupSubviews;
- (void)updateBurstOverlay;
- (void)_updateBurstOverlay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

