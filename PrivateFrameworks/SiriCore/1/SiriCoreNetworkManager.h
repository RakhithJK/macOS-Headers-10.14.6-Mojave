//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, SiriCoreWiFiManagerClient;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    BOOL _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    BOOL _hasSymptomsBasedInstantCellQuality;
    BOOL _symptomsBasedInstantCellQualityIsGood;
    BOOL _hasSymptomsBasedInstantWiFiQuality;
    BOOL _symptomsBasedInstantWiFiQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalCellQuality;
    BOOL _symptomsBasedHistoricalCellQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalWiFiQuality;
    BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
    BOOL _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    unsigned long long _subscriptionCount;
}

+ (void)releaseDormancySuspendAssertion:(void *)arg1;
+ (void)acquireDormancySuspendAssertion:(const void **)arg1;
+ (long long)connectionTypeForInterface:(id)arg1;
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(BOOL)arg2;
+ (void)getCarrierName:(id *)arg1 signalStrength:(id *)arg2 subscriptionCount:(id *)arg3;
+ (long long)connectionSubTypeForCellularInterface;
+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(char *)arg2 isCellular:(char *)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_getConnectionSuccessRate:(id)arg1 hasMetric:(char *)arg2;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)releaseWiFiAssertion;
- (void)forceFastDormancy;
- (void)getSignalStrength:(id *)arg1 subscriptionCount:(unsigned long long *)arg2;
- (long long)_reportWiFiHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportCellularInstantQuality;
- (void)getQualityReport:(CDUnknownBlockType)arg1;
- (long long)anyNetworkQuality;
- (long long)wifiNetworkQuality;
- (long long)cellularNetworkQuality;
- (void)getNetworkPerformanceFeed;
- (void)_getNetworkPerformanceFeed;
- (void)stopMonitoringNetwork;
- (void)_stopMonitoringNetwork;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)_pathUpdated:(id)arg1;
- (id)_wiFiManagerClient;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

