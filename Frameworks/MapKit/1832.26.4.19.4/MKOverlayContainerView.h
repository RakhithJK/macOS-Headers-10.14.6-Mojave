//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MKMapView, NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;
@protocol MKOverlayContainerViewDelegate;

@interface MKOverlayContainerView : NSView
{
    NSMutableOrderedSet *_overlays[2];
    NSMapTable *_overlayToDrawable[2];
    NSMutableArray *_drawables[2];
    NSMutableArray *_vkOverlays[2];
    id <MKOverlayContainerViewDelegate> _delegate;
    double _mapZoomScale;
    MKMapView *_mapView;
}

@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property(nonatomic) __weak id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties;
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;
- (void)_updateContentScale:(id)arg1;
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
@property(readonly, nonatomic) NSArray *allDrawables;
- (id)drawableForOverlay:(id)arg1;
- (id)overlaysInLevel:(long long)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (long long)_levelForOverlay:(id)arg1 exists:(char *)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addAndRemoveOverlayViews;
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_02837cd9)arg2 level:(long long)arg3;
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (CDStruct_02837cd9)_mapRectWithFractionOfVisible:(double)arg1;
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

