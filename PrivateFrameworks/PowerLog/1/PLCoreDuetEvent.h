//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PLCoreDuetEvent : NSObject
{
    unsigned char _updateType;
    NSString *_bundleID;
    NSString *_processName;
    NSDictionary *_childBundleIDToWeight;
    NSArray *_eventIntervals;
}

@property(retain) NSArray *eventIntervals; // @synthesize eventIntervals=_eventIntervals;
@property(retain) NSDictionary *childBundleIDToWeight; // @synthesize childBundleIDToWeight=_childBundleIDToWeight;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property unsigned char updateType; // @synthesize updateType=_updateType;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;

@end

