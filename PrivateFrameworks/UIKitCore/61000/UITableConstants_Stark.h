//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableConstants-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_Stark : NSObject <UITableConstants>
{
}

+ (id)sharedConstants;
- (double)defaultMaskGradientHeightForTableView:(id)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
- (BOOL)reorderingCellWantsShadows:(id)arg1 inTableView:(id)arg2;
- (double)defaultAlphaForReorderingCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectHighlightedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultInsertImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDisclosurePressedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (id)defaultHeaderTextColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;
- (id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextFontForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(BOOL)arg4;
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
- (double)_defaultPlainHeaderFooterHeightForTableView:(id)arg1;
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
- (double)defaultMarginWidthForTableView:(id)arg1;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id)arg1;
- (double)defaultContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (BOOL)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultSectionFooterHeightForTableView:(id)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;
- (BOOL)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id)arg1;
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (id)defaultSelectionEffectsForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSelectionTintColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (BOOL)supportsUserInterfaceStyles;
- (id)variantForActive:(BOOL)arg1 dark:(BOOL)arg2;
- (id)sidebarVariant;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

