//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapsSupport/GEOTransitLine-Protocol.h>

@class GEOMapRegion, NSArray;
@protocol GEOEncyclopedicInfo, GEOTransitAttribution;

@protocol GEOTransitLineItem <GEOTransitLine>
@property(readonly, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property(readonly, nonatomic) BOOL hasIncidentComponent;
@property(readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) id <GEOTransitAttribution> attribution;
@property(readonly, nonatomic) NSArray *labelItems;
@end

