//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDContainedPlace, NSArray;
@protocol GEOMapItem;

@interface GEOMapItemContainedPlace : NSObject
{
    GEOPDContainedPlace *_containedPlace;
    id <GEOMapItem> _parent;
    NSArray *_children;
    NSArray *_siblings;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSArray *siblings;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) id <GEOMapItem> parent;
@property(readonly, nonatomic) unsigned long long parentFeatureId;
@property(readonly, nonatomic) unsigned long long featureId;
- (id)initWithContainedPlace:(id)arg1;
- (id)init;

@end

