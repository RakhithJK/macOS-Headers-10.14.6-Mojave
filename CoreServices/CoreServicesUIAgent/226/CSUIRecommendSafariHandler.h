//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CSUIMessageHandler.h"

@interface CSUIRecommendSafariHandler : CSUIMessageHandler
{
}

+ (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
+ (BOOL)canBeUsedBySandboxedApplications;
+ (id)appleEventDescriptorForRunningApplication:(id)arg1;
+ (void)advanceToNextInterval;
+ (void)resetIfOSHasBeenUpgraded;
+ (BOOL)areRecommendationsEnabled;
- (void)handleMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyIcon;
- (id)copyNotification;
- (id)dateOfNextNotification;
- (BOOL)isSafariTheDefaultBrowser;
- (BOOL)hasSafariBeenLaunched;
- (BOOL)shouldShowNotification;

@end

