//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@interface IPToolTipView : NSView
{
    id _content;
    struct IPToolTipInfo _entry;
    NSView *_ownerView;
    BOOL _hideOnExit;
    BOOL _inWindow;
    long long _trackingTag;
}

+ (struct CGSize)sizeForContent:(id)arg1;
- (void)setOwnerView:(id)arg1;
- (id)ownerView;
- (void)setEntry:(struct IPToolTipInfo)arg1;
- (struct IPToolTipInfo)entry;
- (void)setContent:(id)arg1;
- (id)content;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)inWindow;
- (void)setHideOnExit:(BOOL)arg1;
- (BOOL)hideOnExit;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)_frameChanged:(id)arg1;
- (void)_addTracking;

@end
