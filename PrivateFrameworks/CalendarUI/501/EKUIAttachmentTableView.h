//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView
{
    EKUIAttachmentGadget *_controller;
}

@property __weak EKUIAttachmentGadget *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (BOOL)canBecomeKeyView;
- (id)initWithController:(id)arg1;

@end

