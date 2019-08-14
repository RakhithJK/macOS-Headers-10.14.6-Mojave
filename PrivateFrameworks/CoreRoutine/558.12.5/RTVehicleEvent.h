//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID, RTLocation, RTLocationOfInterest, RTMapItem;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _userSetLocation;
    BOOL _usualLocation;
    BOOL _confirmed;
    BOOL _locationFinalized;
    NSDate *_date;
    RTLocation *_location;
    NSString *_vehicleIdentifier;
    NSString *_notes;
    NSUUID *_identifier;
    NSData *_photo;
    RTMapItem *_mapItem;
    unsigned long long _locationQuality;
    RTLocationOfInterest *_nearbyLocationOfInterest;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL locationFinalized; // @synthesize locationFinalized=_locationFinalized;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(copy, nonatomic) RTLocationOfInterest *nearbyLocationOfInterest; // @synthesize nearbyLocationOfInterest=_nearbyLocationOfInterest;
@property(nonatomic) BOOL usualLocation; // @synthesize usualLocation=_usualLocation;
@property(nonatomic) unsigned long long locationQuality; // @synthesize locationQuality=_locationQuality;
@property(retain, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSData *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) BOOL userSetLocation; // @synthesize userSetLocation=_userSetLocation;
@property(copy, nonatomic) NSString *vehicleIdentifier; // @synthesize vehicleIdentifier=_vehicleIdentifier;
@property(copy, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(BOOL)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 mapItem:(id)arg8 confirmed:(BOOL)arg9;
- (id)initWithDate:(id)arg1;
- (id)init;

@end

