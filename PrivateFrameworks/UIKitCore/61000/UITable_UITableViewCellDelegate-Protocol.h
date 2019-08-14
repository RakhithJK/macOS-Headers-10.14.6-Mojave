//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITable-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableViewCell, UITouch, UIView, _UITableViewCellActionButton;
@protocol UIInteraction;

@protocol UITable_UITableViewCellDelegate <UITable>
@property(readonly, nonatomic, getter=_isEditingForSwipeDeletion) BOOL editingForSwipeDeletion;
@property(retain, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell;
@property(readonly, nonatomic, getter=_usesModernSwipeActions) BOOL usesModernSwipeActions;
@property(readonly, nonatomic, getter=_swipeActionButtons) NSArray *swipeActionButtons;
@property(readonly, nonatomic, getter=_wasEditing) BOOL wasEditing;
@property(readonly, nonatomic, getter=_isInModalViewController) BOOL inModalViewController;
@property(readonly, nonatomic, getter=_popoverControllerStyle) long long popoverControllerStyle;
@property(readonly, nonatomic, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property(readonly, nonatomic, getter=_rowSpacing) double rowSpacing;
- (void)_highlightDidEndForCell:(UITableViewCell *)arg1 withInteraction:(id <UIInteraction>)arg2;
- (void)_prepareHighlightForCell:(UITableViewCell *)arg1 withInteraction:(id <UIInteraction>)arg2;
- (BOOL)_shouldDrawThickSeparators;
- (void)_userSelectCell:(UITableViewCell *)arg1;
- (void)_accessoryButtonAction:(UIView *)arg1;
- (void)_updateCell:(UITableViewCell *)arg1 withValue:(NSString *)arg2;
- (void)_highlightCell:(UITableViewCell *)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4;
- (void)_animateDeletionOfRowWithCell:(UITableViewCell *)arg1;
- (void)_animateDeletionOfRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)_titleForDeleteConfirmationButton:(UITableViewCell *)arg1;
- (void)_removeWasCanceledForCell:(UITableViewCell *)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(UITableViewCell *)arg1;
- (void)_didInsertRowForTableCell:(UITableViewCell *)arg1;
- (void)_endReorderingForCell:(UITableViewCell *)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_draggingReorderingCell:(UITableViewCell *)arg1 yDelta:(double)arg2 touch:(UITouch *)arg3;
- (BOOL)_beginReorderingForCell:(UITableViewCell *)arg1 touch:(UITouch *)arg2;
- (BOOL)_isReorderControlActiveForCell:(UITableViewCell *)arg1;
- (BOOL)_isCellReorderable:(UITableViewCell *)arg1;
- (UIView *)_reorderingCell;
- (double)_deleteConfirmationHorizontalVelocity;
- (double)_deleteConfirmationHorizontalOffset;
- (void)_configureDeleteConfirmationDecelerationRate:(double)arg1;
- (void)_revealDeleteConfirmationButtonWithWidth:(double)arg1;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (void)_endSwipeToDeleteGesture:(BOOL)arg1;
- (void)_animateSwipeCancelation;
- (void)_installSwipeToDeleteGobbler;
- (void)_actionButton:(_UITableViewCellActionButton *)arg1 pushedInCell:(UITableViewCell *)arg2;
- (void)_swipeAccessoryButtonPushedInCell:(UITableViewCell *)arg1;
- (void)_setSwipeToDeleteCell:(UITableViewCell *)arg1 installGobbler:(BOOL)arg2;
- (void)_swipeToDeleteCell:(UITableViewCell *)arg1;
- (struct CGRect)_calloutTargetRectForCell:(UITableViewCell *)arg1;
- (void)_performAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(UITableViewCell *)arg2 sender:(id)arg3;
- (BOOL)_shouldShowMenuForCell:(UITableViewCell *)arg1;
- (void)_cellDidBecomeUnfocused:(UITableViewCell *)arg1;
- (void)_cellDidBecomeFocused:(UITableViewCell *)arg1;
- (BOOL)_canFocusCell:(UITableViewCell *)arg1;
- (void)_cellDidHideSelectedBackground:(UITableViewCell *)arg1;
- (void)_cellDidShowSelectedBackground:(UITableViewCell *)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@end

