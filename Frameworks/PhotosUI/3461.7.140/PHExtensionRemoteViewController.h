//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <PhotosUI/PHExtensionRemoteViewControllerProtocol-Protocol.h>

@class NSExtension, NSString, NSUUID, PHExtensionHostViewPreferredSizes, PUExtensionHostContext;
@protocol PHExtensionRemoteViewControllerDelegate, PUExtensionVendor;

@interface PHExtensionRemoteViewController : NSRemoteViewController <PHExtensionRemoteViewControllerProtocol>
{
    id <PHExtensionRemoteViewControllerDelegate> _delegate;
    NSExtension *_extension;
    NSUUID *_sessionUUID;
    PHExtensionHostViewPreferredSizes *_preferredSizes;
}

+ (id)serviceViewControllerClassName;
+ (void)requestViewControllerFromExtension:(id)arg1 sizeHint:(struct CGSize)arg2 connectionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) PHExtensionHostViewPreferredSizes *preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <PHExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)preferredMaximumSize;
- (struct CGSize)preferredMinimumSize;
- (void)updatePreferredSizes:(id)arg1;
- (void)updateViewConstraints;
- (id)exportedObject;
- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)serviceViewControllerInterface;
- (void)disconnect;
- (id)vendorProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <PUExtensionVendor> vendorProxy;
@property(readonly, nonatomic) PUExtensionHostContext *hostContext;
- (void)connectToExtension:(id)arg1 withSessionID:(id)arg2 sizeHint:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

