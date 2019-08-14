//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

#import <Automator/_AMSystemEventsGenericMethods-Protocol.h>

@class NSDate, NSString;

@interface _AMSystemEventsPrintSettings : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
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

