//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying>
{
    _CLRangingPeer *_peer;
    NSDate *_date;
    NSNumber *_distanceMeters;
    NSNumber *_accuracyMeters;
    BOOL _initiator;
    BOOL _shouldUnlock;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6;

@end

