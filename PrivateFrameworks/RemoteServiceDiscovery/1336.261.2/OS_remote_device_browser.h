//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface OS_remote_device_browser : NSObject
{
    _Bool _canceled;
    unsigned int _device_type;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_cbq;
    CDUnknownBlockType _callback;
}

@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(retain) NSObject<OS_dispatch_queue> *cbq; // @synthesize cbq=_cbq;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property unsigned int device_type; // @synthesize device_type=_device_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

