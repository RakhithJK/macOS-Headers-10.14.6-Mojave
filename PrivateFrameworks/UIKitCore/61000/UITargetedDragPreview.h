//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSDictionary, UIDragPreviewParameters, UIDragPreviewTarget, UIView, _DUIPreview;

@interface UITargetedDragPreview : NSObject <NSCopying>
{
    _DUIPreview *_duiPreview;
    BOOL _defaultPreview;
    BOOL __springboardPlatterStyle;
    UIDragPreviewTarget *_target;
    UIView *_view;
    UIDragPreviewParameters *_parameters;
    UIView *_viewToSnapshot;
    NSDictionary *__springboardParameters;
    struct CGPoint _liftAnchorPoint;
}

+ (id)new;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;
+ (id)previewForURL:(id)arg1 target:(id)arg2;
@property(copy, nonatomic) NSDictionary *_springboardParameters; // @synthesize _springboardParameters=__springboardParameters;
@property(nonatomic) BOOL _springboardPlatterStyle; // @synthesize _springboardPlatterStyle=__springboardPlatterStyle;
@property(nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) __weak UIView *viewToSnapshot; // @synthesize viewToSnapshot=_viewToSnapshot;
@property(nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview; // @synthesize defaultPreview=_defaultPreview;
@property(nonatomic) struct CGPoint liftAnchorPoint; // @synthesize liftAnchorPoint=_liftAnchorPoint;
@property(readonly, copy, nonatomic) UIDragPreviewParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)_untargetedPreview;
- (id)retargetedPreviewWithTarget:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (BOOL)containsPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)takeLiftLocation:(struct CGPoint)arg1 fromView:(id)arg2;
@property(readonly, nonatomic) CDUnknownBlockType _duiPreviewProvider;
@property(readonly, nonatomic) _DUIPreview *_duiPreview;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;

@end

