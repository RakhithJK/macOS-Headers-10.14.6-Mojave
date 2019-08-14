//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString;
@protocol OS_xpc_object;

@protocol VCMediaStreamProtocol <NSObject>
- (void)setPause:(BOOL)arg1;
- (void)stop;
- (void)start;
- (BOOL)setStreamConfig:(NSArray *)arg1 withError:(id *)arg2;

@optional
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setDecryptionTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (long long)streamDirection;
- (void)setStreamDirection:(long long)arg1;
- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id *)arg3;
- (NSDictionary *)setupRTPWithSockets:(NSObject<OS_xpc_object> *)arg1 error:(id *)arg2;
- (NSDictionary *)setupRTPWithIDSDestination:(NSString *)arg1 error:(id *)arg2;
@end

