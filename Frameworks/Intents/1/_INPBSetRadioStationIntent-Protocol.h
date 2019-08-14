//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetRadioStationIntent <NSObject>
@property(readonly, nonatomic) BOOL hasStationName;
@property(retain, nonatomic) _INPBString *stationName;
@property(nonatomic) BOOL hasRadioType;
@property(nonatomic) int radioType;
@property(readonly, nonatomic) BOOL hasPresetNumber;
@property(retain, nonatomic) _INPBInteger *presetNumber;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasFrequency;
@property(retain, nonatomic) _INPBDouble *frequency;
@property(readonly, nonatomic) BOOL hasChannel;
@property(retain, nonatomic) _INPBString *channel;
- (int)StringAsRadioType:(NSString *)arg1;
- (NSString *)radioTypeAsString:(int)arg1;
@end

