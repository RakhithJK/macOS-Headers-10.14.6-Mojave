//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationExtensionLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void).cxx_destruct;
- (void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(id)arg2;
- (void)didRedonateValuesWithReason:(unsigned long long)arg1;
- (void)willRedonateValuesWithReason:(unsigned long long)arg1;
- (void)couldNotRenewDonation:(id)arg1 error:(id)arg2;
- (void)didExpireDonation:(id)arg1 withError:(id)arg2;
- (void)didRenewDonation:(id)arg1 untilDate:(id)arg2;
- (void)willRenewDonation:(id)arg1;
- (void)couldNotLoadDonorExtensionForIdentifier:(id)arg1 error:(id)arg2;
- (void)loadedDonorExtension:(id)arg1 forIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

