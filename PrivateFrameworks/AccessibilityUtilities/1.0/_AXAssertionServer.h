//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject
{
    CDUnknownBlockType _assertionWasAcquiredHandler;
    CDUnknownBlockType _assertionWasReleasedHandler;
    NSMutableDictionary *_heldAssertionMap;
}

@property(retain, nonatomic) NSMutableDictionary *heldAssertionMap; // @synthesize heldAssertionMap=_heldAssertionMap;
@property(copy, nonatomic) CDUnknownBlockType assertionWasReleasedHandler; // @synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler;
@property(copy, nonatomic) CDUnknownBlockType assertionWasAcquiredHandler; // @synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler;
- (void).cxx_destruct;
- (id)clientsHoldingAssertionOfType:(id)arg1;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id)description;
- (id)init;

@end

