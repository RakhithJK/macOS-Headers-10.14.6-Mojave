//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCTAutomationSupport/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol XCTLogArchiveRequesting <NSObject>
+ (id)requestWithStartDate:(NSDate *)arg1 outputPath:(NSString *)arg2;
@property(readonly, copy) NSString *outputPath;
@property(readonly, copy) NSDate *startDate;
- (void)executeWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end
