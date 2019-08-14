//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@protocol CNDonationAccountLogger, CNDonationAgentLogger, CNDonationAnalyticsLogger, CNDonationExtensionLogger, CNDonationPreferencesLogger, CNDonationToolLogger;

@protocol CNDonationLoggerProvider <NSObject>
@property(readonly) id <CNDonationAnalyticsLogger> analyticsLogger;
@property(readonly) id <CNDonationPreferencesLogger> preferencesLogger;
@property(readonly) id <CNDonationAccountLogger> accountLogger;
@property(readonly) id <CNDonationToolLogger> toolLogger;
@property(readonly) id <CNDonationExtensionLogger> extensionLogger;
@property(readonly) id <CNDonationAgentLogger> agentLogger;
@end

