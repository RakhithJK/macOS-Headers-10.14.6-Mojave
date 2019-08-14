//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MediaIOGraphNodeDescription : NSObject
{
    struct OpaqueCMIOGraph *_graph;
    int _graphNode;
}

+ (id)nodeDescriptionWithGraphNode:(int)arg1 graph:(struct OpaqueCMIOGraph *)arg2;
@property(readonly) unsigned int nodeIndex;
@property(readonly) unsigned int nodeFunctionalDesignation;
@property(readonly) struct OpaqueCMIOUnit *unit;
@property(readonly) int node;
@property(readonly) struct OpaqueCMIOGraph *graph;
- (void)dealloc;
- (id)initWithNode:(int)arg1 graph:(struct OpaqueCMIOGraph *)arg2;

@end
