//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVPrintTemplateWindowController.h"

@class NSCache, NSView, NVPrintMapView;

__attribute__((visibility("hidden")))
@interface NVPrintMapWindowController : NVPrintTemplateWindowController
{
    NVPrintMapView *_mapView1;
    NVPrintMapView *_mapView2;
    NSCache *_snapshotCache;
    BOOL _exportAsPdf;
    long long _orientation;
    NSView *_mapContainer;
    CDStruct_02837cd9 _enclosingMapRect;
}

@property(readonly, nonatomic) NSCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;
@property(readonly, nonatomic) CDStruct_02837cd9 enclosingMapRect; // @synthesize enclosingMapRect=_enclosingMapRect;
@property(nonatomic) __weak NSView *mapContainer; // @synthesize mapContainer=_mapContainer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL exportAsPdf; // @synthesize exportAsPdf=_exportAsPdf;
- (void).cxx_destruct;
- (BOOL)mapViewShouldFollowCurrentViewport:(id)arg1;
- (void)relayout;
- (void)fetchPreviewDataWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)waitForSnapshots;
@property(readonly, nonatomic) NVPrintMapView *mapView2;
@property(readonly, nonatomic) NVPrintMapView *mapView1;
- (id)windowNibName;
- (void)setWindowFrame:(struct CGRect)arg1 pageViewFrame:(struct CGRect)arg2;
- (id)initWithMainController:(id)arg1;

@end

