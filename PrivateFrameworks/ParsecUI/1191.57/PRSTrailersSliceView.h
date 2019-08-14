//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSLayoutConstraint, NSTextField, NSVisualEffectView, PRSImageView;

@interface PRSTrailersSliceView : NSView
{
    NSTextField *_titleTextField;
    unsigned long long _numberOfTrailers;
    PRSImageView *_trailerImageView1;
    PRSImageView *_trailerImageView2;
    PRSImageView *_trailerImageView3;
    NSVisualEffectView *_trailerOverlayImageView1;
    NSVisualEffectView *_trailerOverlayImageView2;
    NSVisualEffectView *_trailerOverlayImageView3;
    NSLayoutConstraint *_trailerImageViewHeightConstraint;
    NSTextField *_trailerTextField1;
    NSTextField *_trailerTextField2;
    NSTextField *_trailerTextField3;
    NSButton *_playButton;
    long long _hoverTrailerIndex;
}

@property long long hoverTrailerIndex; // @synthesize hoverTrailerIndex=_hoverTrailerIndex;
@property NSButton *playButton; // @synthesize playButton=_playButton;
@property NSTextField *trailerTextField3; // @synthesize trailerTextField3=_trailerTextField3;
@property NSTextField *trailerTextField2; // @synthesize trailerTextField2=_trailerTextField2;
@property NSTextField *trailerTextField1; // @synthesize trailerTextField1=_trailerTextField1;
@property NSLayoutConstraint *trailerImageViewHeightConstraint; // @synthesize trailerImageViewHeightConstraint=_trailerImageViewHeightConstraint;
@property NSVisualEffectView *trailerOverlayImageView3; // @synthesize trailerOverlayImageView3=_trailerOverlayImageView3;
@property NSVisualEffectView *trailerOverlayImageView2; // @synthesize trailerOverlayImageView2=_trailerOverlayImageView2;
@property NSVisualEffectView *trailerOverlayImageView1; // @synthesize trailerOverlayImageView1=_trailerOverlayImageView1;
@property PRSImageView *trailerImageView3; // @synthesize trailerImageView3=_trailerImageView3;
@property PRSImageView *trailerImageView2; // @synthesize trailerImageView2=_trailerImageView2;
@property PRSImageView *trailerImageView1; // @synthesize trailerImageView1=_trailerImageView1;
@property unsigned long long numberOfTrailers; // @synthesize numberOfTrailers=_numberOfTrailers;
@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void)dealloc;
- (void)cursorUpdate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)_isValidTrailerIndex:(long long)arg1;
- (long long)_indexForTrackingAreaEvent:(id)arg1;
- (void)updateTrackingAreas;
- (void)_removeTrackingAreas;
- (void)_sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (id)trailerTextFieldAtIndex:(unsigned long long)arg1;
- (id)trailerImageViewAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long maximumNumberOfTrailers;
- (void)setPlayButtonImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)trailerVibrantImageViewAtIndex:(unsigned long long)arg1;
- (id)trailerOverlayImageViewAtIndex:(unsigned long long)arg1;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;

@end

