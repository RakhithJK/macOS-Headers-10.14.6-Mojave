//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject
{
    WebGeolocationPositionInternal *_internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(struct GeolocationPosition *)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;

@end

