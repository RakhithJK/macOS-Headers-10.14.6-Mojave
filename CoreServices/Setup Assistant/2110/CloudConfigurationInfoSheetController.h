//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddySheetController.h"

@class CloudConfigurationWelcomeController;

@interface CloudConfigurationInfoSheetController : MacBuddySheetController
{
    CloudConfigurationWelcomeController *_controller;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) CloudConfigurationWelcomeController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)okPressed:(id)arg1;
- (id)orgPhone;
- (id)orgAddress;
- (id)orgDepartment;
- (id)orgName;
- (id)infoText;
- (id)orgInfo;
- (void)showForWindow:(id)arg1 terminationHandler:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
- (id)manager;
- (id)initWithWelcomeController:(id)arg1;

@end

