//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSImage, NSString, NSView, VisualTabPickerTileContainerView;

@protocol VisualTabPickerTileContainerDataSource <NSObject>
- (NSImage *)siteIconForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (int)muteButtonStateForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (BOOL)visualTabPickerTileContainerViewShouldShowMuteButton:(VisualTabPickerTileContainerView *)arg1;
- (struct CGRect)visibleBoundsForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (NSView *)tileViewForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 lowResolution:(BOOL)arg2;
- (NSString *)titleForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
@end

