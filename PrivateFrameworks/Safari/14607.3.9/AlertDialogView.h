//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/KeyLoopSplicingContainerView.h>

#import <Safari/TabDialogView-Protocol.h>

@class AlertDialogViewOriginMessageAccessibilityHelper, BackgroundColorView, ButtonPlus, NSLayoutConstraint, NSScrollView, NSString, NSTextField, NSTextView;
@protocol AlertDialogViewDelegate;

__attribute__((visibility("hidden")))
@interface AlertDialogView : KeyLoopSplicingContainerView <TabDialogView>
{
    NSLayoutConstraint *_scrollViewToTextViewHeightConstraint;
    AlertDialogViewOriginMessageAccessibilityHelper *_originMessageAccessibilityHelper;
    id <AlertDialogViewDelegate> _delegate;
    NSTextField *_promptUserResponseTextField;
    NSString *_originStringForAccessibility;
    NSScrollView *_dialogMessageScrollView;
    NSTextView *_dialogMessageTextView;
    BackgroundColorView *_separatorView;
    ButtonPlus *_secondaryButton;
    ButtonPlus *_okButton;
    ButtonPlus *_optionalButton;
    NSLayoutConstraint *_maximumHeightConstraint;
    NSLayoutConstraint *_userResponsePromptFieldHeightConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSTextField *_dialogTitleView;
}

@property __weak NSTextField *dialogTitleView; // @synthesize dialogTitleView=_dialogTitleView;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property __weak NSLayoutConstraint *userResponsePromptFieldHeightConstraint; // @synthesize userResponsePromptFieldHeightConstraint=_userResponsePromptFieldHeightConstraint;
@property __weak NSLayoutConstraint *maximumHeightConstraint; // @synthesize maximumHeightConstraint=_maximumHeightConstraint;
@property __weak ButtonPlus *optionalButton; // @synthesize optionalButton=_optionalButton;
@property __weak ButtonPlus *okButton; // @synthesize okButton=_okButton;
@property __weak ButtonPlus *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property __weak BackgroundColorView *separatorView; // @synthesize separatorView=_separatorView;
@property NSTextView *dialogMessageTextView; // @synthesize dialogMessageTextView=_dialogMessageTextView;
@property __weak NSScrollView *dialogMessageScrollView; // @synthesize dialogMessageScrollView=_dialogMessageScrollView;
@property(copy, nonatomic) NSString *originStringForAccessibility; // @synthesize originStringForAccessibility=_originStringForAccessibility;
@property __weak NSTextField *promptUserResponseTextField; // @synthesize promptUserResponseTextField=_promptUserResponseTextField;
@property(retain, nonatomic) id <AlertDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void)fadeOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)optionalButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)secondaryButtonPressed:(id)arg1;
- (void)reject;
- (void)accept;
- (void)cancel;
- (void)updateConstraints;
- (void)layout;
- (void)_removeViewFromSuperviewAndSetUpKeyView:(id)arg1;
- (void)setUpUsingConfiguration:(id)arg1;
- (void)_removePromptTextField;
- (void)_dialogMessageTextViewFrameDidChangeNotification:(id)arg1;
- (void)_setDialogMessage:(id)arg1;
- (void)_setDialogTitle:(id)arg1;
- (id)_originStringForPrinting;
- (void)drawPageBorderWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

