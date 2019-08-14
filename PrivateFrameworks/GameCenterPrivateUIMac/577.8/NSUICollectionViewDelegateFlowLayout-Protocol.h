//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSUICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSUICollectionView, NSUICollectionViewLayout;

@protocol NSUICollectionViewDelegateFlowLayout <NSUICollectionViewDelegate>

@optional
- (struct CGSize)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(NSUICollectionView *)arg1 layout:(NSUICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

