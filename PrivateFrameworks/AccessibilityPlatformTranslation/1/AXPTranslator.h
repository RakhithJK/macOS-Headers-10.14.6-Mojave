//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AXPTranslationDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate, AXPTranslationTokenDelegateHelper;

@interface AXPTranslator : NSObject
{
    BOOL _accessibilityEnabled;
    BOOL _supportsDelegateTokens;
    id <AXPTranslationDelegateHelper> _bridgeDelegate;
    id <AXPTranslationTokenDelegateHelper> _bridgeTokenDelegate;
    id <AXPTranslationRuntimeHelper> _runtimeDelegate;
    id <AXPTranslationSystemAppDelegate> _systemAppDelegate;
    NSMutableDictionary *_fakeElementCache;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL supportsDelegateTokens; // @synthesize supportsDelegateTokens=_supportsDelegateTokens;
@property(retain, nonatomic) NSMutableDictionary *fakeElementCache; // @synthesize fakeElementCache=_fakeElementCache;
@property(nonatomic) __weak id <AXPTranslationSystemAppDelegate> systemAppDelegate; // @synthesize systemAppDelegate=_systemAppDelegate;
@property(nonatomic) __weak id <AXPTranslationRuntimeHelper> runtimeDelegate; // @synthesize runtimeDelegate=_runtimeDelegate;
@property(nonatomic) __weak id <AXPTranslationTokenDelegateHelper> bridgeTokenDelegate; // @synthesize bridgeTokenDelegate=_bridgeTokenDelegate;
@property(nonatomic) __weak id <AXPTranslationDelegateHelper> bridgeDelegate; // @synthesize bridgeDelegate=_bridgeDelegate;
@property(nonatomic) BOOL accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
- (void).cxx_destruct;
- (id)platformElementFromTranslation:(id)arg1;
- (void)initializeAXRuntimeForSystemAppServer;
- (void)enableAccessibility;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)processSetAttribute:(id)arg1;
- (id)processActionRequest:(id)arg1;
- (id)processMultipleAttributeRequest:(id)arg1;
- (id)macPlatformElementFromTranslation:(id)arg1;
- (id)objectAtPoint:(struct CGPoint)arg1 displayId:(unsigned int)arg2 bridgeDelegateToken:(id)arg3;
- (id)processTranslatorRequest:(id)arg1;
- (id)platformTranslator;
- (id)sendTranslatorRequest:(id)arg1;
- (void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2;
- (void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)frontmostApplicationWithDisplayId:(unsigned int)arg1 bridgeDelegateToken:(id)arg2;
- (id)translationApplicationObjectForPid:(int)arg1;
- (id)init;

@end

