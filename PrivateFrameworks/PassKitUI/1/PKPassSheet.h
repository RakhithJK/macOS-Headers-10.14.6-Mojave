//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSWindow, PKPassWindowController;

@interface PKPassSheet : NSObject
{
    PKPassWindowController *_windowController;
    NSArray *_passes;
    NSWindow *_hostWindow;
    CDUnknownBlockType _completionHandler;
}

+ (id)sheetWithPass:(id)arg1 hostWindow:(id)arg2;
+ (id)sheetWithPasses:(id)arg1 hostWindow:(id)arg2;
+ (id)_sheets;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly) NSArray *passes; // @synthesize passes=_passes;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)showPass;
- (void)showPassWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPass:(id)arg1 hostWindow:(id)arg2;
- (void)dealloc;
- (id)initWithPasses:(id)arg1 hostWindow:(id)arg2;

@end

