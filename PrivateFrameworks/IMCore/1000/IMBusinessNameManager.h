//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_pendingRequests;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)businessNameForUID:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

