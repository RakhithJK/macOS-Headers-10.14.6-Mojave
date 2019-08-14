//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArrayController, NSMenuItem, NSPopUpButton, SIUUserDefaults;

@interface SIUGeneralPrefsViewController : NSViewController
{
    NSMenuItem *_addlSourceDirectoryMenuItem;
    NSMenuItem *_workflowDirectoryMenuItem;
    SIUUserDefaults *_defaults;
    NSArrayController *_failureSoundController;
    NSArrayController *_successSoundController;
    NSPopUpButton *_addlSourcePopUpButton;
    NSPopUpButton *_directoryPopUpButton;
    NSPopUpButton *_logLevelPopUpButton;
}

@property(nonatomic) NSPopUpButton *logLevelPopUpButton; // @synthesize logLevelPopUpButton=_logLevelPopUpButton;
@property(nonatomic) NSPopUpButton *directoryPopUpButton; // @synthesize directoryPopUpButton=_directoryPopUpButton;
@property(nonatomic) NSPopUpButton *addlSourcePopUpButton; // @synthesize addlSourcePopUpButton=_addlSourcePopUpButton;
@property(retain, nonatomic) NSArrayController *successSoundController; // @synthesize successSoundController=_successSoundController;
@property(retain, nonatomic) NSArrayController *failureSoundController; // @synthesize failureSoundController=_failureSoundController;
@property(nonatomic) SIUUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)viewDidLoad;
- (void)chooseSourcesDirectory:(id)arg1;
- (void)chooseNewWorkflowDirectory:(id)arg1;
- (void)logLevelSelected:(id)arg1;
- (void)changeCompletionSound:(id)arg1;
- (void)dealloc;

@end

