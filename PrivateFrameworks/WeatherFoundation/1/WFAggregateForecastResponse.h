//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding>
{
    BOOL _responseWasFromCache;
    NSArray *_forecasts;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(copy, nonatomic) NSArray *forecasts; // @synthesize forecasts=_forecasts;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

