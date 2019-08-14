//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPluginHostViewController.h"

#import "PUProjectExtensionHostContextDelegate-Protocol.h"

@class IPXProjectExtensionController, NSOperationQueue, NSString;
@protocol IPXProjectExtensionHostViewControllerDelegate;

@interface IPXProjectExtensionHostViewController : IPXPluginHostViewController <PUProjectExtensionHostContextDelegate>
{
    id <IPXProjectExtensionHostViewControllerDelegate> _delegate;
    IPXProjectExtensionController *_projectExtensionController;
    NSOperationQueue *_projectInfoUpdateQueue;
    NSString *_projectLocalIdentifier;
}

@property(retain, nonatomic) NSString *projectLocalIdentifier; // @synthesize projectLocalIdentifier=_projectLocalIdentifier;
@property(retain, nonatomic) NSOperationQueue *projectInfoUpdateQueue; // @synthesize projectInfoUpdateQueue=_projectInfoUpdateQueue;
@property(retain, nonatomic) IPXProjectExtensionController *projectExtensionController; // @synthesize projectExtensionController=_projectExtensionController;
@property(nonatomic) __weak id <IPXProjectExtensionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)projectExtensionHostContext:(id)arg1 performDragOperationWithPasteboard:(id)arg2 sequenceNumber:(long long)arg3;
- (id)projectExtensionHostContext:(id)arg1 updateProjectInfo:(id)arg2 forProject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)projectExtensionHostContext:(id)arg1 showEditorForAssetWithLocalIdentifier:(id)arg2;
- (void)doneWithProjectSession;
- (void)_showUnexpectedTerminationAlert;
- (void)remoteServiceDidTerminateWithError:(id)arg1;
- (id)_projectExtensionVendorProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)startProjectEditingWithExtensionController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSupportedProjectTypeClientForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTCCAccessForPhotos:(CDUnknownBlockType)arg1;
- (void)_setupRemoteViewController:(id)arg1;
- (void)loadRemoteViewControllerWithSizeHint:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFirstResponder;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithExtensionIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
