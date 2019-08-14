//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSValue, _DUIPreview, _UIPlatterShadowView, _UIPortalView, _UIShapeView;

@interface _UIPlatterView : UIView
{
    BOOL _constrainSize;
    BOOL _lifted;
    BOOL _backgroundVisible;
    BOOL _shadowVisible;
    BOOL _appliesOriginalRotation;
    BOOL _constrainSizeWhenNotLifted;
    BOOL _flipped;
    BOOL _precisionMode;
    _DUIPreview *_preview;
    double _orientationRotation;
    double _rotation;
    UIView *_componentView;
    double _stackRotation;
    NSValue *_anchorPointValueToAdjustToOnMoveToWindow;
    UIView *_backgroundView;
    _UIPlatterShadowView *_diffuseShadowView;
    _UIShapeView *_platterMaskView;
    _UIShapeView *_portalMaskView;
    _UIPortalView *_portalView;
    UIView *_portalWrapperView;
    _UIPlatterShadowView *_rimShadowView;
    struct CGPoint _offset;
    struct CGSize _overrideSize;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _additionalTransform;
    struct CGAffineTransform _containerCounterScaleTransform;
    struct CGAffineTransform _containerCounterRotationTransform;
}

@property(nonatomic) struct CGAffineTransform containerCounterRotationTransform; // @synthesize containerCounterRotationTransform=_containerCounterRotationTransform;
@property(nonatomic) struct CGAffineTransform containerCounterScaleTransform; // @synthesize containerCounterScaleTransform=_containerCounterScaleTransform;
@property(readonly, nonatomic) _UIPlatterShadowView *rimShadowView; // @synthesize rimShadowView=_rimShadowView;
@property(readonly, nonatomic) UIView *portalWrapperView; // @synthesize portalWrapperView=_portalWrapperView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(readonly, nonatomic) _UIShapeView *portalMaskView; // @synthesize portalMaskView=_portalMaskView;
@property(readonly, nonatomic) _UIShapeView *platterMaskView; // @synthesize platterMaskView=_platterMaskView;
@property(readonly, nonatomic) _UIPlatterShadowView *diffuseShadowView; // @synthesize diffuseShadowView=_diffuseShadowView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL precisionMode; // @synthesize precisionMode=_precisionMode;
@property(nonatomic, getter=isFlipped) BOOL flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGAffineTransform additionalTransform; // @synthesize additionalTransform=_additionalTransform;
@property(nonatomic) BOOL constrainSizeWhenNotLifted; // @synthesize constrainSizeWhenNotLifted=_constrainSizeWhenNotLifted;
@property(retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow; // @synthesize anchorPointValueToAdjustToOnMoveToWindow=_anchorPointValueToAdjustToOnMoveToWindow;
@property(nonatomic) double stackRotation; // @synthesize stackRotation=_stackRotation;
@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) BOOL appliesOriginalRotation; // @synthesize appliesOriginalRotation=_appliesOriginalRotation;
@property(nonatomic) struct CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) double orientationRotation; // @synthesize orientationRotation=_orientationRotation;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic, getter=isShadowVisible) BOOL shadowVisible; // @synthesize shadowVisible=_shadowVisible;
@property(nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible; // @synthesize backgroundVisible=_backgroundVisible;
@property(nonatomic, getter=isLifted) BOOL lifted; // @synthesize lifted=_lifted;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) BOOL constrainSize; // @synthesize constrainSize=_constrainSize;
@property(readonly, copy, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
- (void).cxx_destruct;
- (void)_unmaskPlatterView;
- (void)updateTransform;
- (void)didMoveToSuperview;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)takeCounterTransformsToAddToContainer:(id)arg1;
- (struct CATransform3D)targetTransform;
- (struct CATransform3D)scaleTransform;
@property(nonatomic) __weak UIView *sourceView;
- (double)scaleFactor;
- (void)setComponentViews:(id)arg1;
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) struct CGPoint badgeLocation;
- (id)initWithDUIPreview:(id)arg1;

@end

