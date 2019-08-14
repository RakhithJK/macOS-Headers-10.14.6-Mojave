//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "WebFrameLoadDelegate-Protocol.h"
#import "WebPolicyDelegate-Protocol.h"
#import "WebUIDelegate-Protocol.h"

@class FBAFileMatcher, NSLayoutConstraint, NSString, WebView;

@interface FBARequirementInstructionsWindowController : NSWindowController <WebUIDelegate, WebFrameLoadDelegate, WebPolicyDelegate>
{
    BOOL _gathersAutomatially;
    BOOL _finishedLoading;
    FBAFileMatcher *_requirement;
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    WebView *_webView;
}

@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property __weak WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSLayoutConstraint *height; // @synthesize height=_height;
@property(retain, nonatomic) NSLayoutConstraint *width; // @synthesize width=_width;
@property(nonatomic) BOOL gathersAutomatially; // @synthesize gathersAutomatially=_gathersAutomatially;
@property(retain, nonatomic) FBAFileMatcher *requirement; // @synthesize requirement=_requirement;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)gatherInfo;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

