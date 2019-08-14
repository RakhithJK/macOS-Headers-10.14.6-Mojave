//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TListBaseCellView.h"

#import "TICloudBadgeButtonContainer-Protocol.h"
#import "TInlineProgressViewContainer-Protocol.h"

@class NSString;

@interface TListNameCellView : TListBaseCellView <TICloudBadgeButtonContainer, TInlineProgressViewContainer>
{
    struct TNSRef<TBasicImageView, void> _iconImageView;
    struct TNSRef<NSLayoutConstraint, void> _iconImageViewWidthConstraint;
    struct TNSRef<NSLayoutConstraint, void> _iconImageViewTrailingConstraint;
    struct TNSRef<TListNameSubtitleTextField, void> _subtitleTextField;
    struct TNSRef<NSLayoutGuide, void> _subtitleTextFieldLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _subtitleTrailingSpaceLayoutGuide;
    struct TNSRef<NSLayoutGuide, void> _tagsViewLayoutGuide;
    struct TNSRef<TTagsImageView, void> _tagsImageView;
    struct TNSRef<NSLayoutConstraint, void> _tagsViewMasterLayoutGuideConstraint;
    struct TNSRef<NSLayoutConstraint, void> _tagsViewMasterWidthConstraint;
    struct TNSRef<NSLayoutGuide, void> _badgeViewLayoutGuide;
    struct TNSRef<TICloudBadgeButton, void> _iCloudBadgeImageButton;
    struct TNSRef<TImageView, void> _syncExtensionBadgeImageView;
    function_d15ff7cc _syncExtBadgeAndToolTipFunc;
    struct TNSRef<NSLayoutConstraint, void> _badgeViewMasterLayoutGuideConstraint;
    struct TNSRef<NSLayoutConstraint, void> _badgeViewMasterWidthConstraint;
    struct TNSRef<TInlineProgressView, void> _progressView;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setDimmed:(_Bool)arg1;
- (void)updateProgressView;
- (void)setProgressStatus:(const struct TNodeProgressStatus *)arg1;
- (void)setBadgeViewMasterWidth:(double)arg1;
- (void)setTagsViewMasterWidth:(double)arg1;
- (void)deactiveMasterLayoutGuideConstraints;
- (void)setMasterLayoutGuide:(id)arg1;
- (void)updateBadgeViewMasterLayoutGuideConstraints;
- (void)updateSyncExtensionBadgeImage;
- (void)setICloudBadge:(int)arg1 toolTip:(const struct TString *)arg2 clickHandler:(const function_b1fce659 *)arg3;
- (void)setSyncExtBadgeAndToolTipFunc:(const function_d15ff7cc *)arg1;
- (void)setTags:(const vector_12bd641b *)arg1;
- (void)setSubtitleStringSet:(const unordered_set_66d0470b *)arg1;
- (id)titleCell;
- (unsigned long long)titleAlignment;
- (id)hitTestInTitle:(const struct CGPoint *)arg1;
- (struct CGRect)titleEditorMaxFrame;
- (struct CGRect)titleFrame;
- (id)createTitleImage;
- (void)setTitleShouldEdit:(_Bool)arg1;
- (void)setTitleHidden:(_Bool)arg1;
- (void)setController:(id)arg1;
- (id)nameTextField;
- (void)setTitleFont:(id)arg1;
- (void)setTitleStr:(struct TString)arg1;
- (void)setIconImage:(id)arg1;
- (double)iconSize;
- (void)setIconSize:(double)arg1;
- (id)iconImageView;
- (void)layout;
- (struct CGSize)idealSize;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

