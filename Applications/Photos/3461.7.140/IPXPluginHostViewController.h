//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "PHExtensionRemoteViewControllerDelegate-Protocol.h"

@class NSExtension, NSLayoutConstraint, NSString, NSView, PHExtensionRemoteViewController;

@interface IPXPluginHostViewController : IPXViewController <PHExtensionRemoteViewControllerDelegate>
{
    NSExtension *_extension;
    PHExtensionRemoteViewController *_remoteViewController;
    NSLayoutConstraint *_topLayoutGuideConstraint;
    NSView *_containerView;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_maximumWidthConstraint;
    NSLayoutConstraint *_maximumHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *maximumHeightConstraint; // @synthesize maximumHeightConstraint=_maximumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // @synthesize maximumWidthConstraint=_maximumWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSLayoutConstraint *topLayoutGuideConstraint; // @synthesize topLayoutGuideConstraint=_topLayoutGuideConstraint;
@property(readonly, nonatomic) PHExtensionRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void).cxx_destruct;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (id)extensionVendorProxy;
- (id)hostContext;
- (void)_setupRemoteViewController:(id)arg1;
- (void)remoteServiceDidTerminate;
- (void)disconnect;
- (void)loadRemoteViewControllerWithSizeHint:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillLayout;
@property(readonly, nonatomic) NSExtension *extension;
- (id)initWithNibName:(id)arg1 extensionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

