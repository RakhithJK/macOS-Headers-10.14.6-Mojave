//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface AssetCacheMetric : NSObject
{
    NSNumber *_bytesDropped;
    NSNumber *_bytesFromCacheToChild;
    NSNumber *_bytesFromCacheToClient;
    NSNumber *_bytesFromCacheToPeer;
    NSNumber *_bytesFromOriginToChild;
    NSNumber *_bytesFromOriginToClient;
    NSNumber *_bytesFromOriginToPeer;
    NSNumber *_bytesFromParentToChild;
    NSNumber *_bytesFromParentToClient;
    NSNumber *_bytesFromParentToPeer;
    NSNumber *_bytesFromPeerToChild;
    NSNumber *_bytesFromPeerToClient;
    NSNumber *_bytesImportedByHTTP;
    NSNumber *_bytesImportedByXPC;
    NSNumber *_bytesPurgedTotal;
    NSNumber *_bytesPurgedYoungerThan1Day;
    NSNumber *_bytesPurgedYoungerThan7Days;
    NSNumber *_bytesPurgedYoungerThan30Days;
    NSDate *_creationDate;
    NSNumber *_importsByHTTP;
    NSNumber *_importsByXPC;
    NSNumber *_period;
    NSNumber *_repliesFromCacheToChild;
    NSNumber *_repliesFromCacheToClient;
    NSNumber *_repliesFromCacheToPeer;
    NSNumber *_repliesFromOriginToChild;
    NSNumber *_repliesFromOriginToClient;
    NSNumber *_repliesFromOriginToPeer;
    NSNumber *_repliesFromParentToChild;
    NSNumber *_repliesFromParentToClient;
    NSNumber *_repliesFromParentToPeer;
    NSNumber *_repliesFromPeerToChild;
    NSNumber *_repliesFromPeerToClient;
    NSNumber *_requestsFromChild;
    NSNumber *_requestsFromClient;
    NSNumber *_requestsFromPeer;
    NSNumber *_requestsRejectedForNoSpace;
}

@property(retain) NSNumber *requestsRejectedForNoSpace; // @synthesize requestsRejectedForNoSpace=_requestsRejectedForNoSpace;
@property(retain) NSNumber *requestsFromPeer; // @synthesize requestsFromPeer=_requestsFromPeer;
@property(retain) NSNumber *requestsFromClient; // @synthesize requestsFromClient=_requestsFromClient;
@property(retain) NSNumber *requestsFromChild; // @synthesize requestsFromChild=_requestsFromChild;
@property(retain) NSNumber *repliesFromPeerToClient; // @synthesize repliesFromPeerToClient=_repliesFromPeerToClient;
@property(retain) NSNumber *repliesFromPeerToChild; // @synthesize repliesFromPeerToChild=_repliesFromPeerToChild;
@property(retain) NSNumber *repliesFromParentToPeer; // @synthesize repliesFromParentToPeer=_repliesFromParentToPeer;
@property(retain) NSNumber *repliesFromParentToClient; // @synthesize repliesFromParentToClient=_repliesFromParentToClient;
@property(retain) NSNumber *repliesFromParentToChild; // @synthesize repliesFromParentToChild=_repliesFromParentToChild;
@property(retain) NSNumber *repliesFromOriginToPeer; // @synthesize repliesFromOriginToPeer=_repliesFromOriginToPeer;
@property(retain) NSNumber *repliesFromOriginToClient; // @synthesize repliesFromOriginToClient=_repliesFromOriginToClient;
@property(retain) NSNumber *repliesFromOriginToChild; // @synthesize repliesFromOriginToChild=_repliesFromOriginToChild;
@property(retain) NSNumber *repliesFromCacheToPeer; // @synthesize repliesFromCacheToPeer=_repliesFromCacheToPeer;
@property(retain) NSNumber *repliesFromCacheToClient; // @synthesize repliesFromCacheToClient=_repliesFromCacheToClient;
@property(retain) NSNumber *repliesFromCacheToChild; // @synthesize repliesFromCacheToChild=_repliesFromCacheToChild;
@property(retain) NSNumber *period; // @synthesize period=_period;
@property(retain) NSNumber *importsByXPC; // @synthesize importsByXPC=_importsByXPC;
@property(retain) NSNumber *importsByHTTP; // @synthesize importsByHTTP=_importsByHTTP;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSNumber *bytesPurgedYoungerThan30Days; // @synthesize bytesPurgedYoungerThan30Days=_bytesPurgedYoungerThan30Days;
@property(retain) NSNumber *bytesPurgedYoungerThan7Days; // @synthesize bytesPurgedYoungerThan7Days=_bytesPurgedYoungerThan7Days;
@property(retain) NSNumber *bytesPurgedYoungerThan1Day; // @synthesize bytesPurgedYoungerThan1Day=_bytesPurgedYoungerThan1Day;
@property(retain) NSNumber *bytesPurgedTotal; // @synthesize bytesPurgedTotal=_bytesPurgedTotal;
@property(retain) NSNumber *bytesImportedByXPC; // @synthesize bytesImportedByXPC=_bytesImportedByXPC;
@property(retain) NSNumber *bytesImportedByHTTP; // @synthesize bytesImportedByHTTP=_bytesImportedByHTTP;
@property(retain) NSNumber *bytesFromPeerToClient; // @synthesize bytesFromPeerToClient=_bytesFromPeerToClient;
@property(retain) NSNumber *bytesFromPeerToChild; // @synthesize bytesFromPeerToChild=_bytesFromPeerToChild;
@property(retain) NSNumber *bytesFromParentToPeer; // @synthesize bytesFromParentToPeer=_bytesFromParentToPeer;
@property(retain) NSNumber *bytesFromParentToClient; // @synthesize bytesFromParentToClient=_bytesFromParentToClient;
@property(retain) NSNumber *bytesFromParentToChild; // @synthesize bytesFromParentToChild=_bytesFromParentToChild;
@property(retain) NSNumber *bytesFromOriginToPeer; // @synthesize bytesFromOriginToPeer=_bytesFromOriginToPeer;
@property(retain) NSNumber *bytesFromOriginToClient; // @synthesize bytesFromOriginToClient=_bytesFromOriginToClient;
@property(retain) NSNumber *bytesFromOriginToChild; // @synthesize bytesFromOriginToChild=_bytesFromOriginToChild;
@property(retain) NSNumber *bytesFromCacheToPeer; // @synthesize bytesFromCacheToPeer=_bytesFromCacheToPeer;
@property(retain) NSNumber *bytesFromCacheToClient; // @synthesize bytesFromCacheToClient=_bytesFromCacheToClient;
@property(retain) NSNumber *bytesFromCacheToChild; // @synthesize bytesFromCacheToChild=_bytesFromCacheToChild;
@property(retain) NSNumber *bytesDropped; // @synthesize bytesDropped=_bytesDropped;
- (void).cxx_destruct;
@property(readonly) unsigned long long sumOfBytesUploaded;
@property(readonly) unsigned long long sumOfBytesServedToPeer;
@property(readonly) unsigned long long sumOfBytesServedToClient;
@property(readonly) unsigned long long sumOfBytesServedToChild;
@property(readonly) unsigned long long sumOfBytesServedFromPeer;
@property(readonly) unsigned long long sumOfBytesServedFromParent;
@property(readonly) unsigned long long sumOfBytesServedFromOrigin;
@property(readonly) unsigned long long sumOfBytesServedFromCache;
@property(readonly) unsigned long long sumOfBytesServed;
@property(readonly) unsigned long long sumOfBytesDownloaded;
@property(readonly) double cachePressure;
- (id)description;

@end
