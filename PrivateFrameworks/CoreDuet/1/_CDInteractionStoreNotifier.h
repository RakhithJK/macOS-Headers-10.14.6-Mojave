//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject
{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)deleted;
- (void)recorded:(id)arg1;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end
