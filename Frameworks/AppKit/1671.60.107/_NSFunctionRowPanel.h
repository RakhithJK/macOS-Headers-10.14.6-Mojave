//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSFunctionRow;

__attribute__((visibility("hidden")))
@interface _NSFunctionRowPanel : NSPanel
{
    NSFunctionRow *_functionRow;
}

+ (BOOL)_hiddenInWindowList;
- (void).cxx_destruct;
- (id)_dumpLayer;
- (void)dealloc;
- (id)initWithFunctionRow:(id)arg1;
- (BOOL)_isFunctionRowWindow;
- (double)backingScaleFactor;
- (id)colorSpace;
- (BOOL)isVisible;
- (BOOL)_isEffectivelyVisible;
- (BOOL)allowsFontSmoothing;
- (BOOL)hasKeyAppearance;
- (BOOL)worksWhenModal;
- (BOOL)_shouldDoLayerPerformanceUpdates;
@property(readonly) NSFunctionRow *functionRow;

@end

