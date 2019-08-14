//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTabViewDelegate-Protocol.h"

@class NSMutableArray, NSObjectController, NSString, NSTabView, NSView;

@interface PVInspectorImageMetaDataController : NSObject <NSTabViewDelegate>
{
    NSObjectController *_inspectedWindowController;
    NSObjectController *_metaData;
    NSTabView *_groupTab;
    NSTabView *_mainTab;
    NSView *_worldMap;
    NSMutableArray *_tableItems;
    double _latitude;
    double _longitude;
}

+ (void)initialize;
@property(readonly) NSMutableArray *tableItems; // @synthesize tableItems=_tableItems;
- (void).cxx_destruct;
- (void)switchToGPSTabIfPresent;
- (void)removeGPSData:(id)arg1;
- (void)locate:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)updateTableItems;
- (void)updateTabs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)customResizabilityOptions;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (void)updateGPS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

