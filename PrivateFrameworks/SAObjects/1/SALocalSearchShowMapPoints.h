//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, SALocalSearchCarRouteOptions, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand
{
}

+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showMapPoints;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL suppressNavigation;
@property(nonatomic) BOOL showTraffic;
@property(nonatomic) BOOL showDirections;
@property(retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property(nonatomic) BOOL searchAlongRoute;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSString *preferredDirectionsMode;
@property(copy, nonatomic) NSString *language;
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property(copy, nonatomic) NSString *directionsType;
@property(copy, nonatomic) NSDate *departureDate;
@property(nonatomic) BOOL chainResultSet;
@property(retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property(copy, nonatomic) NSDate *arrivalDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

