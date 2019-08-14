//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebView;

@interface _WKInspector : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebInspectorProxy> _inspector;
}

@property(readonly) struct Object *_apiObject;
- (void)printErrorToConsole:(id)arg1;
- (void)toggleElementSelection;
- (void)togglePageProfiling;
- (void)showTimelines;
- (void)detach;
- (void)attach;
- (void)showMainResourceForFrame:(id)arg1;
- (void)showResources;
- (void)showConsole;
- (void)close;
- (void)hide;
- (void)show;
- (void)connect;
@property(readonly, nonatomic) BOOL isElementSelectionActive;
@property(readonly, nonatomic) BOOL isProfilingPage;
@property(readonly, nonatomic) BOOL isFront;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) WKWebView *webView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

