//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBar_Base.h>

#import <UIKitCore/UIStatusBarServerClient-Protocol.h>
#import <UIKitCore/UIStatusBarStateObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBarWindow, UIView;
@protocol UIStatusBarStateProvider;

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    id <UIStatusBarStateProvider> _inProcessProvider;
    BOOL _showsForeground;
    BOOL _observingDefaults;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_65a685f2 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarStyleAttributes *_styleAttributes;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    double _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    NSMutableDictionary *_actions;
    BOOL _disablesRasterization;
    BOOL _timeHidden;
    UIStatusBarWindow *_statusBarWindow;
}

+ (long long)deviceUserInterfaceLayoutDirection;
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(BOOL)arg2;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (BOOL)_isLightContentStyle:(long long)arg1;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (long long)lowBatteryLevel;
+ (void)getData:(CDStruct_65a685f2 *)arg1 forRequestedData:(const CDStruct_65a685f2 *)arg2 withOverrides:(const CDStruct_0ea7c6fe *)arg3;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;
+ (id)defaultBlueTintColor;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3;
+ (BOOL)_shouldForwardToImplementationClassForStyle:(long long)arg1;
@property(nonatomic, getter=isTimeHidden) BOOL timeHidden; // @synthesize timeHidden=_timeHidden;
- (BOOL)disablesRasterization;
- (void)setStatusBarWindow:(id)arg1;
- (id)statusBarWindow;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dateTimePreferencesUpdated;
- (BOOL)_rectIntersectsTimeItem:(struct CGRect)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;
- (void)_clearOverrideHeight;
- (void)_setOverrideHeight:(double)arg1;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentComposedData;
- (BOOL)_isTransparent;
- (id)_backgroundView;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_65a685f2 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_65a685f2 *)arg2 withActions:(int)arg3;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_setDisablesRasterization:(BOOL)arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)actionForPartWithIdentifier:(id)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)_currentStyleAttributes;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (id)styleRequest;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setSimulatesLegacyAppearance:(BOOL)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)setRegistered:(BOOL)arg1;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)jiggleLockIcon;
- (void)animateUnlock;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)_touchShouldProduceReturnEvent;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (void)_setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (void)setOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)setTintColor:(id)arg1;
- (id)activeTintColor;
- (void)_swapToNewForegroundView;
- (void)_swapToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (void)_crossfadeToNewBackgroundView;
- (void)_setStyle:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3;
- (void)_updateBackgroundFrame;
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (struct CGAffineTransform)_slideTransform;
- (id)currentDoubleHeightLabelText;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (BOOL)isTranslucent;
- (BOOL)isDoubleHeight;
- (long long)currentStyle;
- (double)_standardHeight;
- (double)heightForOrientation:(long long)arg1;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)forgetEitherSideHistory;
- (void)noteStyleOverridesChangedLocally;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateToData:(const CDStruct_65a685f2 *)arg1 animated:(BOOL)arg2;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdate:(BOOL)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

