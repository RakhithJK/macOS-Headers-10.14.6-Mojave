//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBEvent <NSObject>
+ (Class)eventDescriptorsType;
@property(readonly, nonatomic) BOOL hasEventType;
@property(retain, nonatomic) _INPBString *eventType;
@property(readonly, nonatomic) unsigned long long eventDescriptorsCount;
@property(copy, nonatomic) NSArray *eventDescriptors;
- (_INPBString *)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addEventDescriptors:(_INPBString *)arg1;
- (void)clearEventDescriptors;
@end

