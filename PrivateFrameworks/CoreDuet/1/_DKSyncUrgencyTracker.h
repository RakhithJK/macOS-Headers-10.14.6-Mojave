//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject
{
    unsigned long long _urgency;
    NSMutableDictionary *_urgencies;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)recomputeUrgency;
- (void)ageUrgencies;
- (unsigned long long)urgencyForClient:(id)arg1;
- (unsigned long long)currentUrgency;
- (void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2;

@end

