//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebAllowDenyPolicyListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> _geolocation;
    struct RetainPtr<WebView *> _webView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

