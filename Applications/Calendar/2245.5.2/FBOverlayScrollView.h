//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class CalFreeBusyPanel;

@interface FBOverlayScrollView : NSScrollView
{
    CalFreeBusyPanel *_fbPanel;
}

@property(retain) CalFreeBusyPanel *fbPanel; // @synthesize fbPanel=_fbPanel;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)_setHorizontalScrollerHidden:(BOOL)arg1;

@end

