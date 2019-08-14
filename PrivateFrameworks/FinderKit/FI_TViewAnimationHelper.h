//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/CAAnimationDelegate-Protocol.h>

@class NSString, NSView;
@protocol CAAnimationDelegate;

__attribute__((visibility("hidden")))
@interface FI_TViewAnimationHelper : NSObject <CAAnimationDelegate>
{
    NSView *_view;
    NSObject<CAAnimationDelegate> *_delegate;
    _Bool _origWantsLayers;
}

+ (id)animationHelperWithView:(id)arg1;
@property id <CAAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain) NSView *view; // @synthesize view=_view;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setView:(id)arg1;
- (void)configureAnimations:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

