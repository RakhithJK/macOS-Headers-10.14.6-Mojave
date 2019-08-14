//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _fetchNewestChangesFirst;
    BOOL _fetchChangesMadeByThisDevice;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL fetchChangesMadeByThisDevice; // @synthesize fetchChangesMadeByThisDevice=_fetchChangesMadeByThisDevice;
@property(nonatomic) BOOL fetchNewestChangesFirst; // @synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)zoneConfiguration;
- (id)initWithZoneConfiguration:(id)arg1;
- (id)init;

@end

