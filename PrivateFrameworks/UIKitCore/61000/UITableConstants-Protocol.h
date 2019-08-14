//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIColor, UIFont, UIImage, UITableViewCell, UITableViewHeaderFooterView;
@protocol UITable, UITableConstants;

@protocol UITableConstants <NSObject>
+ (id)sharedConstants;
- (double)defaultMaskGradientHeightForTableView:(id <UITable>)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id <UITable>)arg1;
- (double)defaultFocusedHorizontalOutsetForTableView:(id <UITable>)arg1;
- (double)defaultAlphaForDraggingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (BOOL)reorderingCellWantsShadows:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultAlphaForReorderingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectHighlightedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultEditControlPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosurePressedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (UIFont *)defaultFooterFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (UIColor *)defaultFooterTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultFooterFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultHeaderFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id <UITable>)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(BOOL)arg4;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultDetailTextFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultTextLabelFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (NSArray *)defaultSelectionEffectsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultSelectionTintColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id <UITable>)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id <UITable>)arg1;
- (double)defaultContentAccessoryPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentReorderPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentEditPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (BOOL)imageViewOffsetByLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTrailingCellMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultMarginWidthForTableView:(id <UITable>)arg1;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id <UITable>)arg1;
- (double)defaultSectionFooterHeightForTableView:(id <UITable>)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (BOOL)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1 cellStyle:(long long)arg2;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (NSArray *)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (BOOL)supportsUserInterfaceStyles;
- (id <UITableConstants>)variantForActive:(BOOL)arg1 dark:(BOOL)arg2;
- (id <UITableConstants>)sidebarVariant;

@optional
- (UIImage *)defaultFocusedReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;
@end

