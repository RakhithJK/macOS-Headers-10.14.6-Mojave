//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest
{
    unsigned long long _progressCount;
    unsigned long long _maxProgressCount;
    double _progressRescheduleDelay;
}

@property double progressRescheduleDelay; // @synthesize progressRescheduleDelay=_progressRescheduleDelay;
@property unsigned long long maxProgressCount; // @synthesize maxProgressCount=_maxProgressCount;
@property unsigned long long progressCount; // @synthesize progressCount=_progressCount;
- (void)setUp;
- (id)createSyncStatisticsForMockSyncState:(id)arg1;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;

@end

