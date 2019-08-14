//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSResponder;

@interface IPXViewerContainerButton : NSButton
{
    NSResponder *_swipeEventsForwardingReceiver;
    double _horizontalInset;
    double _verticalInset;
    NSColor *_normalBackgroundColor;
    NSColor *_highlightedBackgroundColor;
}

+ (id)overlayButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3 image:(id)arg4 accessiblityLabel:(id)arg5;
+ (Class)cellClass;
@property(retain, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) NSColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) __weak NSResponder *swipeEventsForwardingReceiver; // @synthesize swipeEventsForwardingReceiver=_swipeEventsForwardingReceiver;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setAlphaValue:(double)arg1;
- (void)scrollWheel:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)_forwardSwipeEvent:(id)arg1 selector:(SEL)arg2;

@end

