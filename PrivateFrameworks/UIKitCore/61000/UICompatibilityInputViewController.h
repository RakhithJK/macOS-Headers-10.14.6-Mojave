//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIInputViewController.h>

#import <UIKitCore/_UIKBDelegateAwareInputController-Protocol.h>

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UIViewController;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController>
{
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    BOOL _tearingDownInputController;
    double _resetInputModeTime;
    UIViewController *_inputController;
    NSArray *_internalEdgeMatchConstraints;
}

+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (BOOL)_requiresProxyInterface;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;
@property(retain, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(BOOL)arg1;
- (void)willBeginTranslation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)_keyboardForThisViewController;
- (id)_keyboard;
- (id)childCompatibilityController;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (id)preferredFocusedView;
- (void)setInputMode:(id)arg1;
- (void)setTearingDownInputController;
- (void)assertCurrentInputModeIfNecessary;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)tearDownInputController;
- (void)removeSnapshotView;
- (void)addSnapshotViewForInputMode:(id)arg1;
- (void)takeSnapshotView;
- (void)rebuildChildConstraints;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)killIncomingExtension;
- (id)_compatView;
- (id)_compatibilityController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)dealloc;
- (void)loadView;
- (id)_initAsDeferredController;
- (void)setDeferredSystemView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

