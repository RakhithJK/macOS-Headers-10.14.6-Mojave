//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class NSMapTable;

@interface PVMultiActionSegmentedControl : NSSegmentedControl
{
    NSMapTable *_segmentToActionMap;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (SEL)actionForSegment:(long long)arg1;
- (void)setAction:(SEL)arg1 forSegment:(long long)arg2;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
