//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class JSContext, MMWebKitController, NSError, NSMutableURLRequest, NSURLResponse, NSWindow, WebFrame, WebView;

@protocol MMWebKitControllerDelegate <NSObject>

@optional
- (NSWindow *)mmWebKitControllerWindow;
- (void)mmWebKitControllerWillSendRequest:(MMWebKitController *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (void)mmWebKitControllerDidReceiveResponse:(MMWebKitController *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)mmWebKitControllerDidFinishLoading:(MMWebKitController *)arg1;
- (void)mmWebKitControllerDidFailLoading:(MMWebKitController *)arg1 error:(NSError *)arg2;
- (void)mmWebKitControllerDidSucceed:(MMWebKitController *)arg1;
- (void)mmWebKitControllerDidCancel:(MMWebKitController *)arg1;
- (void)mmWebKitControllerConfigureForFrame:(WebFrame *)arg1;
- (void)mmWebKitControllerDidCreateJavaScriptContext:(JSContext *)arg1 forFrame:(WebFrame *)arg2;
- (void)mmWebView:(WebView *)arg1 setFrame:(struct CGRect)arg2;
@end

