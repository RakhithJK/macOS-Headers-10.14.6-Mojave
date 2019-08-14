//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLLocation, CLPlacemarkInternal, CLRegion, CNPostalAddress, NSArray, NSDictionary, NSString, NSTimeZone;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    CLPlacemarkInternal *_internal;
}

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (id)_geoMapItem;
@property(readonly, copy, nonatomic) NSString *ocean;
@property(readonly, copy, nonatomic) NSString *inlandWater;
@property(readonly, copy, nonatomic) NSArray *areasOfInterest;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
@property(readonly, copy, nonatomic) NSString *country;
@property(readonly, copy, nonatomic) NSString *ISOcountryCode;
@property(readonly, copy, nonatomic) NSString *postalCode;
@property(readonly, copy, nonatomic) NSString *subAdministrativeArea;
@property(readonly, copy, nonatomic) NSString *administrativeArea;
@property(readonly, copy, nonatomic) NSString *subLocality;
@property(readonly, copy, nonatomic) NSString *locality;
@property(readonly, copy, nonatomic) NSString *subThoroughfare;
@property(readonly, copy, nonatomic) NSString *thoroughfare;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSDictionary *addressDictionary;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone;
@property(readonly, copy, nonatomic) CLRegion *region;
@property(readonly, copy, nonatomic) CLLocation *location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)_initWithGeoMapItem:(id)arg1;
@property(readonly, nonatomic) CNPostalAddress *postalAddress;

@end

