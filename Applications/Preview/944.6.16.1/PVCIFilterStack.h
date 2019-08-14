//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, PVImageElement;

@interface PVCIFilterStack : NSObject <NSCopying>
{
    PVImageElement *_imageElem;
    NSMutableDictionary *_filterSettings;
    NSArray *_rawFilters_og;
    double _temp_og;
    double _tint_og;
    NSArray *_cached_raw;
    NSArray *_cached_nonRaw;
}

+ (long long)orderOfFilterClass:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL raw;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (double)defaultFilterValueFor:(id)arg1;
- (void)removeAll;
- (BOOL)isDirty;
- (BOOL)hasFilters;
- (id)filtersArrayRAWOriginal;
- (id)filtersArrayRAW;
- (id)filtersArrayNonRAW;
- (id)filtersArray;
- (void)_buildCachedFilterArrays;
- (void)_invalidateCachedFilterArrays;
- (id)filterDict;
- (void)setFilterSettingsFromData:(id)arg1;
- (id)filterSettingsData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithC3DElement:(id)arg1;
- (id)initWithImageElement:(id)arg1;

@end
