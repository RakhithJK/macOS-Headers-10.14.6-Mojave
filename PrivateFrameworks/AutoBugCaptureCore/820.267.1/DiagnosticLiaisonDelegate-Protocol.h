//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AutoBugCaptureCore/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol DiagnosticLiaisonDelegate <NSObject>
- (void)requestSnapshotWithSignature:(NSDictionary *)arg1 flags:(unsigned long long)arg2 events:(NSArray *)arg3;
- (void)remoteTriggerDeliveryUpdateEvent:(NSDictionary *)arg1;
@end
