//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;
@protocol ViewReuseManagerDelegate;

__attribute__((visibility("hidden")))
@interface ViewReuseManager : NSObject
{
    NSMutableArray *_trackedViews;
    NSMutableSet *_reusableViews;
    NSMutableSet *_viewsPendingRecycling;
    long long _firstPreviouslyVisibleRepresentedObjectIndex;
    BOOL _alwaysSendPrepareForReuse;
    Class _reusableViewClass;
    id <ViewReuseManagerDelegate> _delegate;
}

@property(readonly, copy, nonatomic) NSArray *trackedViews; // @synthesize trackedViews=_trackedViews;
@property(nonatomic) BOOL alwaysSendPrepareForReuse; // @synthesize alwaysSendPrepareForReuse=_alwaysSendPrepareForReuse;
@property(nonatomic) __weak id <ViewReuseManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Class reusableViewClass; // @synthesize reusableViewClass=_reusableViewClass;
- (void).cxx_destruct;
- (void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned long long)arg1;
- (void)_recycleView:(id)arg1;
- (void)_recycleViewsInCollection:(id)arg1;
- (void)updateTrackedViewsForRepresentedObjectsInRange:(struct _NSRange)arg1;
- (void)recycleView:(id)arg1;
- (id)makeView;
- (void)updateTrackedViewsToMatchArray:(id)arg1;
- (void)removeViewFromTrackedViews:(id)arg1;
- (void)insertView:(id)arg1 inTrackedViewsAtRepresentedObjectsIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithReusableViewClass:(Class)arg1;
- (id)init;

@end

