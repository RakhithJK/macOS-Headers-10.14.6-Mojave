//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_io, OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface OS_xpc_remote_channel : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_nw_connection> *conn;
    CDUnknownBlockType event_handler;
    CDUnknownBlockType msg_handler;
    unsigned int state;
    int error;
    int stream_direction;
    NSObject<OS_dispatch_io> *stream_io;
    NSObject<OS_dispatch_io> *parent_io;
    _Bool tx_complete;
    unsigned char wire_version;
}

- (void).cxx_destruct;

@end

