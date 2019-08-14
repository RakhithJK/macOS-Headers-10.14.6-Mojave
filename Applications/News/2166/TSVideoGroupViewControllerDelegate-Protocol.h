//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSError, NSString, UIViewController;
@protocol FCHeadlineProviding, TSVideoGroupViewControllerType;

@protocol TSVideoGroupViewControllerDelegate
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didSelectShareActivityForHeadline:(id <FCHeadlineProviding>)arg2 activityType:(NSString *)arg3 completed:(BOOL)arg4 returnedItems:(NSArray *)arg5 activityError:(NSError *)arg6 withGroupID:(NSString *)arg7;
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didSelectDislikeButtonWithGroupID:(NSString *)arg2;
- (UIViewController *)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 previewingViewControllerForHeadline:(id <FCHeadlineProviding>)arg2 with:(NSString *)arg3;
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didPressPlayButtonForMoreVideoHeadline:(id <FCHeadlineProviding>)arg2 withGroupID:(NSString *)arg3;
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didSelectReportConcernActivityForVideoHeadline:(id <FCHeadlineProviding>)arg2;
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didSelectMoreVideoHeadline:(id <FCHeadlineProviding>)arg2 withGroupID:(NSString *)arg3;
- (void)videoGroupViewController:(id <TSVideoGroupViewControllerType>)arg1 didSelectTopVideoHeadline:(id <FCHeadlineProviding>)arg2 withGroupID:(NSString *)arg3;
@end
