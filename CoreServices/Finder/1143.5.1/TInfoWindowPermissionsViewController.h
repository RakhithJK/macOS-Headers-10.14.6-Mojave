//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TInfoWindowViewController.h"

@class TPrivsAuthButtonController, TPrivsIgnoreOwnershipCheckboxController, TPrivsPlusMinusActionButtonController, TPrivsSummaryTextController, TPrivsTableViewMainController;

@interface TInfoWindowPermissionsViewController : TInfoWindowViewController
{
    TPrivsSummaryTextController *_youCanSummaryTextController;
    TPrivsTableViewMainController *_tableViewController;
    TPrivsPlusMinusActionButtonController *_plusMinusActionButtonController;
    TPrivsAuthButtonController *_authButtonController;
    TPrivsIgnoreOwnershipCheckboxController *_ignoreOwnershipCheckboxController;
}

+ (id)controller;
- (unsigned int)scriptingID;
- (void)targetNodesChanging;
- (void)loadValueControllers;
- (id)expandedPrefKey;

@end

