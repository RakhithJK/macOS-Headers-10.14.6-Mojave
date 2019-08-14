//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapSnapshot, NSImage, NSString, NVRoute, NVRouteStep, TransitDirectionsListItem;

__attribute__((visibility("hidden")))
@interface NVPrintStepCellData : NSObject
{
    NVRoute *_route;
    unsigned long long _index;
    unsigned long long _displayedIndex;
    NSImage *_roadSignImage;
    MKMapSnapshot *_snapshot;
    NSString *_title;
    NSString *_subtitle;
    NSString *_subsubtitle;
    NSImage *_distanceSignImage;
    TransitDirectionsListItem *_transitItem;
    NSString *_pinLabel;
}

@property(retain, nonatomic) NSString *pinLabel; // @synthesize pinLabel=_pinLabel;
@property(retain, nonatomic) TransitDirectionsListItem *transitItem; // @synthesize transitItem=_transitItem;
@property(retain, nonatomic) NSImage *distanceSignImage; // @synthesize distanceSignImage=_distanceSignImage;
@property(copy) NSString *subsubtitle; // @synthesize subsubtitle=_subsubtitle;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MKMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain) NSImage *roadSignImage; // @synthesize roadSignImage=_roadSignImage;
@property unsigned long long displayedIndex; // @synthesize displayedIndex=_displayedIndex;
@property unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initAsPinPlace:(id)arg1 index:(unsigned long long)arg2 pinLabel:(id)arg3;
@property(readonly, nonatomic) NVRouteStep *step;
- (id)initAsRouteStep:(id)arg1 index:(unsigned long long)arg2 displayedIndex:(unsigned long long)arg3;
- (id)initAsTransitStep:(id)arg1 route:(id)arg2 index:(unsigned long long)arg3 displayedIndex:(unsigned long long)arg4;

@end

