//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class AVTouchBarScrubber, WebBookmarkLeaf, WindowFunctionBarProvider;

@protocol WindowFunctionBarProviderDelegate <NSObject>

@optional
- (AVTouchBarScrubber *)mediaPlaybackControlsViewForFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)didHideFavoritesPickerForFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)windowFunctionBarProvider:(WindowFunctionBarProvider *)arg1 didSelectFavorite:(WebBookmarkLeaf *)arg2;
- (void)performAutoFillFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleWebInspectorFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleFavoritesBarFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleSidebarFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleHistoryFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)goHomeFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleVisualTabPickerFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)toggleReaderFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)shareFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)addBookmarkFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)goForwardFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)goBackFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)focusUnifiedFieldFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)openNewTabFromFunctionBarProvider:(WindowFunctionBarProvider *)arg1;
- (void)functionBarProvider:(WindowFunctionBarProvider *)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (void)didEndScrubbingTabsInFunctionBarWithProvider:(WindowFunctionBarProvider *)arg1;
- (void)didBeginScrubbingTabsInFunctionBarWithProvider:(WindowFunctionBarProvider *)arg1;
- (void)didChangeFunctionBarItemsForProvider:(WindowFunctionBarProvider *)arg1;
- (void)willChangeFunctionBarItemsForProvider:(WindowFunctionBarProvider *)arg1;
@end

