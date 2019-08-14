//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@interface XCDeviceEvent : NSObject <NSSecureCoding>
{
    unsigned int _eventPage;
    unsigned int _usage;
    double _duration;
    unsigned long long _type;
    double _rotation;
}

+ (id)deviceEventForDigitalCrownRotation:(double)arg1 velocity:(double)arg2;
+ (id)deviceEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
+ (BOOL)supportsSecureCoding;
@property unsigned long long type; // @synthesize type=_type;
@property double rotation; // @synthesize rotation=_rotation;
@property double duration; // @synthesize duration=_duration;
@property unsigned int usage; // @synthesize usage=_usage;
@property unsigned int eventPage; // @synthesize eventPage=_eventPage;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) BOOL isButtonHoldEvent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
