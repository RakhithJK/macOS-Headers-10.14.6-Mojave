//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueIdentifier-Protocol.h>

@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>
{
    BOOL _hasVenueID;
    unsigned long long _venueID;
    BOOL _hasBusinessID;
    unsigned long long _businessID;
    NSArray *_componentIdentifiers;
    NSArray *_originalIdentifiers;
}

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;
+ (unsigned long long)businessIDFromVenueIdentifiers:(id)arg1;
+ (unsigned long long)venueIdFromVenueIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(readonly, nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic, getter=_hasBusinessID) BOOL hasBusinessID; // @synthesize hasBusinessID=_hasBusinessID;
@property(readonly, nonatomic) unsigned long long venueID; // @synthesize venueID=_venueID;
@property(readonly, nonatomic, getter=_hasVenueID) BOOL hasVenueID; // @synthesize hasVenueID=_hasVenueID;
- (void).cxx_destruct;
- (id)placeDataVenueIdentifierForVenue;
- (id)placeDataVenueIdentifier;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 componentIdentifiers:(id)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

