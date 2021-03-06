//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPECNInterfaceStatsReport : PBCodable <NSCopying>
{
    unsigned long long _interfaceType;
    unsigned long long _ipProtocol;
    unsigned long long _tcpECNIntClientSetup;
    unsigned long long _tcpECNIntClientSuccess;
    unsigned long long _tcpECNIntConnNoPLCE;
    unsigned long long _tcpECNIntConnPLCE;
    unsigned long long _tcpECNIntConnPLNoCE;
    unsigned long long _tcpECNIntConnRecvCE;
    unsigned long long _tcpECNIntConnRecvECE;
    unsigned long long _tcpECNIntFallbackCE;
    unsigned long long _tcpECNIntFallbackDropRst;
    unsigned long long _tcpECNIntFallbackDropRxmt;
    unsigned long long _tcpECNIntFallbackReorder;
    unsigned long long _tcpECNIntFallbackSYNRst;
    unsigned long long _tcpECNIntFallbackSynLoss;
    unsigned long long _tcpECNIntNotSupportedPeer;
    unsigned long long _tcpECNIntOffAvgRTT;
    unsigned long long _tcpECNIntOffDropRst;
    unsigned long long _tcpECNIntOffDropRxmt;
    unsigned long long _tcpECNIntOffOOBPer;
    unsigned long long _tcpECNIntOffRTTVar;
    unsigned long long _tcpECNIntOffReorderPer;
    unsigned long long _tcpECNIntOffRxmtPer;
    unsigned long long _tcpECNIntOffSACKE;
    unsigned long long _tcpECNIntOffTotalOOPkts;
    unsigned long long _tcpECNIntOffTotalRxPkts;
    unsigned long long _tcpECNIntOffTotalRxmtPkts;
    unsigned long long _tcpECNIntOffTotalTxPkts;
    unsigned long long _tcpECNIntOnAvgRTT;
    unsigned long long _tcpECNIntOnDropRst;
    unsigned long long _tcpECNIntOnDropRxmt;
    unsigned long long _tcpECNIntOnOOBPer;
    unsigned long long _tcpECNIntOnRTTVar;
    unsigned long long _tcpECNIntOnReorderPer;
    unsigned long long _tcpECNIntOnSACKE;
    unsigned long long _tcpECNIntOnTotalOOPkts;
    unsigned long long _tcpECNIntOnTotalRxPkts;
    unsigned long long _tcpECNIntOnTotalRxmtPkts;
    unsigned long long _tcpECNIntOnTotalTxPkts;
    unsigned long long _tcpECNIntRecvCE;
    unsigned long long _tcpECNIntRecvECE;
    unsigned long long _tcpECNIntRxmtPer;
    unsigned long long _tcpECNIntSentECE;
    unsigned long long _tcpECNIntServerSetup;
    unsigned long long _tcpECNIntServerSuccess;
    unsigned long long _tcpECNIntSynAckLost;
    unsigned long long _tcpECNIntSynLost;
    unsigned long long _tcpECNIntTotalConnections;
    unsigned long long _tcpUnsentDataAtSleepCnt;
    struct {
        unsigned int interfaceType:1;
        unsigned int ipProtocol:1;
        unsigned int tcpECNIntClientSetup:1;
        unsigned int tcpECNIntClientSuccess:1;
        unsigned int tcpECNIntConnNoPLCE:1;
        unsigned int tcpECNIntConnPLCE:1;
        unsigned int tcpECNIntConnPLNoCE:1;
        unsigned int tcpECNIntConnRecvCE:1;
        unsigned int tcpECNIntConnRecvECE:1;
        unsigned int tcpECNIntFallbackCE:1;
        unsigned int tcpECNIntFallbackDropRst:1;
        unsigned int tcpECNIntFallbackDropRxmt:1;
        unsigned int tcpECNIntFallbackReorder:1;
        unsigned int tcpECNIntFallbackSYNRst:1;
        unsigned int tcpECNIntFallbackSynLoss:1;
        unsigned int tcpECNIntNotSupportedPeer:1;
        unsigned int tcpECNIntOffAvgRTT:1;
        unsigned int tcpECNIntOffDropRst:1;
        unsigned int tcpECNIntOffDropRxmt:1;
        unsigned int tcpECNIntOffOOBPer:1;
        unsigned int tcpECNIntOffRTTVar:1;
        unsigned int tcpECNIntOffReorderPer:1;
        unsigned int tcpECNIntOffRxmtPer:1;
        unsigned int tcpECNIntOffSACKE:1;
        unsigned int tcpECNIntOffTotalOOPkts:1;
        unsigned int tcpECNIntOffTotalRxPkts:1;
        unsigned int tcpECNIntOffTotalRxmtPkts:1;
        unsigned int tcpECNIntOffTotalTxPkts:1;
        unsigned int tcpECNIntOnAvgRTT:1;
        unsigned int tcpECNIntOnDropRst:1;
        unsigned int tcpECNIntOnDropRxmt:1;
        unsigned int tcpECNIntOnOOBPer:1;
        unsigned int tcpECNIntOnRTTVar:1;
        unsigned int tcpECNIntOnReorderPer:1;
        unsigned int tcpECNIntOnSACKE:1;
        unsigned int tcpECNIntOnTotalOOPkts:1;
        unsigned int tcpECNIntOnTotalRxPkts:1;
        unsigned int tcpECNIntOnTotalRxmtPkts:1;
        unsigned int tcpECNIntOnTotalTxPkts:1;
        unsigned int tcpECNIntRecvCE:1;
        unsigned int tcpECNIntRecvECE:1;
        unsigned int tcpECNIntRxmtPer:1;
        unsigned int tcpECNIntSentECE:1;
        unsigned int tcpECNIntServerSetup:1;
        unsigned int tcpECNIntServerSuccess:1;
        unsigned int tcpECNIntSynAckLost:1;
        unsigned int tcpECNIntSynLost:1;
        unsigned int tcpECNIntTotalConnections:1;
        unsigned int tcpUnsentDataAtSleepCnt:1;
    } _has;
}

@property(nonatomic) unsigned long long tcpECNIntFallbackSYNRst; // @synthesize tcpECNIntFallbackSYNRst=_tcpECNIntFallbackSYNRst;
@property(nonatomic) unsigned long long tcpECNIntFallbackDropRxmt; // @synthesize tcpECNIntFallbackDropRxmt=_tcpECNIntFallbackDropRxmt;
@property(nonatomic) unsigned long long tcpECNIntFallbackDropRst; // @synthesize tcpECNIntFallbackDropRst=_tcpECNIntFallbackDropRst;
@property(nonatomic) unsigned long long tcpUnsentDataAtSleepCnt; // @synthesize tcpUnsentDataAtSleepCnt=_tcpUnsentDataAtSleepCnt;
@property(nonatomic) unsigned long long tcpECNIntTotalConnections; // @synthesize tcpECNIntTotalConnections=_tcpECNIntTotalConnections;
@property(nonatomic) unsigned long long tcpECNIntOffDropRxmt; // @synthesize tcpECNIntOffDropRxmt=_tcpECNIntOffDropRxmt;
@property(nonatomic) unsigned long long tcpECNIntOffDropRst; // @synthesize tcpECNIntOffDropRst=_tcpECNIntOffDropRst;
@property(nonatomic) unsigned long long tcpECNIntOffTotalOOPkts; // @synthesize tcpECNIntOffTotalOOPkts=_tcpECNIntOffTotalOOPkts;
@property(nonatomic) unsigned long long tcpECNIntOffTotalRxPkts; // @synthesize tcpECNIntOffTotalRxPkts=_tcpECNIntOffTotalRxPkts;
@property(nonatomic) unsigned long long tcpECNIntOffTotalRxmtPkts; // @synthesize tcpECNIntOffTotalRxmtPkts=_tcpECNIntOffTotalRxmtPkts;
@property(nonatomic) unsigned long long tcpECNIntOffTotalTxPkts; // @synthesize tcpECNIntOffTotalTxPkts=_tcpECNIntOffTotalTxPkts;
@property(nonatomic) unsigned long long tcpECNIntOnDropRxmt; // @synthesize tcpECNIntOnDropRxmt=_tcpECNIntOnDropRxmt;
@property(nonatomic) unsigned long long tcpECNIntOnDropRst; // @synthesize tcpECNIntOnDropRst=_tcpECNIntOnDropRst;
@property(nonatomic) unsigned long long tcpECNIntOnTotalOOPkts; // @synthesize tcpECNIntOnTotalOOPkts=_tcpECNIntOnTotalOOPkts;
@property(nonatomic) unsigned long long tcpECNIntOnTotalRxPkts; // @synthesize tcpECNIntOnTotalRxPkts=_tcpECNIntOnTotalRxPkts;
@property(nonatomic) unsigned long long tcpECNIntOnTotalRxmtPkts; // @synthesize tcpECNIntOnTotalRxmtPkts=_tcpECNIntOnTotalRxmtPkts;
@property(nonatomic) unsigned long long tcpECNIntOnTotalTxPkts; // @synthesize tcpECNIntOnTotalTxPkts=_tcpECNIntOnTotalTxPkts;
@property(nonatomic) unsigned long long tcpECNIntOffRxmtPer; // @synthesize tcpECNIntOffRxmtPer=_tcpECNIntOffRxmtPer;
@property(nonatomic) unsigned long long tcpECNIntOffReorderPer; // @synthesize tcpECNIntOffReorderPer=_tcpECNIntOffReorderPer;
@property(nonatomic) unsigned long long tcpECNIntOffSACKE; // @synthesize tcpECNIntOffSACKE=_tcpECNIntOffSACKE;
@property(nonatomic) unsigned long long tcpECNIntOffOOBPer; // @synthesize tcpECNIntOffOOBPer=_tcpECNIntOffOOBPer;
@property(nonatomic) unsigned long long tcpECNIntOffRTTVar; // @synthesize tcpECNIntOffRTTVar=_tcpECNIntOffRTTVar;
@property(nonatomic) unsigned long long tcpECNIntOffAvgRTT; // @synthesize tcpECNIntOffAvgRTT=_tcpECNIntOffAvgRTT;
@property(nonatomic) unsigned long long tcpECNIntRxmtPer; // @synthesize tcpECNIntRxmtPer=_tcpECNIntRxmtPer;
@property(nonatomic) unsigned long long tcpECNIntOnReorderPer; // @synthesize tcpECNIntOnReorderPer=_tcpECNIntOnReorderPer;
@property(nonatomic) unsigned long long tcpECNIntOnSACKE; // @synthesize tcpECNIntOnSACKE=_tcpECNIntOnSACKE;
@property(nonatomic) unsigned long long tcpECNIntOnOOBPer; // @synthesize tcpECNIntOnOOBPer=_tcpECNIntOnOOBPer;
@property(nonatomic) unsigned long long tcpECNIntOnRTTVar; // @synthesize tcpECNIntOnRTTVar=_tcpECNIntOnRTTVar;
@property(nonatomic) unsigned long long tcpECNIntOnAvgRTT; // @synthesize tcpECNIntOnAvgRTT=_tcpECNIntOnAvgRTT;
@property(nonatomic) unsigned long long tcpECNIntFallbackCE; // @synthesize tcpECNIntFallbackCE=_tcpECNIntFallbackCE;
@property(nonatomic) unsigned long long tcpECNIntFallbackReorder; // @synthesize tcpECNIntFallbackReorder=_tcpECNIntFallbackReorder;
@property(nonatomic) unsigned long long tcpECNIntFallbackSynLoss; // @synthesize tcpECNIntFallbackSynLoss=_tcpECNIntFallbackSynLoss;
@property(nonatomic) unsigned long long tcpECNIntConnNoPLCE; // @synthesize tcpECNIntConnNoPLCE=_tcpECNIntConnNoPLCE;
@property(nonatomic) unsigned long long tcpECNIntConnPLCE; // @synthesize tcpECNIntConnPLCE=_tcpECNIntConnPLCE;
@property(nonatomic) unsigned long long tcpECNIntConnPLNoCE; // @synthesize tcpECNIntConnPLNoCE=_tcpECNIntConnPLNoCE;
@property(nonatomic) unsigned long long tcpECNIntConnRecvECE; // @synthesize tcpECNIntConnRecvECE=_tcpECNIntConnRecvECE;
@property(nonatomic) unsigned long long tcpECNIntConnRecvCE; // @synthesize tcpECNIntConnRecvCE=_tcpECNIntConnRecvCE;
@property(nonatomic) unsigned long long tcpECNIntSentECE; // @synthesize tcpECNIntSentECE=_tcpECNIntSentECE;
@property(nonatomic) unsigned long long tcpECNIntRecvECE; // @synthesize tcpECNIntRecvECE=_tcpECNIntRecvECE;
@property(nonatomic) unsigned long long tcpECNIntRecvCE; // @synthesize tcpECNIntRecvCE=_tcpECNIntRecvCE;
@property(nonatomic) unsigned long long tcpECNIntSynAckLost; // @synthesize tcpECNIntSynAckLost=_tcpECNIntSynAckLost;
@property(nonatomic) unsigned long long tcpECNIntSynLost; // @synthesize tcpECNIntSynLost=_tcpECNIntSynLost;
@property(nonatomic) unsigned long long tcpECNIntNotSupportedPeer; // @synthesize tcpECNIntNotSupportedPeer=_tcpECNIntNotSupportedPeer;
@property(nonatomic) unsigned long long tcpECNIntServerSuccess; // @synthesize tcpECNIntServerSuccess=_tcpECNIntServerSuccess;
@property(nonatomic) unsigned long long tcpECNIntClientSuccess; // @synthesize tcpECNIntClientSuccess=_tcpECNIntClientSuccess;
@property(nonatomic) unsigned long long tcpECNIntServerSetup; // @synthesize tcpECNIntServerSetup=_tcpECNIntServerSetup;
@property(nonatomic) unsigned long long tcpECNIntClientSetup; // @synthesize tcpECNIntClientSetup=_tcpECNIntClientSetup;
@property(nonatomic) unsigned long long ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property(nonatomic) unsigned long long interfaceType; // @synthesize interfaceType=_interfaceType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTcpECNIntFallbackSYNRst;
@property(nonatomic) BOOL hasTcpECNIntFallbackDropRxmt;
@property(nonatomic) BOOL hasTcpECNIntFallbackDropRst;
@property(nonatomic) BOOL hasTcpUnsentDataAtSleepCnt;
@property(nonatomic) BOOL hasTcpECNIntTotalConnections;
@property(nonatomic) BOOL hasTcpECNIntOffDropRxmt;
@property(nonatomic) BOOL hasTcpECNIntOffDropRst;
@property(nonatomic) BOOL hasTcpECNIntOffTotalOOPkts;
@property(nonatomic) BOOL hasTcpECNIntOffTotalRxPkts;
@property(nonatomic) BOOL hasTcpECNIntOffTotalRxmtPkts;
@property(nonatomic) BOOL hasTcpECNIntOffTotalTxPkts;
@property(nonatomic) BOOL hasTcpECNIntOnDropRxmt;
@property(nonatomic) BOOL hasTcpECNIntOnDropRst;
@property(nonatomic) BOOL hasTcpECNIntOnTotalOOPkts;
@property(nonatomic) BOOL hasTcpECNIntOnTotalRxPkts;
@property(nonatomic) BOOL hasTcpECNIntOnTotalRxmtPkts;
@property(nonatomic) BOOL hasTcpECNIntOnTotalTxPkts;
@property(nonatomic) BOOL hasTcpECNIntOffRxmtPer;
@property(nonatomic) BOOL hasTcpECNIntOffReorderPer;
@property(nonatomic) BOOL hasTcpECNIntOffSACKE;
@property(nonatomic) BOOL hasTcpECNIntOffOOBPer;
@property(nonatomic) BOOL hasTcpECNIntOffRTTVar;
@property(nonatomic) BOOL hasTcpECNIntOffAvgRTT;
@property(nonatomic) BOOL hasTcpECNIntRxmtPer;
@property(nonatomic) BOOL hasTcpECNIntOnReorderPer;
@property(nonatomic) BOOL hasTcpECNIntOnSACKE;
@property(nonatomic) BOOL hasTcpECNIntOnOOBPer;
@property(nonatomic) BOOL hasTcpECNIntOnRTTVar;
@property(nonatomic) BOOL hasTcpECNIntOnAvgRTT;
@property(nonatomic) BOOL hasTcpECNIntFallbackCE;
@property(nonatomic) BOOL hasTcpECNIntFallbackReorder;
@property(nonatomic) BOOL hasTcpECNIntFallbackSynLoss;
@property(nonatomic) BOOL hasTcpECNIntConnNoPLCE;
@property(nonatomic) BOOL hasTcpECNIntConnPLCE;
@property(nonatomic) BOOL hasTcpECNIntConnPLNoCE;
@property(nonatomic) BOOL hasTcpECNIntConnRecvECE;
@property(nonatomic) BOOL hasTcpECNIntConnRecvCE;
@property(nonatomic) BOOL hasTcpECNIntSentECE;
@property(nonatomic) BOOL hasTcpECNIntRecvECE;
@property(nonatomic) BOOL hasTcpECNIntRecvCE;
@property(nonatomic) BOOL hasTcpECNIntSynAckLost;
@property(nonatomic) BOOL hasTcpECNIntSynLost;
@property(nonatomic) BOOL hasTcpECNIntNotSupportedPeer;
@property(nonatomic) BOOL hasTcpECNIntServerSuccess;
@property(nonatomic) BOOL hasTcpECNIntClientSuccess;
@property(nonatomic) BOOL hasTcpECNIntServerSetup;
@property(nonatomic) BOOL hasTcpECNIntClientSetup;
@property(nonatomic) BOOL hasIpProtocol;
@property(nonatomic) BOOL hasInterfaceType;

@end

