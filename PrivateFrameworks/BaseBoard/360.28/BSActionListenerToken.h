//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface BSActionListenerToken : NSObject
{
    unsigned int _port;
    NSObject<OS_xpc_object> *_endpoint;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 endpoint:(id)arg2;

@end

