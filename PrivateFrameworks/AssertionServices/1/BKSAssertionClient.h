//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAssertionClientMultiplexer, BKSProcessAssertionClient, BKSTerminationAssertionClient;

__attribute__((visibility("hidden")))
@interface BKSAssertionClient : NSObject
{
    BKSAssertionClientMultiplexer *_multiplexer;
    BKSProcessAssertionClient *_processAssertionClient;
    BKSTerminationAssertionClient *_terminationAssertionClient;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BKSAssertionClientMultiplexer *multiplexer;
@property(readonly, nonatomic) BKSTerminationAssertionClient *terminationAssertionClient;
@property(readonly, nonatomic) BKSProcessAssertionClient *processAssertionClient;
- (void)dealloc;
- (id)init;

@end
