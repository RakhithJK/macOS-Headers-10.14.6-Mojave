//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsUDPSource : NWStatisticsSource
{
    struct nstat_udp_descriptor _descriptor;
}

- (id)initWithManager:(id)arg1 local:(const struct sockaddr *)arg2 remote:(const struct sockaddr *)arg3;
- (id)description;
- (id)_currentSnapshot;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2;

@end

