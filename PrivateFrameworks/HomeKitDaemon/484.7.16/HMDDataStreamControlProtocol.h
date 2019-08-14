//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSNumber, NSString;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    BOOL _helloMessageResponseReceived;
    NSNumber *_pendingHelloMessageIdentifier;
}

+ (id)logCategory;
@property(retain, nonatomic) NSNumber *pendingHelloMessageIdentifier; // @synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier;
@property(nonatomic) BOOL helloMessageResponseReceived; // @synthesize helloMessageResponseReceived=_helloMessageResponseReceived;
- (void).cxx_destruct;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (BOOL)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
