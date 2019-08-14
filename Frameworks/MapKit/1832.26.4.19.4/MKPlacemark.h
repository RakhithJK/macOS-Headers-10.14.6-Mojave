//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreLocation/CLPlacemark.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>
{
}

@property(readonly, nonatomic) NSString *countryCode;
- (id)thoroughfare;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 postalAddress:(id)arg2;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)mkPostalAddressDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end
