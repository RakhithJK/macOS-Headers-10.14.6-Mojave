//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPHgPIDFile : NSObject
{
    NSString *_path;
    BOOL _locked;
    NSString *_lockedBy;
    long long _lockedByPid;
}

- (void).cxx_destruct;
- (long long)lockedByPid;
- (id)lockedBy;
- (void)removeLockIgnoreOwner:(BOOL)arg1;
- (int)acquireLock;
- (id)initWithURL:(id)arg1;

@end

