//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TouchBarViewController.h"

@class TouchBarShuffleItemButton;

@interface ShuffleItemButtonTouchBarViewController : TouchBarViewController
{
    TouchBarShuffleItemButton *_shuffleItemButton;
}

@property(retain, nonatomic) TouchBarShuffleItemButton *shuffleItemButton; // @synthesize shuffleItemButton=_shuffleItemButton;
- (void)installHandlers;
- (void)updateUI;
- (void)viewDidAppear;
- (void)loadView;
- (void)handleShuffleItemButton:(id)arg1;
- (void)playerHandleButtonPressedForButtonType:(int)arg1;
- (void)dealloc;

@end
