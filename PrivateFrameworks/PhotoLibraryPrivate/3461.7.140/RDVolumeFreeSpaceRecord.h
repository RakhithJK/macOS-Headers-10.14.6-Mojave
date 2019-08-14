//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface RDVolumeFreeSpaceRecord : NSObject
{
    NSString *_mountPoint;
    NSMutableSet *_requests;
    unsigned long long _freeSpace;
}

@property unsigned long long freeSpace; // @synthesize freeSpace=_freeSpace;
@property(retain) NSMutableSet *requests; // @synthesize requests=_requests;
@property(readonly) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
- (void).cxx_destruct;
- (BOOL)purgeCachesForRequest:(id)arg1 bytes:(unsigned long long)arg2;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)initWithMountPoint:(id)arg1;

@end

