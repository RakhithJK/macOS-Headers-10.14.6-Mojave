//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ISDRecordIdMap : NSObject
{
    NSString *_localId;
    NSString *_globalId;
    int _entityNumber;
}

- (id)fastGlobalId;
- (id)fastLocalId;
- (id)fastEntityName;
- (int)entityNumber;
- (void)setEntityName:(id)arg1;
- (id)entityName;
- (void)setGlobalId:(id)arg1;
- (id)globalId;
- (void)setLocalId:(id)arg1;
- (id)localId;
- (id)description;
- (void)dealloc;
- (int)isd_quickDirtyCoderType;
- (void)encodeWithQuickDirtyCoder:(id)arg1;
- (id)initWithQuickDirtyCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)checkInvariant;

@end

