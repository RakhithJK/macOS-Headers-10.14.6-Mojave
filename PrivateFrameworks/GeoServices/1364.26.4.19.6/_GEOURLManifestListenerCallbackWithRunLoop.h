//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOURLManifestListenerCallback-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallbackWithRunLoop : NSObject <_GEOURLManifestListenerCallback>
{
    CDUnknownBlockType _handler;
    struct __CFRunLoop *_runLoop;
}

- (void).cxx_destruct;
- (void)performHandler:(BOOL)arg1;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

