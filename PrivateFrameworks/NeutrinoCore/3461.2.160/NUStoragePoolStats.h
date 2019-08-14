//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@interface NUStoragePoolStats : NSObject <NSCopying>
{
    long long _peakTotalBytes;
    long long _usedCount;
    long long _usedBytes;
    long long _peakUsedBytes;
    long long _nonPurgeableCount;
    long long _nonPurgeableBytes;
    long long _peakNonPurgeableBytes;
    long long _volatileCount;
    long long _volatileBytes;
    long long _peakVolatileBytes;
    long long _discardedCount;
    long long _migrationCount;
    long long _migrationBytes;
    long long _purgedCount;
    long long _purgedBytes;
    long long _requestCount;
    long long _reusedNonPurgeableCount;
    long long _reusedVolatileCount;
}

@property(nonatomic) long long reusedVolatileCount; // @synthesize reusedVolatileCount=_reusedVolatileCount;
@property(nonatomic) long long reusedNonPurgeableCount; // @synthesize reusedNonPurgeableCount=_reusedNonPurgeableCount;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) long long purgedBytes; // @synthesize purgedBytes=_purgedBytes;
@property(nonatomic) long long purgedCount; // @synthesize purgedCount=_purgedCount;
@property(nonatomic) long long migrationBytes; // @synthesize migrationBytes=_migrationBytes;
@property(nonatomic) long long migrationCount; // @synthesize migrationCount=_migrationCount;
@property(nonatomic) long long discardedCount; // @synthesize discardedCount=_discardedCount;
@property(readonly, nonatomic) long long peakVolatileBytes; // @synthesize peakVolatileBytes=_peakVolatileBytes;
@property(nonatomic) long long volatileBytes; // @synthesize volatileBytes=_volatileBytes;
@property(nonatomic) long long volatileCount; // @synthesize volatileCount=_volatileCount;
@property(readonly, nonatomic) long long peakNonPurgeableBytes; // @synthesize peakNonPurgeableBytes=_peakNonPurgeableBytes;
@property(nonatomic) long long nonPurgeableBytes; // @synthesize nonPurgeableBytes=_nonPurgeableBytes;
@property(nonatomic) long long nonPurgeableCount; // @synthesize nonPurgeableCount=_nonPurgeableCount;
@property(readonly, nonatomic) long long peakUsedBytes; // @synthesize peakUsedBytes=_peakUsedBytes;
@property(nonatomic) long long usedBytes; // @synthesize usedBytes=_usedBytes;
@property(nonatomic) long long usedCount; // @synthesize usedCount=_usedCount;
@property(readonly, nonatomic) long long peakTotalBytes; // @synthesize peakTotalBytes=_peakTotalBytes;
- (id)description;
@property(readonly, nonatomic) float reusedRate;
@property(readonly, nonatomic) long long reusedCount;
@property(readonly, nonatomic) long long totalBytes;
@property(readonly, nonatomic) long long totalCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

