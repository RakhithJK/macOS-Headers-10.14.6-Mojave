//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABPreferencesModule.h"

@class ABActionAutovalidator, ABAddressBook, CNContactCardViewController, NSPopUpButton, NSView;

@interface ABTemplatePreferencesModule : ABPreferencesModule
{
    NSPopUpButton *mAddFieldButton;
    NSView *_templateContainer;
    ABAddressBook *_addressBook;
    ABActionAutovalidator *_autovalidator;
    CNContactCardViewController *_cardViewController;
}

- (BOOL)canAddSocialProfileWithMenuItem:(id)arg1;
- (void)addSocialProfile:(id)arg1;
- (BOOL)canAddTwitterWithMenuItem:(id)arg1;
- (void)addTwitter:(id)arg1;
- (BOOL)_configureMenuItem:(id)arg1 withState:(CDUnknownBlockType)arg2;
- (void)_addNextSocialProfile;
- (BOOL)validateMenuItem:(id)arg1;
- (void)help:(id)arg1;
- (void)dealloc;
- (BOOL)isResizable;
- (void)defaultsChanged:(id)arg1;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
