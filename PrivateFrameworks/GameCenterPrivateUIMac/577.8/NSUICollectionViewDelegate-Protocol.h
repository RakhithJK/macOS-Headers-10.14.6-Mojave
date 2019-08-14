//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSObject-Protocol.h>

@class NSArray, NSEvent, NSIndexPath, NSIndexSet, NSSet, NSString, NSUICollectionReusableView, NSUICollectionView, NSUICollectionViewCell;

@protocol NSUICollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(NSUICollectionView *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(NSUICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 didUpdateSections:(NSIndexSet *)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 didPrepareForOverdraw:(struct CGRect)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 itemWasRightClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(NSUICollectionView *)arg1 itemWasDoubleClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(NSUICollectionView *)arg1 didEndDisplayingSupplementaryView:(NSUICollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSUICollectionView *)arg1 didEndDisplayingCell:(NSUICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSUICollectionView *)arg1 willDisplaySupplementaryView:(NSUICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSUICollectionView *)arg1 willDisplayCell:(NSUICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSUICollectionView *)arg1 indexPathsForSelectedItemsDidAdd:(NSSet *)arg2 remove:(NSSet *)arg3 animated:(BOOL)arg4;
- (void)collectionView:(NSUICollectionView *)arg1 indexPathsForSelectedItemsWillAdd:(NSSet *)arg2 remove:(NSSet *)arg3 animated:(BOOL)arg4;
- (void)collectionView:(NSUICollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(NSUICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(NSUICollectionView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(NSUICollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidEndDecelerating:(NSUICollectionView *)arg1;
- (void)collectionViewWillBeginDecelerating:(NSUICollectionView *)arg1 targetContentOffset:(struct CGPoint)arg2;
- (void)collectionViewDidEndScrolling:(NSUICollectionView *)arg1;
- (void)collectionViewDidScroll:(NSUICollectionView *)arg1;
- (void)collectionViewWillBeginScrolling:(NSUICollectionView *)arg1;
@end

