//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBundle, NSButton, NSMutableDictionary, NSString, NSTextField, NSThread, NSTimer, SPInfoCapacityBarView, SPInfoDiskProfiler, SPInfoDiskVolume;

@interface SPInfoVolumeCell : NSView
{
    NSBundle *_bundle;
    NSTextField *_titleField;
    NSTextField *_capacityField;
    SPInfoCapacityBarView *_capacityBar;
    SPInfoCapacityBarView *_overlayBar;
    NSButton *_manageButton;
    SPInfoDiskProfiler *_profiler;
    NSThread *_statsThread;
    NSTimer *_freeSpaceTimer;
    int _updateCounter;
    BOOL _initTimerExpired;
    SPInfoDiskVolume *_volume;
    NSString *_prevLogStr;
    NSMutableDictionary *_extensionInfo;
}

+ (id)createViewForVolume:(id)arg1;
+ (id)loadEncryptedFromNib;
+ (id)loadFromNib;
+ (id)categoryColor:(id)arg1;
@property(retain) NSMutableDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(retain) NSString *prevLogStr; // @synthesize prevLogStr=_prevLogStr;
@property(retain, nonatomic) SPInfoDiskVolume *volume; // @synthesize volume=_volume;
- (void)logCatData:(id)arg1;
- (void)managePressed:(id)arg1;
- (void)scanDone:(id)arg1;
- (void)startProfiler;
- (void)startProfilerAux:(id)arg1;
- (void)extensionSizeChanged:(id)arg1;
- (void)updateExtensionValues:(id)arg1;
- (void)setCatData:(id)arg1;
- (id)catInfoForIdentifier:(id)arg1 name:(id)arg2 size:(long long)arg3 color:(id)arg4;
- (void)setupFreeSpaceTimer;
- (void)updateDiskSpace;
- (id)localizedString:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

