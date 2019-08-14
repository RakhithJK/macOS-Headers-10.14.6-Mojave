//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Private-Protocol.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate-Protocol.h>

@class NSString, UIView;
@protocol UIInteractionEffect, _UIClickInteractionDelegate, _UIClickInteractionDriving;

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction>
{
    BOOL _latching;
    BOOL _selected;
    BOOL _delaysOtherPanRecognizers;
    UIView *_view;
    id <UIInteractionEffect> _interactionEffect;
    id <_UIClickInteractionDelegate> _delegate;
    double _allowableMovement;
    id <_UIClickInteractionDriving> _driver;
    Class _overrideDriverClass;
}

@property(nonatomic) BOOL delaysOtherPanRecognizers; // @synthesize delaysOtherPanRecognizers=_delaysOtherPanRecognizers;
@property(nonatomic, setter=_setOverrideDriverClass:) Class overrideDriverClass; // @synthesize overrideDriverClass=_overrideDriverClass;
@property(retain, nonatomic) id <_UIClickInteractionDriving> driver; // @synthesize driver=_driver;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isLatching) BOOL latching; // @synthesize latching=_latching;
@property(nonatomic) __weak id <_UIClickInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (BOOL)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2;
- (void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2;
- (void)clickDriver:(id)arg1 didPerformStateChange:(unsigned long long)arg2;
- (BOOL)clickDriverShouldBegin:(id)arg1;
- (void)_createFeedbackGenerator;
- (Class)_driverClass;
- (void)_updateDriver;
- (void)_endInteraction;
- (void)_beginInteraction;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

