//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssertionServices/BKSAssertion.h>

@class BKSTerminationContext, NSString;

@interface BKSTerminationAssertion : BKSAssertion
{
    NSString *_bundleIdentifier;
    unsigned long long _efficacy;
    BKSTerminationContext *_context;
}

- (id)_clientQueue_updateEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_createEvent;
@property(readonly, copy, nonatomic) BKSTerminationContext *context;
@property(readonly, copy, nonatomic) NSString *targetBundleIdentifier;
@property(readonly, nonatomic) unsigned long long efficacy;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

