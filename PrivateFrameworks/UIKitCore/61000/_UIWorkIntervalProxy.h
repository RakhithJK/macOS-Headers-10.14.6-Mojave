//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWorkIntervalProxy : NSObject
{
    struct work_interval_instance *_instance;
    BOOL _complex;
    BOOL _started;
    double _targetTimestamp;
    double _frameDuration;
}

- (void)dealloc;
- (id)init;

@end

