//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFObjectObserver : HMFObject
{
    id _observedObject;
    CDUnknownBlockType _deallocationBlock;
    NSUUID *_identifier;
    unsigned long long _cachedHash;
}

@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
@property(readonly) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_startObserving;
- (id)observerKey;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1;
- (id)init;

@end

