//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject
{
    BOOL _transitionInProgress;
    BOOL _layoutInProgress;
    NSHashTable *_candidates;
}

@property(nonatomic) BOOL layoutInProgress; // @synthesize layoutInProgress=_layoutInProgress;
@property(nonatomic) BOOL transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(readonly, nonatomic) NSHashTable *candidates; // @synthesize candidates=_candidates;
- (void).cxx_destruct;
- (void)didLayoutForSize:(struct CGSize)arg1;
- (void)didTransitionToSize:(struct CGSize)arg1;
- (void)willLayoutAndTransitionToSize:(struct CGSize)arg1;
- (void)enterFullscreenIfNeeded;
- (void)removeCandidate:(id)arg1;
- (void)addCandidate:(id)arg1;
- (id)init;

@end

