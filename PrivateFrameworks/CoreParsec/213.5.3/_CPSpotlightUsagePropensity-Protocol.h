//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSpotlightUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalSessions;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float other;
@property(nonatomic) float thirdPartyInAppContent;
@property(nonatomic) float punchout;
@property(nonatomic) float parsec;
@property(nonatomic) float onDevicePersonalData;
@property(nonatomic) float appLaunch;
@property(nonatomic) int configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
