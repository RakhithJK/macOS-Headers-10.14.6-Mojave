//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrubberContainerView;

__attribute__((visibility("hidden")))
@interface NSScrubberSelectionPair : NSObject
{
    long long _itemIndex;
    NSScrubberContainerView *_backgroundView;
    NSScrubberContainerView *_overlayView;
    BOOL _containsCustomViews;
}

@property(retain) NSScrubberContainerView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain) NSScrubberContainerView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property BOOL containsCustomViews; // @synthesize containsCustomViews=_containsCustomViews;
@property long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (void)_forEachContainer:(CDUnknownBlockType)arg1;
- (void)setContainerAlphaValue:(double)arg1;
- (void)applyLayoutAttributes:(id)arg1 relativeToContentView:(id)arg2;
- (id)currentSuperview;
- (BOOL)isSubviewOfSuperview:(id)arg1;
- (void)removeFromViewHierarchy;
- (void)addToSuperview:(id)arg1 initiallyVisible:(BOOL)arg2;
@property(readonly) double preferredItemCornerRadius;
- (void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithBackgroundView:(id)arg1 overlayView:(id)arg2;
- (id)init;

@end
