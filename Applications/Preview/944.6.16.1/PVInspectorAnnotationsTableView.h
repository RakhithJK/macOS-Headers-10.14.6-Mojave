//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSArrayController;

@interface PVInspectorAnnotationsTableView : NSTableView
{
    NSArrayController *_tableContentController;
}

- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)sizeTableHeaderCellsToFit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
