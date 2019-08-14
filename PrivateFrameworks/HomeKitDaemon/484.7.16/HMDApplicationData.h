//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>
{
    NSUUID *_parentUUID;
    NSUUID *_uuid;
    NSMutableDictionary *_appDataDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *appDataDictionary; // @synthesize appDataDictionary=_appDataDictionary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (void).cxx_destruct;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateParentUUIDIfNil:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)dumpState;
- (id)dictionary;
- (void)removeApplicationDataForIdentifier:(id)arg1;
- (id)applicationDataForIdentifier:(id)arg1;
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;
- (id)initWithParentUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

