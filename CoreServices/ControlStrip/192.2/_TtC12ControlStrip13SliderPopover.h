//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTouchBarPressAndHoldTransposerDelegate-Protocol.h"

@class NSButton, NSLayoutConstraint, NSView;

@interface _TtC12ControlStrip13SliderPopover : NSViewController <NSTouchBarPressAndHoldTransposerDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: sliderItems
    // Error parsing type: , name: pressGestureRecognizer
    // Error parsing type: , name: used
    // Error parsing type: , name: fadedUnused
    // Error parsing type: , name: sliderContainer
    // Error parsing type: , name: sliderContainerRightConstraint
    // Error parsing type: , name: backdropView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: closeButtonWidthConstraint
    // Error parsing type: , name: initialRect
    // Error parsing type: , name: isPresented
    // Error parsing type: , name: mode
    // Error parsing type: , name: sliderTransposer
    // Error parsing type: , name: autodismissTimer
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)transposerDidCancel:(id)arg1;
- (void)transposerDidEnd:(id)arg1;
- (void)trackingDidEnd:(id)arg1;
- (void)trackingDidBegin:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)dismissPopover:(id)arg1;
- (void)dealloc;
- (void)loadView;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonWidthConstraint; // @synthesize closeButtonWidthConstraint;
@property(nonatomic) __weak NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak NSView *backdropView; // @synthesize backdropView;
@property(nonatomic) __weak NSLayoutConstraint *sliderContainerRightConstraint; // @synthesize sliderContainerRightConstraint;
@property(nonatomic) __weak NSView *sliderContainer; // @synthesize sliderContainer;

@end

