//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject
{
    unsigned long long _eventType;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1;

@end

