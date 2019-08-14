//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/SGTWindowEffect.h>

#import <Suggestions/NSAnimationDelegate-Protocol.h>

@class NSArray, NSString, SGTWindowAnimation;

__attribute__((visibility("hidden")))
@interface SGTAnimationWindowEffect : SGTWindowEffect <NSAnimationDelegate>
{
    unsigned int _windowID;
    unsigned int _cid;
    SGTWindowAnimation *_animation;
    NSArray *_subEffects;
    BOOL _mainEffect;
    BOOL _inverted;
}

@property(retain) NSArray *subEffects; // @synthesize subEffects=_subEffects;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)arg1;
- (id)subEffectWithID:(unsigned int)arg1;
- (void)setValue:(float)arg1;
@property BOOL inverted;
@property float progress;
- (void)_setProgress:(float)arg1;
@property(readonly) double additionalDuration;
- (void)done;
- (void)invertWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)abort;
- (BOOL)stop;
- (void)invoke;
- (id)prepare;
- (id)initWithWindow:(id)arg1 animation:(id)arg2;
@property(retain) SGTWindowAnimation *animation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

