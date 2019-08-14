//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/SAFrameIterator-Protocol.h>

@class NSArray, NSString, SAFrame, SAKernelFrame, SAKernelLeafFrame, SALeafFrame, SASharedCache;

__attribute__((visibility("hidden")))
@interface SAFrameKPerfIterator : NSObject <SAFrameIterator>
{
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    BOOL _hideKernelFrames;
    BOOL _hideUserFrames;
    unsigned int _numUserFrames;
    unsigned int _numKernelFrames;
    NSArray *_userBinaryLoadInfos;
    NSArray *_kernelBinaryLoadInfos;
    SASharedCache *_sharedCache;
    const unsigned long long *_userFrames;
    const unsigned long long *_kernelFrames;
    unsigned long long _continuation;
}

@property unsigned long long continuation; // @synthesize continuation=_continuation;
@property unsigned int numKernelFrames; // @synthesize numKernelFrames=_numKernelFrames;
@property const unsigned long long *kernelFrames; // @synthesize kernelFrames=_kernelFrames;
@property unsigned int numUserFrames; // @synthesize numUserFrames=_numUserFrames;
@property const unsigned long long *userFrames; // @synthesize userFrames=_userFrames;
@property(retain) SASharedCache *sharedCache; // @synthesize sharedCache=_sharedCache;
@property(retain) NSArray *kernelBinaryLoadInfos; // @synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos;
@property(retain) NSArray *userBinaryLoadInfos; // @synthesize userBinaryLoadInfos=_userBinaryLoadInfos;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)hasKernelStack;
- (BOOL)hasUserStack;
- (void)clearTaskData;
- (void)clearThreadData;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

