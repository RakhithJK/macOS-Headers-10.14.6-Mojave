//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSData, NSError, NSString, NSURL;

@interface CKAssetRereferenceInfo : NSObject
{
    CKRecordZoneID *_sourceZoneID;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSData *_assetKey;
    NSData *_referenceSignature;
    NSString *_downloadToken;
    unsigned long long _downloadTokenExpiration;
    NSError *_error;
    NSString *_destinationFieldName;
}

@property(retain, nonatomic) NSString *destinationFieldName; // @synthesize destinationFieldName=_destinationFieldName;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property(retain, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(retain, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
- (void).cxx_destruct;
- (BOOL)validateAndSetRecordFetchPropertiesWithAsset:(id)arg1 assetReference:(id)arg2;
- (void)clearRecordFetchProperties;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)initWithSourceZoneID:(id)arg1;

@end

