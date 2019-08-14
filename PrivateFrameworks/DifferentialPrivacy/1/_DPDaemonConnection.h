//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>
{
    NSXPCConnection *_daemonConnection;
}

+ (id)daemonConnection;
@property(readonly, nonatomic) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
- (void).cxx_destruct;
- (void)retireReports:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)reportsNotYetSubmittedWithReply:(CDUnknownBlockType)arg1;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

