//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIViewController;

@protocol CNPresenterDelegate <NSObject>
@property(readonly) BOOL isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (void)sender:(id)arg1 dismissViewController:(UIViewController *)arg2;
- (void)sender:(id)arg1 presentViewController:(UIViewController *)arg2;
@end

