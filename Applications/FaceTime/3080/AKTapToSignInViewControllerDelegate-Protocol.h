//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AKSignInViewControllerDelegate-Protocol.h"

@class AKTapToSignInViewController, NSDictionary, NSError;

@protocol AKTapToSignInViewControllerDelegate <AKSignInViewControllerDelegate>
- (void)tapToSignInViewController:(AKTapToSignInViewController *)arg1 didAuthenticateWithResults:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

