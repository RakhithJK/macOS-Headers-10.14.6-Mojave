//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUNode-Protocol.h>

@class NSMutableArray, NSString;
@protocol NUNode;

@interface NUNode : NSObject <NUNode>
{
    NSMutableArray *_subnodes;
    NSObject<NUNode> *_supernode;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property(nonatomic) __weak NSObject<NUNode> *supernode; // @synthesize supernode=_supernode;
@property(retain, nonatomic) NSMutableArray *subnodes; // @synthesize subnodes=_subnodes;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)resolveViewsInView:(id)arg1;
- (void)removeFromSupernode;
- (void)addSubnode:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

