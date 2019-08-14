//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate, OS_dispatch_queue;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol>
{
    BOOL _suspended;
    BOOL _invalidated;
    id <NRNSXPCListenerDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)serverConnectionWithClientConnection:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

