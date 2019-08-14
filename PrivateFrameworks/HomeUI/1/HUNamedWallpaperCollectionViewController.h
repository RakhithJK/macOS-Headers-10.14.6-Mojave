//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableDictionary;
@protocol HUNamedWallpaperCollectionViewControllerDelegate;

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController
{
    id <HUNamedWallpaperCollectionViewControllerDelegate> _delegate;
    long long _collectionType;
    NSArray *_wallpapers;
    NSMutableDictionary *_wallpaperImageCache;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) NSMutableDictionary *wallpaperImageCache; // @synthesize wallpaperImageCache=_wallpaperImageCache;
@property(retain, nonatomic) NSArray *wallpapers; // @synthesize wallpapers=_wallpapers;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, nonatomic) __weak id <HUNamedWallpaperCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithCollectionType:(long long)arg1 horizontalInset:(double)arg2 delegate:(id)arg3;

@end

