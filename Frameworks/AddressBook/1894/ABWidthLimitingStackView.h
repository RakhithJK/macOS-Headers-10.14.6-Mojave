//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSArray;

@interface ABWidthLimitingStackView : NSStackView
{
    NSArray *_constraints;
}

- (void)enumerateEachPairOfViews:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)layoutLine:(id)arg1;
- (id)layoutLines:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;

@end

