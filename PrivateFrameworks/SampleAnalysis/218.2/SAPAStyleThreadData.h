//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SAThreadState;

__attribute__((visibility("hidden")))
@interface SAPAStyleThreadData : NSObject
{
    BOOL _isGlobalForcedIdle;
    SAThreadState *_threadState;
    unsigned long long _threadId;
    unsigned long long _dispatchQueueId;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_f92c3047 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property BOOL isGlobalForcedIdle; // @synthesize isGlobalForcedIdle=_isGlobalForcedIdle;
@property unsigned long long dispatchQueueId; // @synthesize dispatchQueueId=_dispatchQueueId;
@property unsigned long long threadId; // @synthesize threadId=_threadId;
@property(retain) SAThreadState *threadState; // @synthesize threadState=_threadState;
- (void).cxx_destruct;
- (void)populateReferencesUsingBuffer:(const CDStruct_f92c3047 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;

@end

