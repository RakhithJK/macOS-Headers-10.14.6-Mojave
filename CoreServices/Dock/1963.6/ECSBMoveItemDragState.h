//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ECSBDragState.h"

@class ECSBItem;

@interface ECSBMoveItemDragState : ECSBDragState
{
    ECSBItem *_targetItem;
    unsigned long long _targetItemIndex;
}

@property(nonatomic) unsigned long long targetItemIndex; // @synthesize targetItemIndex=_targetItemIndex;
@property(retain, nonatomic) ECSBItem *targetItem; // @synthesize targetItem=_targetItem;
- (void).cxx_destruct;
- (void)endDrag:(id)arg1 withEvent:(id)arg2;
- (void)updateDataSource:(id)arg1;
- (void)cancelDrag:(id)arg1 animateSlideBack:(_Bool)arg2;
- (void)beginTransition;
- (long long)type;

@end

