//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDictionary;

@protocol PXMutableBrowserSummaryController <NSObject>
@property(copy, nonatomic) NSDictionary *selectionAttributes;
@property(copy, nonatomic) NSDictionary *emphasizedAttributes;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
@property(nonatomic) BOOL shouldUseNavigationTitle;
@property(nonatomic) BOOL shouldUseSubtitles;
- (void)invalidateFilteringContainerContent;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (void)invalidateContainerDateInterval;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateContainerTitle;
@end

