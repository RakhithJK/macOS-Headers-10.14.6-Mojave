//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCFeedDescriptor, FRBundleSubscriptionPlacardCollectionViewCell, FRCollapsedHeadlineCell, FRCollectionHeaderReusableView, FRFeedCollectionViewCell, FRFeedDataSource, FRFeedObscuredHeadlineCollectionViewCell, FRFeedViewContext, FRHeartControl, FRSubscriptionPlacardCollectionViewCell, NFLHeadlineTileInfo, NSArray, NSError, NSString, UIView, UIViewController, UIWindow;
@protocol FCHeadlineProviding, FRCoverArticlesCollectionViewCellDelegate;

@protocol FRFeedDataSourceDelegate <NSObject>
- (void)feedDataSource:(FRFeedDataSource *)arg1 didSelectShareActivityForHeadline:(id <FCHeadlineProviding>)arg2 activityType:(NSString *)arg3 completed:(BOOL)arg4 returnedItems:(NSArray *)arg5 activityError:(NSError *)arg6 forSectionWithSectionID:(NSString *)arg7;
- (void)feedDataSource:(FRFeedDataSource *)arg1 bundleSubscriptionPlacardCellGenerated:(FRBundleSubscriptionPlacardCollectionViewCell *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 subscriptionPlacardCellGenerated:(FRSubscriptionPlacardCollectionViewCell *)arg2;
- (UIViewController *)feedCollectionViewControllerForDataSource:(FRFeedDataSource *)arg1;
- (FRFeedViewContext *)feedViewContextForDataSource:(FRFeedDataSource *)arg1;
- (long long)feedDataSourceOfflineReason:(FRFeedDataSource *)arg1;
- (BOOL)feedDataSourceShouldAppearOffline:(FRFeedDataSource *)arg1;
- (void)updateLoadingStatusForFeedDataSource:(FRFeedDataSource *)arg1 reason:(NSString *)arg2;
- (NSArray *)feedDataSource:(FRFeedDataSource *)arg1 accessibilityCustomActionsForCell:(FRFeedCollectionViewCell *)arg2;
- (struct CGSize)feedDataSourceFeedViewportSize:(FRFeedDataSource *)arg1;
- (void)feedDataSourceWillSlideInTopAnimateRefresh;
- (void)feedDataSourceDidRestoreBundleSubscriptionPurchase:(FRFeedDataSource *)arg1;
- (void)feedDataSourceWantsToStopCollapsedHeadlineAnimation:(FRFeedDataSource *)arg1 collapsedHeadlineCell:(FRCollapsedHeadlineCell *)arg2;
- (BOOL)shouldRenderHeadlineTextSynchronously:(FRFeedDataSource *)arg1;
- (NSString *)feedViewExposureID;
- (BOOL)presentingViewControllerIsVisibleForFeedDataSource:(FRFeedDataSource *)arg1;
- (void)feedDataSourceWantToPresentSettings:(FRFeedDataSource *)arg1;
- (void)feedDataSourceWantToPresentTermsAndConditions:(FRFeedDataSource *)arg1;
- (void)feedDataSource:(FRFeedDataSource *)arg1 cellSelectedForMoreVideoCellWithTileInfo:(NFLHeadlineTileInfo *)arg2 withGroupID:(NSString *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 wantsToPresentReportConcernForHeadline:(id <FCHeadlineProviding>)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 playButtonPressedForTopVideoCellWithTileInfo:(NFLHeadlineTileInfo *)arg2 withGroupID:(NSString *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 playButtonPressedForVideoCellWithTileInfo:(NFLHeadlineTileInfo *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 showShareSheetInCell:(FRFeedCollectionViewCell *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 cell:(FRFeedCollectionViewCell *)arg2 movedToWindow:(UIWindow *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 promptForMarkingAsUnoffensive:(FRFeedObscuredHeadlineCollectionViewCell *)arg2;
- (void)feedDataSourceDidPresentContent:(FRFeedDataSource *)arg1 animated:(BOOL)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 sectionID:(NSString *)arg2 favoriteControlTapped:(FRHeartControl *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 headerView:(FRCollectionHeaderReusableView *)arg2 favoriteControlTapped:(FRHeartControl *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 muteControlTapped:(UIView *)arg2 forSectionWithSectionID:(NSString *)arg3;
- (void)feedDataSource:(FRFeedDataSource *)arg1 wantsToPresentFeedForSectionID:(NSString *)arg2;
- (void)feedDataSourceWantsToCoverContent:(FRFeedDataSource *)arg1 animated:(BOOL)arg2;
- (UIViewController *)feedDataSource:(FRFeedDataSource *)arg1 previewingViewControllerForTileInfo:(NFLHeadlineTileInfo *)arg2;
- (BOOL)isLoadingCoverOverCollectionViewForFeedDataSource:(FRFeedDataSource *)arg1;

@optional
- (void)feedDataSource:(FRFeedDataSource *)arg1 didSelectHeadlineForTileInfo:(NFLHeadlineTileInfo *)arg2;
- (void)feedDataSource:(FRFeedDataSource *)arg1 wantsToCommitPreviewViewController:(UIViewController *)arg2 forL2Feed:(FCFeedDescriptor *)arg3;
- (UIViewController *)feedDataSource:(FRFeedDataSource *)arg1 previewViewControllerForL2Feed:(FCFeedDescriptor *)arg2;
- (UIViewController<FRCoverArticlesCollectionViewCellDelegate> *)feedPresentingViewController;
@end
