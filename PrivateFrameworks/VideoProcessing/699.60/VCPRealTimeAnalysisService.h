//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPRealTimeAnalysisClientProtocol-Protocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol>
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id)errorWithStatus:(int)arg1 andDescription:(id)arg2;
+ (id)analysisService;
- (void).cxx_destruct;
- (void)invalidate;
- (void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withProperties:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)connection;
- (void)dealloc;
- (id)init;

@end

