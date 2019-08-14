//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SAMountStatus : NSObject
{
    NSMutableArray *_snapshots;
    NSString *_path;
    NSString *_type;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_b403be1b *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSArray *snapshots; // @synthesize snapshots=_snapshots;
- (void).cxx_destruct;
- (id)copySanitizedName;
- (id)copyName;
- (BOOL)isUnresponsiveBetweenStartTime:(id)arg1 andEndTime:(id)arg2;
- (BOOL)isBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 andEndTime:(id)arg3;
- (void)enumerateSnapshotsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addStatus:(struct netfs_status *)arg1 atTimestamp:(id)arg2;
- (id)initWithName:(id)arg1 andType:(id)arg2;
- (void)applyMachTimebase:(struct mach_timebase_info)arg1;
- (void)populateReferencesUsingPAStyleSerializedMountStatus:(const CDStruct_85cfeace *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_b403be1b *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_b403be1b *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end

