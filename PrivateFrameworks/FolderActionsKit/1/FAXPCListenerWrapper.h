//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FAXPCDelegate, NSXPCInterface, NSXPCListener;

@interface FAXPCListenerWrapper : NSObject
{
    NSXPCListener *_listener;
    FAXPCDelegate *_delegate;
}

+ (id)wrapperForMachService:(id)arg1 exportedProtocol:(id)arg2 exportedObject:(id)arg3;
@property(retain) FAXPCDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface;

@end

