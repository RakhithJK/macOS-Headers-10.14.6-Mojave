//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class ENGroupID, NSArray, NSData, NSSet, _ENGroupInfo;
@protocol ENCypher;

@interface ENGroup : NSObject <NSSecureCoding>
{
    ENGroupID *_groupID;
    id <ENCypher> _cypher;
    _ENGroupInfo *_groupInfo;
}

+ (id)sortedGroupsFromGroups:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _ENGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) id <ENCypher> cypher; // @synthesize cypher=_cypher;
@property(readonly, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *sharedApplicationData;
@property(readonly, nonatomic) NSArray *participants;
- (id)accountIdentity;
- (id)description;
@property(readonly, nonatomic) NSSet *destinations;
- (id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;
- (id)signAndConcealData:(id)arg1 cypherIdentifier:(id *)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3;

@end

