//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <NSObject>
@property(readonly, nonatomic) BOOL hasLocation;
@property(retain, nonatomic) _INPBLocationValue *location;
@property(nonatomic) BOOL hasEvent;
@property(nonatomic) int event;
- (int)StringAsEvent:(NSString *)arg1;
- (NSString *)eventAsString:(int)arg1;
@end

