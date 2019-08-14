//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding>
{
    BOOL _changesTruncated;
    BOOL _unifyResults;
    CNChangeHistoryAnchor *_latestChangeAnchor;
    NSArray *_contactChanges;
    NSArray *_groupChanges;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property(retain, nonatomic) NSArray *groupChanges; // @synthesize groupChanges=_groupChanges;
@property(retain, nonatomic) NSArray *contactChanges; // @synthesize contactChanges=_contactChanges;
@property(retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor; // @synthesize latestChangeAnchor=_latestChangeAnchor;
@property(nonatomic) BOOL changesTruncated; // @synthesize changesTruncated=_changesTruncated;
- (void).cxx_destruct;
- (BOOL)enumerateGroupChangesFromContactStore:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)isDeleteChange:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

