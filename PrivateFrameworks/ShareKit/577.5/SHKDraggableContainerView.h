//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol SHKClientWindowSyncDelegate;

@interface SHKDraggableContainerView : NSView
{
    id <SHKClientWindowSyncDelegate> _delegate;
}

@property __weak id <SHKClientWindowSyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;

@end

