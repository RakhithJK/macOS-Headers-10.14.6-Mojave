//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock;

@interface FCOnce : NSObject
{
    BOOL _finished;
    NFUnfairLock *_lock;
}

@property(retain, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void)executeOnce:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

