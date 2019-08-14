//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class MKAnnotationView, MKLabelMarker, NVPlace;
@protocol GEOTransitLineItem;

__attribute__((visibility("hidden")))
@interface NVInfoButton : NSButton
{
    NVPlace *_place;
    MKAnnotationView *_annotationView;
    MKLabelMarker *_labelMarker;
    id <GEOTransitLineItem> _transitLineItem;
}

@property(retain, nonatomic) id <GEOTransitLineItem> transitLineItem; // @synthesize transitLineItem=_transitLineItem;
@property(retain, nonatomic) MKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) NVPlace *place; // @synthesize place=_place;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
