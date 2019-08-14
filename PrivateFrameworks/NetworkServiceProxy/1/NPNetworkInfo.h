//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPEdgeSelection, NSArray, NSDate, NSString;

@interface NPNetworkInfo : NSObject <NSSecureCoding>
{
    BOOL _isProbeInProgress;
    unsigned int _lastFailureReason;
    NSDate *_lastVisited;
    NSDate *_lastUsed;
    NSArray *_edgeLatencies;
    NSArray *_currentLatencyMap;
    NSDate *_probeRateLimit;
    NPEdgeSelection *_edgeSelection;
}

+ (long long)failureReasonToFallbackReason:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
@property BOOL isProbeInProgress; // @synthesize isProbeInProgress=_isProbeInProgress;
@property(retain) NPEdgeSelection *edgeSelection; // @synthesize edgeSelection=_edgeSelection;
@property(retain) NSDate *probeRateLimit; // @synthesize probeRateLimit=_probeRateLimit;
@property(retain) NSArray *currentLatencyMap; // @synthesize currentLatencyMap=_currentLatencyMap;
@property(retain) NSArray *edgeLatencies; // @synthesize edgeLatencies=_edgeLatencies;
@property unsigned int lastFailureReason; // @synthesize lastFailureReason=_lastFailureReason;
@property(retain) NSDate *lastUsed; // @synthesize lastUsed=_lastUsed;
@property(retain) NSDate *lastVisited; // @synthesize lastVisited=_lastVisited;
- (void).cxx_destruct;
- (void)handleTFOFailedForAddressFamily:(unsigned char)arg1;
- (void)mergeNewLatencies:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(struct networkParameters *)arg3;
- (BOOL)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(struct networkParameters *)arg3 requireUniqueEdges:(BOOL)arg4;
- (void)resortEdgeLatenciesUsingComparator:(CDUnknownBlockType)arg1;
@property(readonly) NSString *lastUsedDesc;
@property(readonly) NSString *lastVisitedDesc;
- (long long)compareLastVisited:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

