//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTreeNode;

__attribute__((visibility("hidden")))
@interface _NSTreeNodeChildNodesArrayProxy : NSObject
{
    NSTreeNode *_treeNode;
}

- (void)insertObjects:(id)arg1 inSubNodesAtIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (void)removeSubNodesAtIndexes:(id)arg1;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)getSubNodes:(id *)arg1 range:(struct _NSRange)arg2;
- (id)subNodesAtIndexes:(id)arg1;
- (id)objectInSubNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSubNodes;
- (id)initWithTreeNode:(id)arg1;

@end

