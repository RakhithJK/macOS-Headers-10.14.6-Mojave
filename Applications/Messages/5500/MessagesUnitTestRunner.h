//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMSharedUtilities/IMUnitTestRunner.h>

#import "IMUnitTestRunnerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface MessagesUnitTestRunner : IMUnitTestRunner <IMUnitTestRunnerDelegate>
{
    NSMutableArray *_failedTests;
}

- (void).cxx_destruct;
- (void)unitTestRunner:(id)arg1 testCase:(id)arg2 didFailWithDescription:(id)arg3 inFile:(id)arg4 atLine:(unsigned long long)arg5;
- (void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;
- (long long)runTests;
- (void)logBanner:(id)arg1;
- (void)testLog:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

