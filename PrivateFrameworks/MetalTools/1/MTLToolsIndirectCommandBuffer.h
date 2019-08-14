//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLToolsResource.h>

#import <MetalTools/MTLIndirectCommandBufferSPI-Protocol.h>

@class MTLToolsPointerArray, NSString;
@protocol MTLDevice, MTLHeap;

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI>
{
    MTLToolsPointerArray *_indirectRenderCommand;
}

@property(readonly, nonatomic) MTLToolsPointerArray *indirectRenderCommand; // @synthesize indirectRenderCommand=_indirectRenderCommand;
@property(readonly) unsigned long long uniqueIdentifier;
- (void)resetWithRange:(struct _NSRange)arg1;
- (void)getHeader:(void **)arg1 headerSize:(unsigned long long *)arg2;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) id <MTLHeap> heap;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

