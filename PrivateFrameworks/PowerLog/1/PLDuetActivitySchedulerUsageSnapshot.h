//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PLDuetActivitySchedulerUsageSnapshot : NSObject
{
    NSDate *_startDate;
    NSDate *_stopDate;
    double _numberOfBytesUploadedWiFi;
    double _numberOfBytesDownloadedWiFi;
    double _numberOfBytesUploadedCell;
    double _numberOfBytesDownloadedCell;
    NSString *_bundleID;
}

@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property double numberOfBytesDownloadedCell; // @synthesize numberOfBytesDownloadedCell=_numberOfBytesDownloadedCell;
@property double numberOfBytesUploadedCell; // @synthesize numberOfBytesUploadedCell=_numberOfBytesUploadedCell;
@property double numberOfBytesDownloadedWiFi; // @synthesize numberOfBytesDownloadedWiFi=_numberOfBytesDownloadedWiFi;
@property double numberOfBytesUploadedWiFi; // @synthesize numberOfBytesUploadedWiFi=_numberOfBytesUploadedWiFi;
@property(retain) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;

@end

