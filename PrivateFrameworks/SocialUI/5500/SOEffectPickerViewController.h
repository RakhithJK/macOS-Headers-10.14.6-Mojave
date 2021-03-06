//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SocialUI/SOEffectDescriptorDelegate-Protocol.h>

@class NSButton, NSMutableArray, NSString, NSTextField, NSView, SOEffectDescriptor;
@protocol SOEffectPickerViewControllerDelegate;

@interface SOEffectPickerViewController : NSViewController <SOEffectDescriptorDelegate>
{
    NSMutableArray *_descriptors;
    NSView *_verticalPill;
    NSTextField *_placeholderBubble;
    NSButton *_cancelButton;
    id <SOEffectPickerViewControllerDelegate> _delegate;
    SOEffectDescriptor *_selectedDescriptor;
}

@property(retain, nonatomic) SOEffectDescriptor *selectedDescriptor; // @synthesize selectedDescriptor=_selectedDescriptor;
@property(nonatomic) __weak id <SOEffectPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateTextForDarkBackground:(BOOL)arg1;
- (void)userCancelledPicker:(id)arg1;
- (void)effectDescriptorWillSend:(id)arg1;
- (void)effectDescriptorWillActivate:(id)arg1;
- (void)showPlaceholderMessageForEffect:(id)arg1 withDarkBackground:(BOOL)arg2;
- (void)viewWillAppear;
- (void)updateButtons:(BOOL)arg1;
- (void)viewWillLayout;
- (void)addEffectWithDisplayName:(id)arg1 effectIdentifier:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

