//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SASerializable-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface SADispatchQueue : NSObject <SASerializable>
{
    NSMutableArray *_dispatchQueueStates;
    BOOL _isConcurrent;
    unsigned long long _dispatchQueueId;
}

+ (id)dispatchQueueWithId:(unsigned long long)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_0eb10942 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property BOOL isConcurrent; // @synthesize isConcurrent=_isConcurrent;
@property(readonly) unsigned long long dispatchQueueId; // @synthesize dispatchQueueId=_dispatchQueueId;
@property(readonly) NSArray *dispatchQueueStates; // @synthesize dispatchQueueStates=_dispatchQueueStates;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)lastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (unsigned long long)indexOfLastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (id)firstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (unsigned long long)indexOfFirstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2;
- (void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(CDUnknownBlockType)arg5;
- (unsigned long long)addStates:(id)arg1;
- (unsigned long long)addState:(id)arg1;
- (id)initWithId:(unsigned long long)arg1;
- (void)paDeserializationAppendState:(id)arg1;
- (void)populateReferencesUsingBuffer:(const CDStruct_0eb10942 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_0eb10942 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

