//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol NUNode;

@protocol NUNode <NSObject>
@property(readonly, nonatomic) NSArray *subnodes;
@property(readonly, nonatomic) __weak id <NUNode> supernode;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
- (void)resolveViewsInView:(UIView *)arg1;
- (void)removeFromSupernode;
- (void)addSubnode:(id <NUNode>)arg1;
@end

