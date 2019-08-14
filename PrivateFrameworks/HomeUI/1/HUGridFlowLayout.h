//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <HomeUI/HUControllableCollectionViewLayout-Protocol.h>

@class HFWallpaperSlice, HUGridLayoutOptions, HUWallpaperView, NSHashTable, NSMutableDictionary, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout>
{
    HUGridLayoutOptions *_layoutOptions;
    HUWallpaperView *_wallpaperView;
    HFWallpaperSlice *_blurredWallpaperSlice;
    NSMutableDictionary *_overrideAttributesByIndexPath;
    NSHashTable *_childGridLayouts;
    HUGridFlowLayout *_parentGridLayout;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) __weak HUGridFlowLayout *parentGridLayout; // @synthesize parentGridLayout=_parentGridLayout;
@property(retain, nonatomic) NSHashTable *childGridLayouts; // @synthesize childGridLayouts=_childGridLayouts;
@property(readonly, nonatomic) NSMutableDictionary *overrideAttributesByIndexPath; // @synthesize overrideAttributesByIndexPath=_overrideAttributesByIndexPath;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(nonatomic) __weak HUWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)unregisterChildGridLayout:(id)arg1;
- (void)registerChildGridLayout:(id)arg1;
- (void)_updateContainingGridLayout;
- (void)clearAllOverrideAttributes;
- (void)clearOverrideAttributesForItemAtIndexPath:(id)arg1;
- (void)applyOverrideAttributes:(id)arg1 toItemAtIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

