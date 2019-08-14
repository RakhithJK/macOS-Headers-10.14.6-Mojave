//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class IPXDurationBadge, IPXEditedBadge, IPXFileTypeBadge, IPXKeywordsBadge, IPXLocationBadge, IPXReferencedFileBadge, MOMediaItem, NSButton, NSImageView, NSString, NSTextField;
@protocol IPXBadgesViewDelegate;

@interface IPXBadgesView : NSView <NSAccessibilityGroup>
{
    MOMediaItem *_mediaItem;
    NSButton *_favoriteButton_DO_NOT_DIRECTLY_ACCESS;
    NSButton *_infoButton_DO_NOT_DIRECTLY_ACCESS;
    IPXLocationBadge *_locationIndicator_DO_NOT_DIRECTLY_ACCESS;
    NSImageView *_audioAttachmentIndicator_DO_NOT_DIRECTLY_ACCESS;
    IPXEditedBadge *_editedIndicator_DO_NOT_DIRECTLY_ACCESS;
    IPXKeywordsBadge *_keywordsIndicator_DO_NOT_DIRECTLY_ACCESS;
    IPXReferencedFileBadge *_referencedFileButton_DO_NOT_DIRECTLY_ACCESS;
    IPXFileTypeBadge *_fileTypeButton_DO_NOT_DIRECTLY_ACCESS;
    IPXDurationBadge *_videoDurationBadge_DO_NOT_DIRECTLY_ACCESS;
    NSImageView *_hyperionLoadingIndicator_DO_NOT_DIRECTLY_ACCESS;
    NSImageView *_hyperionLoadingErrorIndicator_DO_NOT_DIRECTLY_ACCESS;
    NSImageView *_hyperionErrorIndicator_DO_NOT_DIRECTLY_ACCESS;
    NSTextField *_captionLabel_DO_NOT_DIRECTLY_ACCESS;
    id <IPXBadgesViewDelegate> _delegate;
    unsigned int _options_DO_NOT_DIRECTLY_ACCESS:16;
    unsigned int _versionMasterIsReferencedFile:1;
    unsigned int _versionMasterIsNotAvailable:1;
    unsigned int _showDiscoverableControls:1;
    unsigned int _showReferencedFileBadge:1;
    unsigned int _showFileTypeBadge:1;
    unsigned int _showEditedBadge:1;
    unsigned int _showKeywordsBadge:1;
    unsigned int _showFavoriteBadge:1;
    unsigned int _showInfoBadge:1;
    unsigned int _showLocationBadge:1;
    unsigned int _showAudioAttachmentBadge:1;
    unsigned int _showVideoDuration:1;
    unsigned int _showCaptionLabel:1;
    unsigned int _showStarRatingControl:1;
    unsigned int _delegateWantsWillShowDiscoverableControls:1;
    unsigned int _delegateWantsDidShowDiscoverableControls:1;
    unsigned int _delegateWantsWillHideDiscoverableControls:1;
    unsigned int _delegateWantsDidHideDiscoverableControls:1;
    unsigned int _enforceFavorite:1;
    BOOL _inActivityView;
    CDStruct_0e3fad5d _badgeEdgeInsets;
}

@property(nonatomic) BOOL inActivityView; // @synthesize inActivityView=_inActivityView;
@property(nonatomic) CDStruct_0e3fad5d badgeEdgeInsets; // @synthesize badgeEdgeInsets=_badgeEdgeInsets;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)_mouseEnteredDelayed;
- (void)mouseEntered:(id)arg1;
- (void)_updateAllMetadataControlStates;
- (void)_cacheMasterSpecificAttributes;
- (void)setInitiallyFavorited:(BOOL)arg1;
- (void)setShowHyperionIndicator:(BOOL)arg1 forCloudResourceStatus:(short)arg2;
- (void)_hideHyperionIndicator;
- (void)_showHyperionIndicator:(short)arg1;
- (void)_placeExistingIndicatorsAndControls;
- (id)_captionLabelAllowingCreation:(BOOL)arg1;
- (id)_hyperionErrorIndicatorAllowingCreation:(BOOL)arg1;
- (id)_hyperionLoadingErrorIndicatorAllowingCreation:(BOOL)arg1;
- (id)_hyperionLoadingIndicatorAllowingCreation:(BOOL)arg1;
- (id)_audioAttachmentIndicatorAllowingCreation:(BOOL)arg1;
- (id)_locationIndicatorAllowingCreation:(BOOL)arg1;
- (void)_infoButtonClicked:(id)arg1;
- (id)_infoButtonAllowingCreation:(BOOL)arg1;
- (id)_fileTypeButtonAllowingCreation:(BOOL)arg1;
- (unsigned long long)_fileTypeButtonDisplayStyle;
- (id)_referencedFileButtonAllowingCreation:(BOOL)arg1;
- (id)_videoDurationAllowingCreation:(BOOL)arg1;
- (id)_keywordIndicatorAllowingCreation:(BOOL)arg1;
- (id)_editedIndicatorAllowingCreation:(BOOL)arg1;
- (void)_setIsFavorite:(BOOL)arg1;
- (void)_favoriteButtonClicked:(id)arg1;
- (id)_favoriteButtonAllowingCreation:(BOOL)arg1;
- (BOOL)showDiscoverableControls;
- (void)setShowDiscoverableControls:(BOOL)arg1;
@property(nonatomic) unsigned long long options;
- (id)_version;
- (id)contentObject;
- (void)updateWithMediaItem:(id)arg1;
- (void)_userDefaultToggled:(id)arg1;
- (void)layout;
- (void)dealloc;
- (id)initForActivityViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_performIPXBadgesViewCommonInitialization;
@property(nonatomic) __weak id <IPXBadgesViewDelegate> delegate;
- (BOOL)isFlipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

