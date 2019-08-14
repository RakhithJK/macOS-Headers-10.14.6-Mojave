//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenu, NSMenuItem, NSMutableArray, NSNumberFormatter, NSWindow, SMCPUInfo, SMCPUMonitor, SMDiskInfo, SMNetworkInfo, SMProcessController;

@interface SMBase : NSObject
{
    NSMenuItem *_showExtendedInIcon;
    NSMenuItem *_showStandardInIcon;
    NSMenuItem *_showNetworkInIcon;
    NSMenuItem *_showDiskInIcon;
    NSMenuItem *_showApplicationIcon;
    NSMenuItem *_showExtendedInIconDock;
    NSMenuItem *_showStandardInIconDock;
    NSMenuItem *_showNetworkInIconDock;
    NSMenuItem *_showDiskInIconDock;
    NSMenuItem *_showApplicationIconDock;
    NSMenu *_dockMenu;
    SMCPUMonitor *_cpuController;
    SMCPUInfo *_cpuInfo;
    SMNetworkInfo *_networkInfo;
    SMDiskInfo *_diskInfo;
    SMProcessController *_processController;
    NSWindow *_processWindow;
    NSNumberFormatter *_sizeFormatter;
    NSNumberFormatter *_bytesFormatter;
    NSNumberFormatter *_secondsFormatter;
    NSNumberFormatter *_minutesFormatter;
    NSMutableArray *_inArray;
    NSMutableArray *_outArray;
    int _dockIconType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)showDiskInDockIcon:(id)arg1;
- (void)showNetworkInDockIcon:(id)arg1;
- (void)showNothingInDockIcon:(id)arg1;
- (void)showStandardInDockIcon:(id)arg1;
- (void)showExtendedInDockIcon:(id)arg1;
- (void)selectDockMenu:(id)arg1;
- (void)selectMenu:(id)arg1;
- (void)updateDockIcon;
@property(readonly) int dockIconType; // @synthesize dockIconType=_dockIconType;
- (void)showDiskStats:(id)arg1;
- (void)showNetworkStats:(id)arg1;
- (void)showProcessWindow:(id)arg1;
- (void)clearHistory:(id)arg1;
- (BOOL)mainWindowIsVisible;
- (void)showStandardWindow:(id)arg1;
- (void)showExtendedWindow:(id)arg1;
- (id)descriptionForBytesPerSecond:(unsigned long long)arg1;
- (id)descriptionForSize:(id)arg1 delta:(id)arg2;
- (id)sizeDescriptionForSize:(unsigned long long)arg1;
- (id)descriptionForTimeInterval:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (id)locString:(id)arg1;

@end

