//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PathPolicyManager : NSObject
{
    NSMutableDictionary *_pathToPathId;
    long long _nextPathId;
}

- (void)dealloc;
- (void)removeAllEntries;
- (id)pathIDForPath:(id)arg1 lookup:(BOOL)arg2;
- (id)init;

@end

