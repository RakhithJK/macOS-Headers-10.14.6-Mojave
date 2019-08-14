//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUUUIDSetStore;

@interface TSUUUIDSubsetCreator : NSObject
{
    TSUUUIDSetStore *_uuidSetStore;
    vector_4dc5f307 _baseUuidVector;
    NSMutableDictionary *_createdSubsetsByRange;
}

@property(readonly) TSUUUIDSetStore *uuidSetStore; // @synthesize uuidSetStore=_uuidSetStore;
@property(readonly) const vector_4dc5f307 *baseUuidVector; // @synthesize baseUuidVector=_baseUuidVector;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange)arg1;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector_4dc5f307 *)arg2;

@end

