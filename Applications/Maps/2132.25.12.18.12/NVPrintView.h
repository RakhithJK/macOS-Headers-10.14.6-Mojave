//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSPrintInfo, NVMainWindowController, NVPrintDetailsWindowController, NVPrintMapWindowController, NVPrintPanelAccessoryViewController;

__attribute__((visibility("hidden")))
@interface NVPrintView : NSView
{
    BOOL feasible;
    NVPrintPanelAccessoryViewController *_accessoryController;
    BOOL _minimapOptionChanged;
    CDUnknownBlockType _completion;
    int _debugCount;
    unsigned long long _currentPage;
    NSMutableArray *_ranges;
    NVPrintMapWindowController *_mapController;
    NVPrintDetailsWindowController *_detailsController;
    NVMainWindowController *_mainWindowController;
    NSPrintInfo *_currentPrintInfo;
}

@property(nonatomic) int debugCount; // @synthesize debugCount=_debugCount;
@property(retain, nonatomic) NSPrintInfo *currentPrintInfo; // @synthesize currentPrintInfo=_currentPrintInfo;
@property(nonatomic) __weak NVMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property(retain, nonatomic) NVPrintDetailsWindowController *detailsController; // @synthesize detailsController=_detailsController;
@property(retain, nonatomic) NVPrintMapWindowController *mapController; // @synthesize mapController=_mapController;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (void)_setupViewControllersForCurrentPrintOperation;
- (BOOL)equalsPrintInfo1:(id)arg1 printInfo2:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)calculateRanges;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupRangesForDetailsPage:(unsigned long long)arg1;
- (struct _NSRange)rangeWithStart:(unsigned long long)arg1 stop:(unsigned long long)arg2;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)print:(id)arg1 exportAsPdf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)hasBigMaps;
@property(readonly, nonatomic) BOOL hasDetails;
@property(readonly, nonatomic) unsigned long long printType;
- (id)initWithMainWindowController:(id)arg1;

@end
