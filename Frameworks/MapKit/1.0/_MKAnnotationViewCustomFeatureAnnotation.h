//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/VKCustomFeatureAnnotation-Protocol.h>

@class MKAnnotationView, NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation>
{
    VKCustomFeature *_customFeature;
    MKAnnotationView *_annotationView;
    CDStruct_2c43369c _coordinate;
}

@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, nonatomic) VKCustomFeature *feature;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

