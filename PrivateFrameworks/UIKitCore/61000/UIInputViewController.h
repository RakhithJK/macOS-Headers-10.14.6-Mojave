//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UITextInputDelegate-Protocol.h>
#import <UIKitCore/_UITextDocumentInterfaceDelegate-Protocol.h>

@class NSString, UIInputView, UIKeyboard;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate>
{
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    double _touchBegan;
    BOOL _alignsToContentViewController;
    BOOL _autosizeToCurrentKeyboard;
    BOOL _hasDictationKey;
    id <UITextDocumentProxy> _textDocumentProxy;
    NSString *_primaryLanguage;
}

+ (void)presentDialogForAddingKeyboard;
+ (BOOL)_requiresProxyInterface;
@property(nonatomic) BOOL hasDictationKey; // @synthesize hasDictationKey=_hasDictationKey;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard; // @synthesize _autosizeToCurrentKeyboard;
@property(nonatomic) BOOL _alignsToContentViewController; // @synthesize _alignsToContentViewController;
@property(readonly, nonatomic) id <UITextDocumentProxy> textDocumentProxy; // @synthesize textDocumentProxy=_textDocumentProxy;
- (BOOL)_canBecomeFirstResponder;
- (void)_didResetDocumentState;
- (void)_willResetDocumentState;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)requestSupplementaryLexiconWithCompletion:(CDUnknownBlockType)arg1;
- (void)returnToPreviousInputMode;
- (void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2;
- (void)advanceToNextInputMode;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)dismissKeyboard;
@property(readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property(readonly, nonatomic) BOOL hasFullAccess;
- (void)setView:(id)arg1;
@property(retain, nonatomic) UIInputView *inputView;
- (id)_textDocumentInterface;
- (id)_proxyInterface;
- (id)_compatibilityController;
@property(readonly, nonatomic) BOOL _isPlaceholder;
@property(readonly, nonatomic) UIKeyboard *_keyboard;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (BOOL)_canResignIfContainsFirstResponder;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_setExtensionContextUUID:(id)arg1;
- (id)_extensionContext;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_updateConformanceCache;
- (void)loadView;
- (void)set_autosizeToCurrentKeyboard:(BOOL)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)dealloc;
- (void)_setupInputController;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

