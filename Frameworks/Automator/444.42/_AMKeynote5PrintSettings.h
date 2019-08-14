//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSDate, NSString;

@interface _AMKeynote5PrintSettings : SBObject
{
}

- (void)stopSlideshow;
- (void)startFrom;
- (void)start;
- (void)showPrevious;
- (void)showNext;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)makeImageSlidesPaths:(id)arg1 master:(id)arg2 setTitles:(BOOL)arg3;
- (void)advance;
- (void)addFilePath:(id)arg1;
- (void)addChartColumnNames:(id)arg1 data:(long long)arg2 groupBy:(int)arg3 rowNames:(id)arg4 type:(int)arg5;
- (void)saveAs:(id)arg1 in:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSString *targetPrinter;
@property(copy) NSString *faxNumber;
@property int errorHandling;
@property(copy) NSDate *requestedPrintTime;
@property long long pagesDown;
@property long long pagesAcross;
@property long long endingPage;
@property long long startingPage;
@property BOOL collating;
@property long long copies;

@end

