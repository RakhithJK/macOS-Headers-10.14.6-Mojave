//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject
{
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray *_dups;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)acquireTokenForIdentifier:(unsigned long long)arg1;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;

@end

