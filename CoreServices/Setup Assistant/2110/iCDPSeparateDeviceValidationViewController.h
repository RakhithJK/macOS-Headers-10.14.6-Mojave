//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCDPViewControllerBase.h"

#import "AKiCDPValidationDelegate-Protocol.h"

@class AKiCDPDeviceValidationFlowViewController, NSArray, NSString;

@interface iCDPSeparateDeviceValidationViewController : iCDPViewControllerBase <AKiCDPValidationDelegate>
{
    AKiCDPDeviceValidationFlowViewController *_flowController;
}

@property(retain) AKiCDPDeviceValidationFlowViewController *flowController; // @synthesize flowController=_flowController;
- (void).cxx_destruct;
@property(readonly) BOOL approvalOnlyMode;
@property(readonly) BOOL offerServerRecovery;
@property(readonly) BOOL offerToUseRecoveryKey;
@property(readonly) BOOL offerRemoteApproval;
@property(readonly) NSArray *devices;
- (void)userSkipped;
- (void)triggerEscapeHatch;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDevice;
- (void)validateDevice:(id)arg1 withSecret:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)init;

// Remaining properties
@property(readonly) BOOL allowCancel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
