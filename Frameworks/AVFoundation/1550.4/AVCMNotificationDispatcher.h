//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCallbackContextRegistry, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject
{
    struct opaqueCMNotificationCenter *_cmNotificationCenter;
    AVCallbackContextRegistry *_callbackContextRegistry;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
}

+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;
+ (void)initialize;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;
- (void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(CDUnknownFunctionPointerType)arg3 name:(struct __CFString *)arg4 object:(const void *)arg5;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4 flags:(unsigned int)arg5;
@property(readonly, nonatomic) struct opaqueCMNotificationCenter *CMNotificationCenter;
@property(readonly, nonatomic, getter=_callbackContextRegistry) AVCallbackContextRegistry *callbackContextRegistry;
- (void)finalize;
- (void)dealloc;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;
- (id)init;

@end

