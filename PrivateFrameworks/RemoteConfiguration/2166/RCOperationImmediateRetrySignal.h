//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationRetrySignal-Protocol.h>

@class NSString;

@interface RCOperationImmediateRetrySignal : NSObject <RCOperationRetrySignal>
{
}

@property(readonly, copy) NSString *description;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

