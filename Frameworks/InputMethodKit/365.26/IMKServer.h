//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/IMKServerProxy-Protocol.h>

@class IMKServerPrivate;

@interface IMKServer : NSObject <IMKServerProxy>
{
    IMKServerPrivate *_private;
}

+ (id)inputDelegateClassNameFor:(id)arg1;
+ (id)inputControllerClassNameFor:(id)arg1;
+ (id)connectionNameFor:(id)arg1;
+ (id)_clientWrapperForXPCConn:(id)arg1;
+ (id)_clientWrapperForDOProxy:(id)arg1;
+ (id)imkServerSingleton;
- (id)keyBindingManager;
- (void)setEventHandlingStatus:(int)arg1;
- (id)keyBindingState;
- (void)ironwoodPlaceholderWasInvalidated_Common:(id)arg1 clientWrapper:(id)arg2 controller:(id)arg3;
- (void)ironwoodPlaceholderWasInvalidated:(id)arg1 client:(id)arg2;
- (void)ironwoodTextWasCorrected_Common:(id)arg1 clientWrapper:(id)arg2 controller:(id)arg3;
- (void)ironwoodTextWasCorrected:(id)arg1 client:(id)arg2;
- (void)sendInputSessionSessAction_Common:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(id)arg3 clientWrapper:(id)arg4 controller:(id)arg5;
- (void)sendInputSessionSessAction:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(id)arg3 client:(id)arg4;
- (void)sendInputSessionSessAction_Common:(unsigned int)arg1 clientWrapper:(id)arg2 controller:(id)arg3;
- (void)sendInputSessionSessAction:(unsigned int)arg1 client:(id)arg2;
- (void)invalidateClientGeometry_CommonWithController:(id)arg1;
- (void)invalidateClientGeometry:(id)arg1;
- (void)hidePalettes_CommonWithController:(id)arg1;
- (void)hidePalettes:(id)arg1;
- (void)commitComposition_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (void)commitComposition:(id)arg1;
- (BOOL)handleEvent_Common:(id)arg1 characterIndex:(unsigned long long)arg2 edge:(unsigned long long)arg3 clientWrapper:(id)arg4 controller:(id)arg5;
- (BOOL)handleEvent:(bycopy id)arg1 characterIndex:(unsigned long long)arg2 edge:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)_insertTextForEvent:(id)arg1;
- (void)_setCurrentIMKEvent:(id)arg1;
- (id)_currentIMKEvent;
- (BOOL)lastKeyEventWasDeadKey;
- (id)_attributedStringFromEventPack:(id)arg1;
- (id)modes_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (id)modes:(id)arg1;
- (id)_keys;
- (void)clientProxy:(id)arg1;
- (unsigned long long)recognizedEvents_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (unsigned long long)recognizedEvents:(id)arg1;
- (void)doCommandBySelector_Common:(SEL)arg1 commandDictionary:(id)arg2 clientWrapper:(id)arg3 controller:(id)arg4;
- (void)doCommandBySelector:(SEL)arg1 commandDictionary:(id)arg2 client:(id)arg3;
- (id)_searchSubMenus:(id)arg1 forTitle:(id)arg2;
- (BOOL)didCommandBySelector_Common:(SEL)arg1 clientWrapper:(id)arg2 controller:(id)arg3;
- (BOOL)didCommandBySelector:(SEL)arg1 client:(id)arg2;
- (BOOL)didCommandBySelector:(SEL)arg1 withObject:(id)arg2;
- (id)menusDictionary_CommonWithController:(id)arg1;
- (id)menusDictionary:(id)arg1;
- (id)_copySynchronizedActions:(id)arg1 withMenuItems:(id)arg2;
- (id)_actionsFromMenu:(id)arg1;
- (BOOL)_isPalette;
- (id)_getModeDictionary;
- (void)setValue_Common:(id)arg1 forTag:(unsigned long long)arg2 clientWrapper:(id)arg3 controller:(id)arg4;
- (void)setValue:(id)arg1 forTag:(unsigned long long)arg2 client:(id)arg3;
- (id)valueForTag_Common:(unsigned long long)arg1 clientWrapper:(id)arg2 controller:(id)arg3;
- (id)valueForTag:(unsigned long long)arg1 client:(id)arg2;
- (void)sessionFinished_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (void)sessionFinished:(id)arg1;
- (void)activateServer_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (void)activateServer:(id)arg1;
- (void)deactivateServer_CommonWithClientWrapper:(id)arg1 controller:(id)arg2;
- (void)deactivateServer:(id)arg1;
- (void)releasePAHController:(id)arg1;
- (void)setFunctionRowItemViewServiceXPCEndpoint:(id)arg1;
- (id)functionRowItemViewServiceXPCEndpoint;
- (id)IMBundleIdentifier;
- (void)_forgetValidEventsInClient:(id)arg1;
- (void)_rememberValidEvent:(id)arg1 fromEventPack:(id)arg2 inClient:(id)arg3;
- (void)_rememberKeyboardType:(id)arg1 inClient:(id)arg2;
- (id)_IMKCandidates;
- (void)_setIMKCandidates:(id)arg1;
- (id)_preferences;
- (id)_currentPresentingController;
- (id)_currentController;
- (void)_setCurrentController:(id)arg1;
- (void)_setPresentingClientWrapper:(id)arg1;
- (id)_presentingClientWrapper;
- (void)_setCurrentClientWrapper:(id)arg1;
- (id)_currentClientWrapper;
- (id)_currentClient;
- (id)_menuActions:(id)arg1;
- (void)_setEvents:(id)arg1 forController:(id)arg2;
- (id)_eventsForController:(id)arg1;
- (void)_setMouseMovedState:(BOOL)arg1 forClient:(id)arg2 controller:(id)arg3;
- (id)_eventRefToNSEvent:(id)arg1 repeat:(BOOL)arg2;
- (id)_getStringForKeyCode:(unsigned int *)arg1 andModifiers:(unsigned long long *)arg2 unmodifiedString:(id *)arg3 fromEventPackage:(id)arg4;
- (struct CGPoint)_breakDownMouseEvent:(id)arg1 theModifiers:(unsigned long long *)arg2;
- (void)_handleText:(id)arg1;
- (void)_handleCommand:(SEL)arg1;
- (id)_keyBindings;
- (id)bundle;
- (id)higherRunLoopInvocation;
- (void)popRunLoopInvocation;
- (void)pushRunLoopInvocation:(id)arg1;
- (id)tailRunLoopInvocation;
- (id)_controllerForClientProxy:(id)arg1 withDictKey:(id)arg2;
- (id)_controllerForClientDOProxy:(id)arg1;
- (id)_controllerForClientXPCConn:(id)arg1;
- (id)_mapClientXPCConnToController:(id)arg1;
- (id)_mapClientDOProxyToController:(id)arg1;
- (void)_sendKey:(id)arg1;
- (void)_sendKeyToView:(unsigned short)arg1;
- (BOOL)_isValidKeyForCandidateView:(id)arg1;
- (unsigned short)_remapKeyEventForCandidateKeylayout:(unsigned short)arg1;
- (void)_hideWindow;
- (BOOL)_serverGetsFirstShotAtWindowEvents;
- (BOOL)_windowIsOpen;
- (BOOL)_isMenuKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
- (void)_setCachedMenu:(id)arg1;
- (id)keyboardService;
- (void)dealloc;
- (id)initWithName:(id)arg1 controllerClass:(Class)arg2 delegateClass:(Class)arg3;
- (BOOL)paletteWillTerminate;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)endpointCheckinRequestedFromLaunchAgent:(id)arg1;
- (void)registerConnectionAfterDidFinishLaunch:(id)arg1;
- (void)performDelayedEndpointCheckin:(id)arg1;
- (void)registerIMKXPCEndpointWithLaunchAgent;
- (BOOL)_createConnection;
- (oneway void)ironwoodPlaceholderWasInvalidated:(id)arg1;
- (oneway void)ironwoodTextWasCorrected:(id)arg1;
- (oneway void)sendInputSessionSessAction:(unsigned int)arg1 timestamp:(double)arg2 withInfo:(id)arg3;
- (oneway void)sendInputSessionSessAction:(unsigned int)arg1;
- (oneway void)invalidateClientGeometry;
- (void)recognizedEventsWithReply:(CDUnknownBlockType)arg1;
- (void)recognizedEventsWithClientAsync:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)doCommandBySelector:(SEL)arg1 commandDictionary:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)doCommandBySelector:(SEL)arg1 commandDictionary:(id)arg2;
- (void)didCommandBySelector:(SEL)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)hidePalettes;
- (void)commitCompositionWithReply:(CDUnknownBlockType)arg1;
- (oneway void)commitCompositionWithDiscardMarkedTextFlag:(BOOL)arg1;
- (oneway void)commitComposition;
- (void)handleEvent:(bycopy id)arg1 characterIndex:(unsigned long long)arg2 edge:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)handleEvent:(bycopy id)arg1 characterIndex:(unsigned long long)arg2 edge:(unsigned long long)arg3 asyncClient:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)menusDictionaryWithReply:(CDUnknownBlockType)arg1;
- (void)menusDictionaryWithClientAsync:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)modesWithReply:(CDUnknownBlockType)arg1;
- (void)modesWithClientAsync:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forTag:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setValue:(id)arg1 forTag:(unsigned long long)arg2;
- (void)valueForTag:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)valueForTag:(unsigned long long)arg1 asyncClient:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)sessionFinished;
- (void)deactivateServerWithReply:(CDUnknownBlockType)arg1;
- (oneway void)deactivateServer;
- (void)activateServerWithReply:(CDUnknownBlockType)arg1;
- (oneway void)activateServer;
- (double)replyTimeout;
- (void)replyWaitCount_decrementWithLocking;
- (void)replyWaitCount_incrementWithLocking;
- (void)replyWaitCount_unlock;
- (void)replyWaitCount_lockDecrement;
- (void)replyWaitCount_lockIncrement;
- (int)replyWaitCount_testWithLocking;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidateConnectionsAsNecessary:(id)arg1;

@end

