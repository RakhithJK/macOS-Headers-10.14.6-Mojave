//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardCandidateList-Protocol.h>

@class TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIScrollView, UIView;

@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate <UIKeyboardCandidateList>
- (unsigned long long)gridCollectionViewNumberOfColumns:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(UIKeyboardCandidateGridCollectionViewController *)arg1;

@optional
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)padInlineFloatingViewExpand:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (UIView *)headerViewForCandidateSet:(TIKeyboardCandidateResultSet *)arg1;
@end

