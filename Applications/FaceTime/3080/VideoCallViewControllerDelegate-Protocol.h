//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TUCall, TUDialRequest, VideoCallViewController;

@protocol VideoCallViewControllerDelegate <NSObject>
- (void)videoCallViewControllerToggleFullScreen:(VideoCallViewController *)arg1;
- (void)videoCallViewController:(VideoCallViewController *)arg1 wantsVideoDidChange:(BOOL)arg2;
- (void)videoCallViewController:(VideoCallViewController *)arg1 canceledCall:(TUCall *)arg2 dialRequest:(TUDialRequest *)arg3;
- (void)videoCallViewControllerShowSidebar:(VideoCallViewController *)arg1;
- (void)videoCallViewController:(VideoCallViewController *)arg1 initiatedCall:(TUCall *)arg2;
@end
