//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTTableDataObjectKeyDict : NSObject
{
    struct hash_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>>> *mMap;
}

- (unsigned long long)count;
- (void)removeAllKeys;
- (void)removeKeyForObject:(id)arg1;
- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;
- (unsigned int)keyForObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

