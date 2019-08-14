//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>
#import <ContactsUI/NSSecureCoding-Protocol.h>

@class NSIndexPath, NSString, UIButton, UIColor, UIFont, UIImage, UITableView, UITableViewCell, UIView, _UIGraphicsLetterpressStyle;

@protocol ABStyleProvider <NSObject, NSSecureCoding>
@property(readonly, nonatomic) long long groupCellSelectionStyle;
@property(readonly, nonatomic) struct CGSize groupCellShadowOffset;
@property(readonly, nonatomic) UIColor *groupCellShadowColor;
@property(readonly, nonatomic) UIColor *groupCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *groupCellTextColor;
@property(readonly, nonatomic) UIColor *groupHeaderBackgroudColor;
@property(readonly, nonatomic) UIColor *groupCellBackgroundColor;
@property(readonly, nonatomic) struct CGSize groupAccountNameShadowOffset;
@property(readonly, nonatomic) UIColor *groupAccountNameShadowColor;
@property(readonly, nonatomic) UIColor *groupAccountNameColor;
@property(readonly, nonatomic) UIFont *groupAccountNameFont;
@property(readonly, nonatomic) BOOL groupSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) double groupSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) double groupSectionHeaderHeight;
@property(readonly, nonatomic) UIColor *groupsTableBackgroundColor;
@property(readonly, nonatomic) BOOL groupsTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) BOOL peoplePickerBarStyleIsTranslucent;
@property(readonly, nonatomic) long long peoplePickerBarStyle;
@property(readonly, nonatomic) BOOL shouldUsePeoplePickerBarStyle;
@property(readonly, nonatomic) BOOL presentDatePickerInPopover;
@property(readonly, nonatomic) BOOL presentNewContactsControllersInPopover;
@property(readonly, nonatomic) BOOL presentModalViewInPopover;
@property(readonly, nonatomic) long long unknownModalPresentationStyle;
@property(readonly, nonatomic) long long composeModalPresentationStyle;
@property(readonly, nonatomic) BOOL shouldDefinePickerTransitionStyle;
@property(readonly, nonatomic) long long pickerTransitionStyle;
@property(readonly, nonatomic) BOOL shouldPropagateStylesToPickers;
@property(readonly, nonatomic) BOOL shouldPropagateStylesThroughUnknownPersonActions;
@property(readonly, nonatomic) UIColor *membersSearchCellBackgroundColor;
@property(readonly, nonatomic) UIColor *membersSearchBackgroundColor;
@property(readonly, nonatomic) UIColor *membersBackgroundColor;
@property(readonly, nonatomic) UIView *memberHeaderBackgroundView;
@property(readonly, nonatomic) UIColor *membersHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *membersHeaderContentViewBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTrackingBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTextColor;
@property(readonly, nonatomic) double membersIndexMaximumHeight;
@property(readonly, nonatomic) BOOL membersSearchBarIsInTableHeader;
@property(readonly, nonatomic) unsigned long long membersCountToShowIndex;
@property(readonly, nonatomic) unsigned long long membersCountToShowSections;
@property(readonly, nonatomic) long long membersSelectionStyle;
@property(readonly, nonatomic) UIImage *memberSectionListHeaderImage;
@property(readonly, nonatomic) BOOL searchControllerForceKeyboardDisplayEnabled;
@property(readonly, nonatomic) BOOL serverSearchNavigationBarHidingEnabled;
@property(readonly, nonatomic) BOOL searchIsAlwaysActive;
@property(readonly, nonatomic) UIColor *memberSelectedBackgroundColor;
@property(readonly, nonatomic) double memberScrollBarInset;
@property(readonly, nonatomic) BOOL memberShowContactPhoto;
@property(readonly, nonatomic) struct UIEdgeInsets memberNameInsets;
@property(readonly, nonatomic) struct CGSize memberNameShadowOffset;
@property(readonly, nonatomic) UIColor *memberSearchFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedShadowColor;
@property(readonly, nonatomic) UIColor *memberNameShadowColor;
@property(readonly, nonatomic) UIImage *memberNameMeCardDisabledImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardSelectedImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardImage;
@property(readonly, nonatomic) UIColor *memberNameMeCardShadowColor;
@property(readonly, nonatomic) UIColor *memberNameMeCardTextColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedColor;
@property(readonly, nonatomic) UIColor *memberNameDisabledTextColor;
@property(readonly, nonatomic) UIColor *memberNameTextColor;
@property(readonly, nonatomic) double memberNameInterComponentSpacing;
@property(readonly, nonatomic) UIFont *memberNameBoldFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameRegularFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameBoldFont;
@property(readonly, nonatomic) UIFont *memberNamePlaceholderFont;
@property(readonly, nonatomic) UIFont *memberNameRegularFont;
@property(readonly, nonatomic) BOOL labelPickerUsesOpaqueBackground;
@property(readonly, nonatomic) BOOL labelPickerShouldPushCustomLabelCreator;
@property(readonly, nonatomic) BOOL datePickerHasNavigationTitle;
@property(readonly, nonatomic) BOOL cardTableUsesRowFadeAnimation;
@property(readonly, nonatomic) BOOL linkedPhotoLabelStringsDescribeSourceOnly;
@property(readonly, nonatomic) BOOL linkedPhotoPickerIncludesCurrentPhoto;
@property(readonly, nonatomic) double cardLinkingHeaderLabelHeight;
@property(readonly, nonatomic) BOOL linkedCardsShouldAllowDeletion;
@property(readonly, nonatomic) UIView *cardNotesHeaderView;
@property(readonly, nonatomic) double cardNotesHeaderViewHeight;
@property(readonly, nonatomic) BOOL cardNotesLabelIncludesSource;
@property(readonly, nonatomic) BOOL cardAlwaysShowsNotes;
@property(readonly, nonatomic) long long cardCellSelectionStyle;
@property(readonly, nonatomic) UIColor *cardCellDisabledBackgroundColor;
@property(readonly, nonatomic) UIColor *cardCellBackgroundColor;
@property(readonly, nonatomic) double cardContentOccluderDefaultBottomFadingHeight;
@property(readonly, nonatomic) double cardContentOccluderDefaultTopFadingHeight;
@property(readonly, nonatomic) BOOL cardActionsAllowVoiceFavorites;
@property(readonly, nonatomic) BOOL cardActionsAllowFaceTimeFavorites;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonsInsets;
@property(readonly, nonatomic) UIImage *cardActionConferenceIconPressed;
@property(readonly, nonatomic) UIImage *cardActionConferenceIcon;
@property(readonly, nonatomic) double cardActionButtonHeight;
@property(readonly, nonatomic) double cardActionButtonSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonImageInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleDoubleLineInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleSingleLineInsets;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundHighlighted;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundNormal;
@property(readonly, nonatomic) long long cardActionButtonType;
@property(readonly, nonatomic) double cardCellVerticalSpacingBetweenAlertsOfSimilarType;
@property(readonly, nonatomic) UIImage *cardCellFacebookBadge;
@property(readonly, nonatomic) double cardCellBadgePaddingLeft;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEditRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEdit;
@property(readonly, nonatomic) long long cardCellAccessoryType;
@property(readonly, nonatomic) double cardSectionHeaderHeightForFollowingCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForFirstCardActions;
@property(readonly, nonatomic) BOOL cardShouldUseSeparateSectionsForUnknownCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForBottomActions;
@property(readonly, nonatomic) BOOL cardSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) double cardSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) struct CGSize cardSectionHeaderShadowOffset;
@property(readonly, nonatomic) UIColor *cardSectionHeaderShadowColor;
@property(readonly, nonatomic) UIColor *cardSectionHeaderTextColor;
@property(readonly, nonatomic) UIFont *cardSectionHeaderFont;
@property(readonly, nonatomic) BOOL cardSectionAlwaysWantsHeader;
@property(readonly, nonatomic) UIImage *cardValueClearButtonImage;
@property(readonly, nonatomic) UIColor *cardValueTappableColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueEditingInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueInsets;
@property(readonly, nonatomic) BOOL cardValueHighlightsWhenTouched;
@property(readonly, nonatomic) struct CGSize cardValueShadowOffset;
@property(readonly, nonatomic) UIColor *cardValueHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardValueShadowColor;
@property(readonly, nonatomic) UIColor *cardValueHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardValueBackgroundColor;
@property(readonly, nonatomic) UIFont *cardValueTextFont;
@property(readonly, nonatomic) UIColor *cardValueDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardValueTextColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardLabelInsets;
@property(readonly, nonatomic) UIColor *cardLabelBackgroundColor;
@property(readonly, nonatomic) double cardLabelWidth;
@property(readonly, nonatomic) UIFont *cardLabelEditingTextFont;
@property(readonly, nonatomic) UIFont *cardLabelTextFont;
@property(readonly, nonatomic) struct CGSize cardLabelShadowOffset;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelImportantHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEmphasizedHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEditingTextColor;
@property(readonly, nonatomic) UIColor *cardLabelDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardLabelTextColor;
@property(readonly, nonatomic) UIColor *cardLabelSelectedBackgroundColor;
@property(readonly, nonatomic) UIColor *cardSectionBackgroundColor;
@property(readonly, nonatomic) UIColor *cardTableBackgroundColor;
@property(readonly, nonatomic) double cardHeaderEditingImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderEditingImageTopMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageTopMargin;
@property(readonly, nonatomic) double cardHeaderViewLeftMargin;
@property(readonly, nonatomic) double cardHeaderViewTopMargin;
@property(readonly, nonatomic) UIColor *cardHeaderBackgroundColor;
@property(readonly, nonatomic) double cardHeaderImageNameEditorSpacing;
@property(readonly, nonatomic) double cardHeaderImageNameSpacing;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelBevelColor;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelColor;
@property(readonly, nonatomic) struct CGSize cardPhotoShadowOffset;
@property(readonly, nonatomic) struct CGSize cardPhotoOffset;
@property(readonly, nonatomic) double cardPhotoFrameBorderSize;
@property(readonly, nonatomic) BOOL shouldApplyMaskImage;
@property(readonly, nonatomic) BOOL cardPhotoShouldApplyOverlayImageWhenLabelPresent;
@property(readonly, nonatomic) BOOL cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
@property(readonly, nonatomic) BOOL cardPlaceholderImageShouldApplyMaskAndOverlay;
@property(readonly, nonatomic) BOOL shouldShowCardPhotoPlaceholder;
@property(readonly, nonatomic) BOOL cardHeaderNameViewAlignOnBottom;
@property(readonly, nonatomic) UIColor *cardHeaderDefaultLabelTextColor;
@property(readonly, nonatomic) unsigned long long cardTagNumberOfLines;
@property(readonly, nonatomic) unsigned long long cardNameNumberOfLines;
@property(readonly, nonatomic) UIFont *cardTaglineTextFont;
@property(readonly, nonatomic) UIColor *cardTaglineShadowColor;
@property(readonly, nonatomic) UIColor *cardTaglineTextColor;
@property(readonly, nonatomic) UIFont *cardHeadlineTextFont;
@property(readonly, nonatomic) UIColor *cardHeadlineShadowColor;
@property(readonly, nonatomic) UIColor *cardHeadlineTextColor;
@property(readonly, nonatomic) UIColor *cardTableCellBorderColor;
@property(readonly, nonatomic) BOOL shouldUseCardContentProviderWhenAvailable;
@property(readonly, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property(readonly, nonatomic) BOOL cardTableShouldAdjustForKeyboard;
@property(readonly, nonatomic) BOOL cardTableShouldRemoveBackgroundView;
- (BOOL)reloadCallAction;
- (BOOL)refreshTinyActionCell;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(UITableViewCell *)arg2;
- (UIView *)newCustomCardTableScrollingBackgroundView;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (int)dialogStyleForDeleteConfirmation;
- (UIImage *)cardDeleteButtonImagePressed;
- (UIImage *)cardDeleteButtonImage;
- (struct UIEdgeInsets)cardDeleteButtonInsets;
- (double)cardDeleteButtonHeight;
- (struct UIEdgeInsets)cardCellBackgroundInsetsWhenEditing:(BOOL)arg1;
- (UIColor *)cardCellDividerShadowColorVertical:(BOOL)arg1;
- (UIColor *)cardCellDividerColorVertical:(BOOL)arg1;
- (void)unselectAllCellParts:(UITableViewCell *)arg1;
- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(UITableViewCell *)arg3;
- (void)selectWholePartForCell:(UITableViewCell *)arg1;
- (void)selectValuePartForCell:(UITableViewCell *)arg1;
- (void)selectLabelPartForCell:(UITableViewCell *)arg1;
- (UITableViewCell *)cardTableView:(UITableView *)arg1 prepareCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (BOOL)cardTableView:(UITableView *)arg1 wantsHeaderForProperty:(int)arg2 inSection:(long long)arg3 whenEditing:(BOOL)arg4;
- (BOOL)personTableHeaderViewScrollsWhenEditing:(BOOL)arg1;
- (double)cardHeaderSpacingFromCardBodyWhenEditing:(BOOL)arg1;
- (double)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(BOOL)arg1;
- (double)cardTableViewLinkingHeaderTopPaddingWhenEditing:(BOOL)arg1;
- (double)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (double)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (double)cardMaxHeightForSwellTextViewWhenEditing:(BOOL)arg1;
- (double)cardNotesMinimumHeightWhenEditing:(BOOL)arg1;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(UIButton *)arg2;
- (UIButton *)newCardActionButton;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (UIColor *)editorViewColor;
- (UIFont *)editorViewSmallFont;
- (UIFont *)editorViewLargeFont;
- (double)personEditorFieldVerticalInset;
- (struct CGSize)personActionShadowOffset;
- (UIColor *)personActionShadowColor;
- (UIColor *)personActionHighlightedColor;
- (UIColor *)personActionColor;
- (UIFont *)personActionFont;
- (struct CGSize)personNoValueLabelShadowOffset;
- (UIColor *)personNoValueLabelShadowColor;
- (UIColor *)personNoValueLabelTextColor;
- (UIFont *)personNoValueLabelFont;
- (struct UIEdgeInsets)cardValueInsetsWhenEditing:(BOOL)arg1;
- (UIColor *)personValueImportantHighlightColor;
- (UIColor *)personValueImportantColor;
- (UIColor *)personValueEmphasizedHighlightColor;
- (UIColor *)personValueEmphasizedColor;
- (UIColor *)personValueHighlightColor;
- (UIColor *)personValueColor;
- (UIFont *)personValueFont;
- (double)personValueFontMinSize;
- (NSString *)copyLocalizedPropertyName:(int)arg1 lowercase:(BOOL)arg2;
- (NSString *)copyLocalizedLabel:(NSString *)arg1;
- (struct CGSize)personLabelShadowOffset;
- (UIColor *)personLabelShadowColor;
- (UIColor *)personLabelHighlightedColor;
- (UIColor *)personLabelColor;
- (UIFont *)personLabelFont;
- (double)personLabelFontMinSize;
- (double)personViewHorizontalCellInset;
- (double)personViewRowHeightWhenEditing:(BOOL)arg1;
- (struct CGSize)personHeaderShadowOffset;
- (UIColor *)personHeaderShadowColor;
- (UIColor *)personHeaderPasteboardColor;
- (double)personViewHeaderNameViewTextVerticalInset;
- (double)personViewHeaderNameViewTextHorizontalInset;
- (double)personViewHeaderImageHeight;
- (double)personViewHeaderImageWidth;
- (double)personViewVerticalSpacing;
- (double)personViewHeaderMinimumHeight;
- (double)personViewHeaderRightMargin;
- (UIImage *)personViewGetNameViewAccessoryImageSelected;
- (UIImage *)personViewGetNameViewAccessoryImage;
- (UIImage *)personViewGetFavoritesBadgeHighlighted;
- (UIImage *)personViewGetFavoritesBadge;
- (UIButton *)accessoryButtonForRelatedNames;
- (UIView *)accessoryViewForVideoBadge;
- (UIView *)accessoryViewForFavoritesBadge;
- (UIView *)accessoryViewForMailVIPBadge;
- (UIView *)newTableFooterViewForCellStyle:(int)arg1;
- (UIView *)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (UIColor *)separatorBottomShadowColorForCellStyle:(int)arg1;
- (UIColor *)separatorTopShadowColorForCellStyle:(int)arg1;
- (UIColor *)separatorColorForCellStyle:(int)arg1;
- (long long)separatorStyleForCellStyle:(int)arg1;
- (UIColor *)shadowColorForCellStyle:(int)arg1;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(BOOL)arg1;
- (int)abCellStyleForMembersTable;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForGroupsTableGrouped;
@end

