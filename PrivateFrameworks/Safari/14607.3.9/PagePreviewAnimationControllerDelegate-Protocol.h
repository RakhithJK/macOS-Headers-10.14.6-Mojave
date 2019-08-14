//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BrowserViewController, NSURL, PagePreviewAnimationController;

@protocol PagePreviewAnimationControllerDelegate <NSObject>
- (void)dismissPagePreviewAnimationController:(PagePreviewAnimationController *)arg1;
- (void)pagePreviewAnimationController:(PagePreviewAnimationController *)arg1 addURLToReadingList:(NSURL *)arg2;
- (void)pagePreviewAnimationController:(PagePreviewAnimationController *)arg1 handleClickInPreviewBrowserViewController:(BrowserViewController *)arg2;
- (void)pagePreviewAnimationController:(PagePreviewAnimationController *)arg1 didFinishPreviewWithBrowserViewController:(BrowserViewController *)arg2;
- (BrowserViewController *)makePreviewBrowserViewControllerForPagePreviewAnimationController:(PagePreviewAnimationController *)arg1;
@end

