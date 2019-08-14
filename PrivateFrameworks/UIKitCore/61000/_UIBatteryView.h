//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class CALayer, CAShapeLayer, NSString, UIAccessibilityHUDItem, UIColor, UILabel, _UIBatteryViewAXHUDImageCacheInfo;

@interface _UIBatteryView : UIView <_UIStatusBarDisplayable>
{
    BOOL _saverModeActive;
    BOOL _showsInlineChargingIndicator;
    BOOL _showsPercentage;
    double _chargePercent;
    long long _chargingState;
    UIColor *_fillColor;
    UIColor *_bodyColor;
    UIColor *_pinColor;
    long long _iconSize;
    CAShapeLayer *_bodyLayer;
    CAShapeLayer *_pinLayer;
    CALayer *_fillLayer;
    CAShapeLayer *_boltMaskLayer;
    CAShapeLayer *_boltLayer;
    UILabel *_percentageLabel;
    _UIBatteryViewAXHUDImageCacheInfo *_accessibilityHUDImageCacheInfo;
    long long _internalSizeCategory;
}

+ (struct CGSize)_statusBarIntrinsicContentSizeForIconSize:(long long)arg1;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)arg1;
+ (struct CGSize)_pinSizeForIconSize:(long long)arg1;
+ (struct CGSize)_batterySizeForIconSize:(long long)arg1;
@property(nonatomic) BOOL showsPercentage; // @synthesize showsPercentage=_showsPercentage;
@property(nonatomic) long long internalSizeCategory; // @synthesize internalSizeCategory=_internalSizeCategory;
@property(retain, nonatomic) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo; // @synthesize accessibilityHUDImageCacheInfo=_accessibilityHUDImageCacheInfo;
@property(retain, nonatomic) UILabel *percentageLabel; // @synthesize percentageLabel=_percentageLabel;
@property(retain, nonatomic) CAShapeLayer *boltLayer; // @synthesize boltLayer=_boltLayer;
@property(retain, nonatomic) CAShapeLayer *boltMaskLayer; // @synthesize boltMaskLayer=_boltMaskLayer;
@property(retain, nonatomic) CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) CAShapeLayer *pinLayer; // @synthesize pinLayer=_pinLayer;
@property(retain, nonatomic) CAShapeLayer *bodyLayer; // @synthesize bodyLayer=_bodyLayer;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) UIColor *pinColor; // @synthesize pinColor=_pinColor;
@property(copy, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) BOOL showsInlineChargingIndicator; // @synthesize showsInlineChargingIndicator=_showsInlineChargingIndicator;
@property(nonatomic) BOOL saverModeActive; // @synthesize saverModeActive=_saverModeActive;
@property(nonatomic) long long chargingState; // @synthesize chargingState=_chargingState;
@property(nonatomic) double chargePercent; // @synthesize chargePercent=_chargePercent;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)applyStyleAttributes:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)_currentlyShowsPercentage;
@property(readonly, nonatomic, getter=isLowBattery) BOOL lowBattery;
@property(nonatomic) long long sizeCategory;
- (void)_unflipBoltIfNecessary;
- (void)_updatePercentage;
- (void)_updateBolt;
- (void)_updateFillLayer;
- (void)_updateFillColor;
- (void)_updateBodyColors;
- (void)layoutSubviews;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (double)_lineWidthAndInterspaceForTraitCollection:(id)arg1;
- (struct CGSize)_pinSizeForTraitCollection:(id)arg1;
- (struct CGSize)_batterySizeForTraitCollection:(id)arg1;
- (id)_batteryTextColor;
- (id)_batteryFillColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL wantsCrossfade;

@end

