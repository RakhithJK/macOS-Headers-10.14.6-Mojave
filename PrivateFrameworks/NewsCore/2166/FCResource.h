//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, FCInterestToken, NSString, NSURL, NTPBResourceRecord;

@interface FCResource : NSObject
{
    NSString *_resourceID;
    FCAssetHandle *_assetHandle;
    NTPBResourceRecord *_resourceRecord;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBResourceRecord *resourceRecord; // @synthesize resourceRecord=_resourceRecord;
@property(readonly, nonatomic) FCAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
@property(readonly, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnDisk) BOOL onDisk;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3;
- (id)initWithResourceID:(id)arg1 assetHandle:(id)arg2;

@end

