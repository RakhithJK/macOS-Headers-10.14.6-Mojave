//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class MMWebKitViewController, NSError, NSURLResponse;

@protocol MMWebKitViewControllerDelegate <NSObject>

@optional
- (void)mmWebKitViewControllerDidReceiveResponse:(MMWebKitViewController *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)mmWebKitViewControllerDidDismiss:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(MMWebKitViewController *)arg1 error:(NSError *)arg2;
- (void)mmWebKitViewControllerDidSucceed:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidCancel:(MMWebKitViewController *)arg1;
@end

