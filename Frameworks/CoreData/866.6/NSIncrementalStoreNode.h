//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject
{
    NSManagedObjectID *_objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void *_reserved1;
}

+ (void)initialize;
- (id)valueForPropertyDescription:(id)arg1;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
- (void)updateFromSQLRow:(id)arg1;
- (void)updateWithValues:(id)arg1 version:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3;
- (id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2;
- (id)_propertyCache;

@end
