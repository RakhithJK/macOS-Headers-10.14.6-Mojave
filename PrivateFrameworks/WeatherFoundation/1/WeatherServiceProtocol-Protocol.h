//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherFoundation/WeatherServiceInternalProtocol-Protocol.h>

@class MKLocalSearchCompletion, NSDateComponents, NSDictionary, NSLocale, NSString, WFLocation, WFTaskIdentifier;

@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
- (void)invalidateCache:(WFTaskIdentifier *)arg1;
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)reachabilityConfigurationForIdentifier:(WFTaskIdentifier *)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(WFTaskIdentifier *)arg2;
- (void)temperatureUnitWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(WFTaskIdentifier *)arg1;
- (void)locationForSearchCompletion:(MKLocalSearchCompletion *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForString:(NSString *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)dailyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)forecastForLocation:(WFLocation *)arg1 atDate:(NSDateComponents *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
@end

