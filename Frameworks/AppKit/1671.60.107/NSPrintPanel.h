//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPrintInfo, NSString, NSView, NSWindowController;

@interface NSPrintPanel : NSObject
{
    NSMutableArray *_accessoryControllers;
    id _previewController;
    NSView *_thumbnailView;
    long long _options;
    NSString *_defaultButtonTitle;
    NSString *_helpAnchor;
    NSString *_jobStyleHint;
    NSPrintInfo *_originalPrintInfo;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
    NSPrintInfo *_presentedPrintInfo;
    NSWindowController *_windowController;
}

+ (id)printPanel;
@property(readonly) NSPrintInfo *printInfo;
- (long long)runModal;
- (long long)runModalWithPrintInfo:(id)arg1;
- (void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (unsigned int)_optionsForShowingAsSheet:(BOOL)arg1;
@property(copy) NSString *jobStyleHint;
@property(copy) NSString *helpAnchor;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)arg1;
@property unsigned long long options;
@property(readonly, copy) NSArray *accessoryControllers;
- (void)removeAccessoryController:(id)arg1;
- (void)addAccessoryController:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_thumbnailView;
- (void)_setThumbnailView:(id)arg1;
- (long long)_runModalWithPrintInfo:(id)arg1;
- (void)_setPreviewController:(id)arg1;
- (void)finalWritePrintInfo;
- (void)updateFromPrintInfo;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void)_deprecatedFinalWritePrintInfo;
- (void)_deprecatedUpdateFromPrintInfo;
- (id)_deprecatedAccessoryView;
- (void)_deprecatedSetAccessoryView:(id)arg1;
- (void)pickedLayoutList:(id)arg1;
- (void)pickedButton:(id)arg1;
- (void)pickedAllPages:(id)arg1;

@end

