//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDContentAnimationTiming-Protocol.h>

@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>
{
}

+ (id)animation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;
- (BOOL)i_canProduceAnimation;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

