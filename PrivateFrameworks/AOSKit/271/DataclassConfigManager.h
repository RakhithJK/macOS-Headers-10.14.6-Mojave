//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DataclassConfigManager : NSObject
{
    NSMutableDictionary *_info;
    long long _actionCount;
}

+ (id)sharedManager;
- (BOOL)_isLatestActionWithInfo:(id)arg1 andClientTimestamp:(id)arg2;
- (id)performAction:(long long)arg1 forDataclass:(id)arg2 andAccount:(struct AOSAccount *)arg3 withInfo:(id)arg4;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

