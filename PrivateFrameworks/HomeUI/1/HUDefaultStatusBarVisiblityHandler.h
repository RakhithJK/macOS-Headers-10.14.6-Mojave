//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUStatusBarVisibilityHandling-Protocol.h>

@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>
{
}

- (id)_statusBarAnimationParametersForAnimationSettings:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimationSettings:(id)arg2;
@property(readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

