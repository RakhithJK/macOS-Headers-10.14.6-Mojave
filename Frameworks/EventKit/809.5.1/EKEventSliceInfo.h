//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKBatchChangeInfo.h>

@class NSDate;

@interface EKEventSliceInfo : EKBatchChangeInfo
{
    long long _sliceType;
    NSDate *_sliceDate;
    NSDate *_currentDate;
}

@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain) NSDate *sliceDate; // @synthesize sliceDate=_sliceDate;
@property long long sliceType; // @synthesize sliceType=_sliceType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)updatedIdentifier:(id)arg1;
- (BOOL)affectsObject:(id)arg1;

@end

