//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSError, NewsTransparencyViewController;

@protocol NewsTransparencyViewControllerDelegate <NSObject>

@optional
- (void)newsTransparencyViewControllerDidRenderView:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLinkOut:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewController:(NewsTransparencyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)newsTransparencyViewControllerDidDismiss:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLoad:(NewsTransparencyViewController *)arg1;
@end

