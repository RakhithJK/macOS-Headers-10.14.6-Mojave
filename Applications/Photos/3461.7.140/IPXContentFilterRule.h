//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiRidList, NSOperation, NSOperationQueue, NSString;

@interface IPXContentFilterRule : NSObject
{
    NSOperationQueue *_warmingQueue;
    NSOperation *_warmingOperation;
    LiRidList *_warmResults;
    CDUnknownBlockType _warmingBlockImp;
    long long _tag;
    long long _state;
    NSString *_uuid;
    id _representedObject;
    NSString *_localizableKey;
}

+ (id)newRuleFactoryForTag:(long long)arg1;
+ (Class)classForTag:(long long)arg1 locKey:(id *)arg2;
@property(retain) NSString *localizableKey; // @synthesize localizableKey=_localizableKey;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property long long state; // @synthesize state=_state;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)performQueryWarmingWithObjects:(id)arg1;
- (BOOL)supportsWarming;
- (CDUnknownBlockType)warmingBlock;
- (id)batchAcceptedItems:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)acceptItem:(id)arg1;
- (unsigned long long)ruleCategory;
- (unsigned long long)ruleType;
- (id)init;

@end
