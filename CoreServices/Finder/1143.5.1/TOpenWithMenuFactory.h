//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TOpenWithMenuFactory : NSObject
{
    struct TFENodeVector _documentNodes;
    struct TFENode _currentAppNode;
    _Bool _hasFetchedCurrentApp;
    struct TFENode _defaultAppNode;
    _Bool _hasFetchedDefaultApp;
    struct TFENodeVector _openerAppNodes;
    _Bool _hasFetchedOpenerAppsNodes;
    struct map<TFENode, TOpenWithMenuData, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TOpenWithMenuData>>> _menuDataCache;
    unsigned long long _generationCount;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _openWithMenuQueue;
    struct TSpinLock _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createMenuItemForApp:(const struct TFENode *)arg1 command:(SEL)arg2 isDefaultApp:(_Bool)arg3;
- (_Bool)addApp:(const struct TFENode *)arg1 toMenu:(id)arg2 command:(SEL)arg3 isDefaultApp:(_Bool)arg4 addSeparator:(_Bool)arg5;
- (_Bool)addApps:(const struct TFENodeVector *)arg1 toMenu:(id)arg2 command:(SEL)arg3 defaultApp:(const struct TFENode *)arg4 addSeparator:(_Bool)arg5;
- (void)addNoneMenuItem:(id)arg1;
- (void)_fetchMenuDataForNodes:(const struct TFENodeVector *)arg1;
- (void)_getOrFetchOpenerAppNodesOnQueue:(struct TFENodeVector *)arg1 currentGenCount:(unsigned long long)arg2;
- (void)_getOrFetchDefaultAppNodeOnQueue:(struct TFENode *)arg1 currentGenCount:(unsigned long long)arg2;
- (void)_getOrFetchCurrentAppNodeOnQueue:(struct TFENode *)arg1 currentGenCount:(unsigned long long)arg2;
- (_Bool)getOrFetchAppNodes:(const function_e1a188ab *)arg1;
- (_Bool)getOpenerAppNodes:(const function_4670099d *)arg1;
- (_Bool)getDefaultAppNode:(const function_0beffb83 *)arg1;
- (_Bool)getCurrentAppNode:(const function_0beffb83 *)arg1;
- (_Bool)offerAppStore;
- (void)_buildOpenWithMenuOnMainThread:(id)arg1 command:(SEL)arg2 currentAppNode:(const struct TFENode *)arg3 defaultAppNode:(const struct TFENode *)arg4 openerAppsNodes:(const struct TFENodeVector *)arg5;
- (void)buildOpenWithMenu:(id)arg1 command:(SEL)arg2;
- (const struct TFENodeVector *)documentNodes;
- (_Bool)_shouldStopWhileLocked:(unsigned long long)arg1;
- (_Bool)shouldStop:(unsigned long long)arg1;
- (void)stopWhileLocked;
- (void)stop;
- (void)reset;
- (id)initWithNodes:(const struct TFENodeVector *)arg1;
- (id)init;

@end

