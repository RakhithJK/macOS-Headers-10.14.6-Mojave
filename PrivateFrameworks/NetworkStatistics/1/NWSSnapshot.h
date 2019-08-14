//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NWSSnapshot : NSObject
{
    struct nstat_counts _counts;
    unsigned long long _changeSeqno;
    unsigned long long _sourceIdentifier;
    NSString *_provider;
    NSDictionary *_traditionalDictionary;
}

@property(readonly) NSDictionary *traditionalDictionary; // @synthesize traditionalDictionary=_traditionalDictionary;
@property(readonly) NSString *provider; // @synthesize provider=_provider;
@property(readonly) unsigned long long sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly) unsigned long long changeSeqno; // @synthesize changeSeqno=_changeSeqno;
- (void).cxx_destruct;
- (id)_createCountsForProvider:(int)arg1;
- (id)_initWithCounts:(const struct nstat_counts *)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3;
@property(readonly) double _rttVariation;
@property(readonly) double _rttAverage;
@property(readonly) double _rttMinimum;
@property(readonly) unsigned int _connectSuccesses;
@property(readonly) unsigned int _connectAttempts;
@property(readonly) unsigned int _txRetransmittedBytes;
@property(readonly) unsigned long long txWiredBytes;
@property(readonly) unsigned long long txWiFiBytes;
@property(readonly) unsigned long long txCellularBytes;
@property(readonly) unsigned long long txBytes;
@property(readonly) unsigned long long txPackets;
@property(readonly) unsigned int _rxOutOfOrderBytes;
@property(readonly) unsigned int _rxDuplicateBytes;
@property(readonly) unsigned long long rxWiredBytes;
@property(readonly) unsigned long long rxWiFiBytes;
@property(readonly) unsigned long long rxCellularBytes;
@property(readonly) unsigned long long rxBytes;
@property(readonly) unsigned long long rxPackets;
- (id)description;

@end

