//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMCSBoundedQueue : NSObject
{
    BOOL _isValid;
    unsigned long long _bytesUpperBound;
    unsigned long long _bytesErrorLevel;
    NSMutableArray *_entries;
    struct dispatch_semaphore_s *_boundsExceeded;
}

@property(nonatomic) struct dispatch_semaphore_s *boundsExceeded; // @synthesize boundsExceeded=_boundsExceeded;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long bytesErrorLevel; // @synthesize bytesErrorLevel=_bytesErrorLevel;
@property(readonly, nonatomic) unsigned long long bytesUpperBound; // @synthesize bytesUpperBound=_bytesUpperBound;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeNextDataWithBlock:(CDUnknownBlockType)arg1;
- (void)addData:(id)arg1;
- (BOOL)_sync_isFull;
- (unsigned long long)_sync_aggregateByteCount;
- (void)dealloc;
- (id)initWithUpperBound:(unsigned long long)arg1;

@end

