//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapItem;

@interface _MXExtensionRideSharingSearchRequest : NSObject <NSSecureCoding>
{
    MKMapItem *_origin;
    MKMapItem *_destination;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MKMapItem *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

