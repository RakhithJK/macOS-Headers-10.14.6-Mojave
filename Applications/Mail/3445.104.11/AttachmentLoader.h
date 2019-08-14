//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class AttachmentViewController, MCActivityMonitor, MCAttachment, NSString, NSURL, NSWindow;

@interface AttachmentLoader : NSObject <MCActivityTarget>
{
    MCActivityMonitor *_activityMonitor;
    MCAttachment *_attachment;
    NSWindow *_window;
    AttachmentViewController *_attachmentController;
    unsigned long long _reason;
    NSString *_attachmentDirectory;
    NSURL *_applicationURL;
    NSString *_savePath;
}

+ (BOOL)loadAttachmentForSavingWithViewController:(id)arg1 window:(id)arg2 path:(id)arg3;
+ (BOOL)loadAttachmentForViewController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
+ (BOOL)loadAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
@property(readonly, copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(readonly, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(readonly, nonatomic) NSString *attachmentDirectory; // @synthesize attachmentDirectory=_attachmentDirectory;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) AttachmentViewController *attachmentController; // @synthesize attachmentController=_attachmentController;
@property(readonly, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain) MCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
- (void).cxx_destruct;
- (void)_startBackgroundThread;
- (void)_monitorQuit:(id)arg1;
- (void)_loadAttachmentData;
- (void)dealloc;
- (void)_attachmentLoaderCommonInitWithAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3;
- (id)_initWithAttachmentController:(id)arg1 window:(id)arg2 savePath:(id)arg3;
- (id)_initWithAttachmentController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 attachmentDirectory:(id)arg4 application:(id)arg5;
- (id)_initWithAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 attachmentDirectory:(id)arg4 application:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

