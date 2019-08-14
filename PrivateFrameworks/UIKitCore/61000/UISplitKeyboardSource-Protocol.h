//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacementOwner-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardViewSource-Protocol.h>

@class UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIView, UIViewController;
@protocol UIInputViewSetPlacementApplicator;

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>
@property(readonly, retain, nonatomic) id <UIInputViewSetPlacementApplicator> applicator;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placement;
@property(readonly, retain, nonatomic) UIViewController *_inputViewController;
@property(readonly, nonatomic) struct CGPoint positionConstraintConstant;
@property(readonly, nonatomic) BOOL isChangingPlacement;
@property(readonly, retain, nonatomic) UIView *view;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
@end

