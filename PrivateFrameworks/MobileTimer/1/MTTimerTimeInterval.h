//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTTimerTime-Protocol.h>

@class NSString;

@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime>
{
    double _remainingTime;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToTime:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
