//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject
{
    HMFUnfairLock *_lock;
    _HMCameraSource *_source;
}

@property(retain, nonatomic) _HMCameraSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)aspectRatio;
- (id)initWithSource:(id)arg1;

@end
