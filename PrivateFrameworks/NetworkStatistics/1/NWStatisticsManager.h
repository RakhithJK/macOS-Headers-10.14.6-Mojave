//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol NWStatisticsManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NWStatisticsManager : NSObject
{
    BOOL _systemInformationSubscribed;
    unsigned int _filter;
    unsigned int _continuationCount;
    unsigned long long _providerFilters[8];
    char *_iftracebuf;
    unsigned int _id;
    unsigned long long _numUpdatesDispatched;
    unsigned long long _numUpdatesSkipped;
    unsigned long long _numUpdatesLazyDispatched;
    unsigned long long _numUpdatesLazySkipped;
    unsigned long long _numSourceAddsReceived;
    unsigned long long _numSourceAddsSkipped;
    unsigned long long _numSourcesInserted;
    unsigned long long _numSourcesRemoved;
    unsigned long long _numSourcesQueried;
    BOOL _reading;
    BOOL _invalidated;
    unsigned int _mgrflags;
    int _interfaceTraceFd;
    int _interfaceSourceFd;
    int _sockfd;
    id <NWStatisticsManagerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_readSource;
    NSMutableDictionary *__internalSources;
    NSMutableDictionary *_currentQueries;
    NSMutableDictionary *_queuedQueryAlls;
    unsigned long long _currentQueryAllReference;
    unsigned long long _querySequenceNumber;
    char *_readBuffer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id _strongDelegate;
}

@property(retain) id strongDelegate; // @synthesize strongDelegate=_strongDelegate;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property char *readBuffer; // @synthesize readBuffer=_readBuffer;
@property unsigned long long querySequenceNumber; // @synthesize querySequenceNumber=_querySequenceNumber;
@property unsigned long long currentQueryAllReference; // @synthesize currentQueryAllReference=_currentQueryAllReference;
@property(retain) NSMutableDictionary *queuedQueryAlls; // @synthesize queuedQueryAlls=_queuedQueryAlls;
@property(retain) NSMutableDictionary *currentQueries; // @synthesize currentQueries=_currentQueries;
@property(retain) NSMutableDictionary *_internalSources; // @synthesize _internalSources=__internalSources;
@property(getter=isReading) BOOL reading; // @synthesize reading=_reading;
@property int sockfd; // @synthesize sockfd=_sockfd;
@property(retain) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(nonatomic) int interfaceSourceFd; // @synthesize interfaceSourceFd=_interfaceSourceFd;
@property(nonatomic) int interfaceTraceFd; // @synthesize interfaceTraceFd=_interfaceTraceFd;
@property(nonatomic) unsigned int mgrflags; // @synthesize mgrflags=_mgrflags;
@property(nonatomic) __weak id <NWStatisticsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)performAllCompletions:(id)arg1;
@property(readonly) NSSet *sources;
@property(nonatomic) unsigned int filter;
- (void)setQueuePriority:(long long)arg1;
- (void)querySource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)queryAll:(CDUnknownBlockType)arg1;
- (void)queryAllDescriptions:(CDUnknownBlockType)arg1;
- (void)queryAllCounts:(CDUnknownBlockType)arg1;
- (BOOL)performQuery:(unsigned int)arg1 sourceRef:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned int)commandFromReference:(unsigned long long)arg1;
- (unsigned long long)_nextReferenceForTarget:(unsigned long long)arg1 command:(unsigned int)arg2;
- (void)removeSource:(id)arg1;
- (BOOL)addAllRoute;
- (BOOL)addAllRoute:(unsigned long long)arg1;
- (BOOL)addAllUDP:(unsigned long long)arg1;
- (BOOL)addAllTCP:(unsigned long long)arg1;
- (BOOL)addAllUDP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char (*)[16])arg4;
- (BOOL)addAllTCP:(unsigned long long)arg1 events:(unsigned long long)arg2 pid:(int)arg3 uuid:(unsigned char (*)[16])arg4;
- (BOOL)addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 pid:(int)arg4 uuid:(unsigned char (*)[16])arg5;
- (void)subscribeToSystemInformation;
- (void)removeSourceInternal:(unsigned long long)arg1 isFromClient:(BOOL)arg2;
- (void)sendRemoveSourceInternal:(unsigned long long)arg1;
- (BOOL)addSource:(id)arg1 request:(struct nstat_msg_add_src *)arg2 length:(unsigned long long)arg3;
- (BOOL)handleCompletionMessage:(struct nstat_msg_hdr *)arg1 length:(unsigned int)arg2;
- (BOOL)handleCompletion:(unsigned long long)arg1 message:(struct nstat_msg_hdr *)arg2 length:(unsigned int)arg3;
- (void)startQueuedQuery;
- (void)handleReadEvent;
- (void)handleMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)sendRequestMessage:(int)arg1 sourceRef:(unsigned long long)arg2;
- (void)dispatchDidReceiveType:(unsigned int)arg1 source:(id)arg2;
- (void)dispatchDidReceiveCounts:(id)arg1 fromUpdate:(_Bool)arg2;
- (void)dispatchDidReceiveDescription:(id)arg1;
- (void)dispatchDidAddSource:(id)arg1;
- (void)reportInternalCounts;
- (void)handleSystemInformationCounts:(struct nstat_sysinfo_counts *)arg1;
- (BOOL)sendMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (void)trace:(char *)arg1;
- (void)traceMemoryBuf:(char *)arg1 length:(long long)arg2 tag:(char *)arg3;

@end

