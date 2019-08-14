//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/CNContactViewControllerDelegate-Protocol.h>
#import <Silex/SXContactsPresenter-Protocol.h>

@class CNContactStore, NSString, UIViewController;
@protocol SXViewControllerPresenting;

@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter>
{
    id <SXViewControllerPresenting> _viewControllerPresenting;
    CNContactStore *_contactStore;
    UIViewController *_presentedViewController;
}

@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dismissPresentedViewController;
- (void)presentContact:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

