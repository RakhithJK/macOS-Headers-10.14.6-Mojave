//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSUUID, W5DiagnosticsTestRequest, W5DiagnosticsTestResult, W5Event, W5LogItemReceipt, W5LogItemRequest, W5Peer, W5PerfUpdate;

@protocol W5XPCEventDelegate
- (void)updatedPerformanceTest:(W5PerfUpdate *)arg1 uuid:(NSUUID *)arg2;
- (void)collectedLogItem:(W5LogItemReceipt *)arg1 next:(W5LogItemRequest *)arg2 peer:(W5Peer *)arg3 completed:(double)arg4 uuid:(NSUUID *)arg5;
- (void)completedDiagnosticsTest:(W5DiagnosticsTestResult *)arg1 next:(W5DiagnosticsTestRequest *)arg2 peer:(W5Peer *)arg3 completed:(double)arg4 uuid:(NSUUID *)arg5;
- (void)receivedEvent:(W5Event *)arg1;
@end

