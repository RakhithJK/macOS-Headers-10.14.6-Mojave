//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPerformanceMeasurement : NSObject
{
    NSString *measurementName;
    NSString *measurementComment;
    double measurementValue;
}

+ (id)performanceMeasurementWithName:(id)arg1 comment:(id)arg2 value:(double)arg3;
@property(readonly) double measurementValue; // @synthesize measurementValue;
@property(readonly) NSString *measurementComment; // @synthesize measurementComment;
@property(readonly) NSString *measurementName; // @synthesize measurementName;
- (id)XMLElement;
- (void)dealloc;
- (id)initWithName:(id)arg1 comment:(id)arg2 value:(double)arg3;

@end

