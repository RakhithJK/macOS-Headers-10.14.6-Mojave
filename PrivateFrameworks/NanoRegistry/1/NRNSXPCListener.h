//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSXPCListener.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>
#import <NanoRegistry/NSXPCListenerDelegate-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol>
{
    id <NRNSXPCListenerDelegate> _listenerDelegate;
}

- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

