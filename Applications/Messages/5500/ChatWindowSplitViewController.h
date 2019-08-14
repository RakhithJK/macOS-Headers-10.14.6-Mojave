//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class ChatWindowSplitView;

@interface ChatWindowSplitViewController : NSSplitViewController
{
    ChatWindowSplitView *_chatWindowSplitView;
}

@property(retain, nonatomic) ChatWindowSplitView *chatWindowSplitView; // @synthesize chatWindowSplitView=_chatWindowSplitView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)_preferredScrollerStyleDidChange:(id)arg1;
- (void)_updateMinimumThicknessForInlineSidebars;
- (id)_unifiedChatListViewController;
@property(readonly) double minNonCompactWidth;
@property(readonly) double minCompactWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

