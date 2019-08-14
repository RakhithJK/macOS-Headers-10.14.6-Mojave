//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage, UIView, _UILegibilityImageSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    int _capacity;
    int _state;
    BOOL _batterySaverModeActive;
    UIView *_accessoryView;
    BOOL _cachedImageHasAccessoryImage;
    int _cachedCapacity;
    int _cachedAXHUDCapacity;
    _UILegibilityImageSet *_cachedImageSet;
    unsigned long long _cachedBatteryStyle;
    unsigned long long _cachedAXHUDStyle;
    UIImage *_cachedAXHUDImage;
}

@property(retain, nonatomic) UIImage *cachedAXHUDImage; // @synthesize cachedAXHUDImage=_cachedAXHUDImage;
@property(nonatomic) unsigned long long cachedAXHUDStyle; // @synthesize cachedAXHUDStyle=_cachedAXHUDStyle;
@property(nonatomic) int cachedAXHUDCapacity; // @synthesize cachedAXHUDCapacity=_cachedAXHUDCapacity;
@property(nonatomic) unsigned long long cachedBatteryStyle; // @synthesize cachedBatteryStyle=_cachedBatteryStyle;
@property(nonatomic) BOOL cachedImageHasAccessoryImage; // @synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage;
@property(nonatomic) int cachedCapacity; // @synthesize cachedCapacity=_cachedCapacity;
@property(retain, nonatomic) _UILegibilityImageSet *cachedImageSet; // @synthesize cachedImageSet=_cachedImageSet;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (double)legibilityStrength;
- (void)_updateAccessoryImage;
- (double)extraRightPadding;
- (id)contentsImage;
- (id)_contentsImage;
- (id)_accessoryImage;
- (BOOL)_needsAccessoryImage;
- (struct CGSize)_batteryOffsetWithBackground:(id)arg1;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end
