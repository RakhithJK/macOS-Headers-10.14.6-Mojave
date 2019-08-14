//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/MKOverlay-Protocol.h>
#import <PlacesKit/PXPlacesMapRenderable-Protocol.h>

@class NSOrderedSet, NSString;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapDotsOverlay : NSObject <MKOverlay, PXPlacesMapRenderable>
{
    NSOrderedSet *geotaggables;
    long long index;
    id <PXPlacesMapSelectionHandler> selectionHandler;
    id <PXPlacesMapRenderer> _renderer;
    struct CLLocationCoordinate2D _coordinate;
    CDStruct_02837cd9 _boundingMapRect;
}

@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property __weak id <PXPlacesMapRenderer> renderer; // @synthesize renderer=_renderer;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler;
@property(nonatomic) long long index; // @synthesize index;
@property(retain) NSOrderedSet *geotaggables; // @synthesize geotaggables;
- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 boundingMapRect:(CDStruct_02837cd9)arg2 renderer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

