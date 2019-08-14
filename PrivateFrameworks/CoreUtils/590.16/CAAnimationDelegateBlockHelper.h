//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _animationDidStartBlock;
    CDUnknownBlockType _animationDidStopBlock;
}

@property(copy, nonatomic) CDUnknownBlockType animationDidStopBlock; // @synthesize animationDidStopBlock=_animationDidStopBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidStartBlock; // @synthesize animationDidStartBlock=_animationDidStartBlock;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

