//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCInterfaceInfo : NSObject
{
    unsigned long long _remoteVersion;
    struct os_unfair_lock_s _knownSelectorsLock;
    struct __CFDictionary *_knownSelectors;
    struct __CFDictionary *_methodInfo;
    Class _xpcDOSubclass;
}

@property unsigned long long remoteVersion; // @synthesize remoteVersion=_remoteVersion;
- (void)dealloc;
- (id)init;

@end

