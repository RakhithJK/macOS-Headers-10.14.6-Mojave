//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSString;

@interface SPInfoDisk : NSObject
{
    NSArray *_volumes;
    BOOL _isInternal;
    BOOL _isSolidState;
    BOOL _isOnboardFlash;
    BOOL _isRAID;
    BOOL _isHybrid;
    BOOL _hasBootVolume;
    BOOL _hasUserVolume;
    NSBundle *_bundle;
    NSString *_model;
    NSString *_protocol;
    long long _bytesCapacity;
}

+ (id)diskList;
@property BOOL hasUserVolume; // @synthesize hasUserVolume=_hasUserVolume;
@property BOOL hasBootVolume; // @synthesize hasBootVolume=_hasBootVolume;
@property BOOL isHybrid; // @synthesize isHybrid=_isHybrid;
@property BOOL isRAID; // @synthesize isRAID=_isRAID;
@property BOOL isOnboardFlash; // @synthesize isOnboardFlash=_isOnboardFlash;
@property BOOL isSolidState; // @synthesize isSolidState=_isSolidState;
@property BOOL isInternal; // @synthesize isInternal=_isInternal;
@property long long bytesCapacity; // @synthesize bytesCapacity=_bytesCapacity;
@property(retain) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain) NSString *model; // @synthesize model=_model;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void)dealloc;
- (id)displayName;
@property(retain, nonatomic) NSArray *volumes;
- (id)initWithDiskVolumes:(id)arg1;

@end
