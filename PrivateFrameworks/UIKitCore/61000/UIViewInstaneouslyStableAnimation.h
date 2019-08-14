//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIIntervalAnimating-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating>
{
    id <UIVectorOperatable> _velocity;
    id <UIVectorOperatable> _targetValue;
}

@property(retain, nonatomic) id <UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
- (void).cxx_destruct;
- (BOOL)isStable;
- (id)value;
- (void)setVelocity:(id)arg1;
- (id)velocity;
- (id)stepWithDelta:(double)arg1;
- (id)initWithTargetValue:(id)arg1 velocity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

