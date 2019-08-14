//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

@protocol GEOTransitLine <NSObject>
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) BOOL showVehicleNumber;
@property(readonly, nonatomic) NSString *lineColorString;
@property(readonly, nonatomic) BOOL hasLineColorString;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> alternateArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> modeArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) id <GEOTransitSystem> system;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
@end

