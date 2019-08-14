//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray;

@interface CPFrameLimitsEditor : NSView
{
    NSMutableArray *mValues;
    NSMutableArray *mLastValueStrings;
}

- (BOOL)anyValueDidChange;
- (void)setFrameLimitsFromArray:(id)arg1;
- (id)frameLimitsAsArray;
- (BOOL)valueDidChange:(long long)arg1;
- (double)value:(long long)arg1;
- (void)setValue:(long long)arg1 to:(double)arg2;
- (id)itemForValue:(long long)arg1;
- (long long)numberOfValues;
- (void)update:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (void)updateIfAnyValueChanged;
- (void)updateScale:(id)arg1;
- (void)editScale:(id)arg1;
- (BOOL)canEditScale:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

