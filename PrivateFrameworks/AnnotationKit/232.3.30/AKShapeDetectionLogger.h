//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKShapeDetectionLogger : NSObject
{
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)_newLogPathWithShapeName:(id)arg1;
- (id)_fileName:(id)arg1;
- (id)_logsPath;
- (BOOL)_loggingIsEnabled;
- (void)openFinderWindowToLogs;
- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;

@end

