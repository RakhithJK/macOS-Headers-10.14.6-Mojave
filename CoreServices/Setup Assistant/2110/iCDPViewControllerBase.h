//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

#import "NSTextViewDelegate-Protocol.h"

@class NSString;

@interface iCDPViewControllerBase : iCloudViewControllerBase <NSTextViewDelegate>
{
}

- (id)nextViewIdentifier;
- (void)showGenericAlertWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 defaultButtonIndex:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)showLoginAlertWithTitle:(id)arg1 message:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)stringStatusFromEnum:(long long)arg1;
- (void)failiCloudLoginWithTitle:(id)arg1 message:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)proceedWithCoreCDPStatus:(long long)arg1 devices:(id)arg2 statusInfo:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)proceedWithCoreCDPStatus:(long long)arg1 devices:(id)arg2 statusInfo:(id)arg3;
- (void)handleUserAttemptedQuit:(CDUnknownBlockType)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

