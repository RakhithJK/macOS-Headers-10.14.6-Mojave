//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSStreamDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CFStreamDelegate : NSObject <NSStreamDelegate>
{
    unsigned long long _flags;
    CDStruct_4210025a _client;
    union {
        CDUnknownFunctionPointerType _rcb;
        CDUnknownFunctionPointerType _wcb;
        CDUnknownFunctionPointerType genericCallback;
        void *genericPointer;
    } _cb;
}

- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithStreamEvents:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

