//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTableViewItem.h"

@class NSArray;

@interface TOutlineViewItem : TTableViewItem
{
    struct TNSRef<NSMutableArray, void> _children;
    _Bool _isLeaf;
}

@property _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)flattenedChildren;
@property(readonly, retain, nonatomic) NSArray *children; // @dynamic children;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

