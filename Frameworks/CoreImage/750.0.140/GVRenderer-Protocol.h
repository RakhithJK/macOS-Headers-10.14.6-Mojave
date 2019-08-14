//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/NSObject-Protocol.h>

@class GVEdge, GVNode, NSArray;

@protocol GVRenderer <NSObject>
- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GVNode *)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;

@optional
@property(readonly) BOOL drawEdgesFirst;
@property(readonly) struct CGSize separation;
@property(readonly) int direction;
@end

