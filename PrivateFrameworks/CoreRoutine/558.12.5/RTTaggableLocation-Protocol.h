//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class RTLocationOfInterest, RTMicroLocation;

@protocol RTTaggableLocation <NSObject>

@optional
- (BOOL)taggedWithLocationOfInterest;
- (BOOL)taggedWithMicroLocation;
- (void)tagWithLocationOfInterest:(RTLocationOfInterest *)arg1;
- (void)tagWithMicroLocation:(RTMicroLocation *)arg1;
@end

