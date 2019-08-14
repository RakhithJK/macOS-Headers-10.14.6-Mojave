//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSString, RTIInputSystemSourceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _started;
    id <RPMessageable> _messenger;
    RTIInputSystemSourceSession *_rtiSession;
    CDUnknownBlockType _rtiUpdatedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType rtiUpdatedHandler; // @synthesize rtiUpdatedHandler=_rtiUpdatedHandler;
@property(readonly, nonatomic) RTIInputSystemSourceSession *rtiSession; // @synthesize rtiSession=_rtiSession;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void).cxx_destruct;
- (void)handleTextActionPayload:(id)arg1;
- (void)_handleTextInputChange:(id)arg1 started:(BOOL)arg2;
- (void)_handleTextInputStopped:(id)arg1;
- (void)_handleTextInputStarted:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

