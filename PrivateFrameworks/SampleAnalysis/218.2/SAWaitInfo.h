//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSString;

@interface SAWaitInfo : NSObject <SASerializable>
{
    int _type;
    unsigned long long _owner;
    unsigned long long _context;
}

+ (id)waitInfoWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;
+ (id)stateWithPAStyleSerializedWaitInfo:(const CDStruct_33dcf794 *)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_b403be1b *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(readonly) unsigned long long context; // @synthesize context=_context;
@property(readonly) unsigned long long owner; // @synthesize owner=_owner;
@property(readonly) int type; // @synthesize type=_type;
- (id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(CDUnknownBlockType)arg4;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)matchesKCDataWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)displaysSameContentAs:(id)arg1 withDisplayOptions:(unsigned long long)arg2;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo *)arg1;
- (void)populateReferencesUsingBuffer:(const void *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_b403be1b *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

