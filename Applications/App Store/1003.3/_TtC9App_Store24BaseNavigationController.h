//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSUserInterfaceValidations-Protocol.h"

@class NSString;

@interface _TtC9App_Store24BaseNavigationController : NSViewController <NSUserInterfaceValidations>
{
    // Error parsing type: , name: stack
    // Error parsing type: , name: delegate
    // Error parsing type: , name: transitionDelegate
    // Error parsing type: , name: isCustomTransitioning
}

- (void).cxx_destruct;
- (void)endAppearanceTransitionWithForwarding:(BOOL)arg1;
- (void)beginAppearanceTransition:(BOOL)arg1 forwarding:(BOOL)arg2;
- (BOOL)makeFirstResponder;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)navigateBack:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
@property(nonatomic, copy) NSString *title;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) NSViewController *deepestViewController;

@end

