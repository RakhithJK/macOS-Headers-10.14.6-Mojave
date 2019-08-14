//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CPPointSetDialog, CPViewController, EInterpolator, GPointSet;

@interface CPPointSetEditorView : NSView
{
    CPPointSetDialog *mPointSetDialog;
    GPointSet *mPointSet;
    CPViewController *mViewController;
    EInterpolator *_interpolatorController;
}

- (long long)maximumHeight;
- (long long)minimumHeight;
- (long long)desiredHeight;
- (void)prepareToGoOffscreen;
- (void)interpolation:(id)arg1;
- (void)editPointSet:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setPointSet:(id)arg1;
- (void)dealloc;

@end
