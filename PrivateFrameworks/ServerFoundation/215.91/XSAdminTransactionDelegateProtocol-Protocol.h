//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSError, XSAdminTransaction;

@protocol XSAdminTransactionDelegateProtocol
- (void)gotServerError:(id)arg1 forTransaction:(XSAdminTransaction *)arg2;
- (void)gotResponseFromTransaction:(XSAdminTransaction *)arg1;

@optional
- (BOOL)adminTransaction:(XSAdminTransaction *)arg1 didReceiveCertificateError:(NSError *)arg2;
@end
