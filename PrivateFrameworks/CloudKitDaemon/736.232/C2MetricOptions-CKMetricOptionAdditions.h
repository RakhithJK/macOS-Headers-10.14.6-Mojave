//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <C2/C2MetricOptions.h>

@interface C2MetricOptions (CKMetricOptionAdditions)
+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 proxy:(id)arg3 config:(id)arg4;
+ (id)metricOptionsForNetworkRequest:(id)arg1;
+ (id)metricOptionsForNetworkOperation:(id)arg1;
- (void)_attributeCurrentProxy:(id)arg1 config:(id)arg2;
- (void)_setupC2MetricsEndpointWithAccount:(id)arg1;
@end

