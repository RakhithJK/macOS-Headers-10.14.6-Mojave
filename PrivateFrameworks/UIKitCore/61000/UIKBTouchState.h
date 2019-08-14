//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSUUID, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKBTouchState : NSObject <NSCopying>
{
    double _timestamp;
    long long _phase;
    UIWindow *_window;
    double _pathMajorRadius;
    unsigned long long _pathIndex;
    NSUUID *_touchUUID;
    unsigned long long _tapCount;
    struct CGPoint _locationInWindow;
}

+ (id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(struct CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6;
+ (id)touchStateForTouch:(id)arg1;
+ (void)releaseUUIDForTouch:(id)arg1;
+ (id)touchUUIDsForTouches:(id)arg1;
+ (id)touchesForTouchUUIDs:(id)arg1;
+ (id)touchForTouchUUID:(id)arg1;
+ (id)touchUUIDForTouch:(id)arg1;
@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
@property(readonly, nonatomic) NSUUID *touchUUID; // @synthesize touchUUID=_touchUUID;
@property(readonly, nonatomic) unsigned long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, nonatomic) double pathMajorRadius; // @synthesize pathMajorRadius=_pathMajorRadius;
@property(readonly, nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow=_locationInWindow;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (struct CGPoint)locationInView:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

