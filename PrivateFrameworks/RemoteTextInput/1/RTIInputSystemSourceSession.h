//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteTextInput/RTIInputSystemSession.h>

#import <RemoteTextInput/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSString, RTIDataPayload;
@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate>
{
    id <RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
    id <RTIInputSystemPayloadDelegate> _payloadDelegate;
}

@property(nonatomic) __weak id <RTIInputSystemPayloadDelegate> payloadDelegate; // @synthesize payloadDelegate=_payloadDelegate;
@property(nonatomic) __weak id <RTIInputSystemPayloadDelegate> forwardingPayloadDelegate; // @synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate;
- (void).cxx_destruct;
- (void)handleTextActionPayload:(id)arg1;
- (void)handleForwardingResponseActionPayload:(id)arg1;
@property(readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
- (void)addSessionDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)flushOperations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

