//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSVB_ViewServiceXPCMachSendRight;

@protocol NSVB_ViewService_FencingControlInterface

@optional
- (void)__forgetFencingMessages;
- (void)__endFencingMessagesForSendRight:(NSVB_ViewServiceXPCMachSendRight *)arg1;
- (void)__beginFencingMessagesWithSendRight:(NSVB_ViewServiceXPCMachSendRight *)arg1;
@end

