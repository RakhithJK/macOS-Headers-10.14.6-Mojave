//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class AXIDCMessage, AXIDCRemoteController;

@protocol AXIDCControllerBrowserDelegateProtocol <NSObject>
- (void)availableRemoteControllersDidChange;

@optional
- (void)controller:(AXIDCRemoteController *)arg1 didFinishSendingData:(AXIDCMessage *)arg2;
- (void)controller:(AXIDCRemoteController *)arg1 didReceiveData:(AXIDCMessage *)arg2;
@end

