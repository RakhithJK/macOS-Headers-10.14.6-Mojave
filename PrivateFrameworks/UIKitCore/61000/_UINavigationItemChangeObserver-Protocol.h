//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class UINavigationItem, UISearchController;

@protocol _UINavigationItemChangeObserver
- (void)navigationItemUpdatedSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2 animated:(BOOL)arg3;
- (void)navigationItemUpdatedBackgroundAppearance:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedCanvasView:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedBackButtonContent:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedPromptContent:(UINavigationItem *)arg1 animated:(BOOL)arg2;
- (void)navigationItemUpdatedTitleContent:(UINavigationItem *)arg1 animated:(BOOL)arg2;
@end

