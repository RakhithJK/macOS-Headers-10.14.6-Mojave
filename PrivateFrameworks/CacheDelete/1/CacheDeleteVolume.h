//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CacheDeleteVolume : NSObject
{
    BOOL _isRoot;
    NSString *_fsType;
    NSString *_mountPoint;
    unsigned long long _initialFreespace;
}

+ (long long)stateForPath:(id)arg1;
+ (id)validateVolumeAtPath:(id)arg1;
+ (id)rootVolume;
+ (id)volumeWithMountpoint:(id)arg1;
+ (id)volumeWithPath:(id)arg1;
@property(readonly) unsigned long long initialFreespace; // @synthesize initialFreespace=_initialFreespace;
@property(readonly, nonatomic) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly, nonatomic) NSString *fsType; // @synthesize fsType=_fsType;
@property(readonly) BOOL isRoot; // @synthesize isRoot=_isRoot;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *thresholds;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPath:(id)arg1;
- (BOOL)validate;
@property(readonly, nonatomic) long long state; // @dynamic state;
- (unsigned long long)freespace;
- (unsigned long long)size;
- (unsigned long long)amountPurged;

@end

