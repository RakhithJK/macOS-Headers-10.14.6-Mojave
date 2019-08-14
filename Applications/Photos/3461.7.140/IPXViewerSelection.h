//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSArray;

@interface IPXViewerSelection : NSObject <NSFastEnumeration>
{
    NSArray *_items;
    unsigned long long _primaryIndex;
}

@property(readonly) unsigned long long primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (BOOL)containsItem:(id)arg1;
- (id)selectionWithPrimaryIndex:(unsigned long long)arg1;
- (id)selectionWithPrimaryItem:(id)arg1;
- (id)selectionByFilteringItems:(CDUnknownBlockType)arg1;
- (id)selectionByMappingItems:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToSelection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
@property(readonly) id anyItem;
@property(readonly) id lastItem;
@property(readonly) id firstItem;
@property(readonly) id primaryItem;
@property(readonly) BOOL hasFocus;
@property(readonly) BOOL isSingle;
@property(readonly) BOOL isMultiple;
@property(readonly) BOOL hasPrimary;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned long long count;
- (id)initWithItems:(id)arg1 primaryIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 primaryItem:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)init;

@end
