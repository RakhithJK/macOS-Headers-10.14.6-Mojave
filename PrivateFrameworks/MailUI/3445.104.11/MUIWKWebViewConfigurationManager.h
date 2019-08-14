//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailUI/WKScriptMessageHandler-Protocol.h>

@class NSString, WKWebViewConfiguration, _WKUserStyleSheet;

@interface MUIWKWebViewConfigurationManager : NSObject <WKScriptMessageHandler>
{
    WKWebViewConfiguration *_configuration;
    _WKUserStyleSheet *_userStyleSheet;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *effectiveUserStyle;
- (id)_userScripts;
@property(readonly, nonatomic) WKWebViewConfiguration *configuration;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)_updateStyleSheets;
- (void)_updateFontPreferences;
- (void)_updateDebuggingPreferences;
- (void)handleAccessibilityDisplayChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

