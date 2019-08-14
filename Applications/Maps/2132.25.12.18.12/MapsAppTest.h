//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOPPTTestDelegate-Protocol.h"
#import "MapsAppTestDelegate-Protocol.h"

@class MKMapView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NVMainWindowController, VKMapView;
@protocol MapsAppTesting;

__attribute__((visibility("hidden")))
@interface MapsAppTest : NSObject <MapsAppTestDelegate, GEOPPTTestDelegate>
{
    NSString *_testName;
    NSDictionary *_options;
    id <MapsAppTesting> _app;
    NSMutableDictionary *_results;
    unsigned long long _currentSubTestIndex;
    double _currentSubTestStartTime;
    NSMutableArray *_fullyDrawnCallbacks;
    NSMutableArray *_partiallyDrawnCallbacks;
}

@property(retain, nonatomic) NSMutableArray *partiallyDrawnCallbacks; // @synthesize partiallyDrawnCallbacks=_partiallyDrawnCallbacks;
@property(retain, nonatomic) NSMutableArray *fullyDrawnCallbacks; // @synthesize fullyDrawnCallbacks=_fullyDrawnCallbacks;
@property(readonly, nonatomic) double currentSubTestStartTime; // @synthesize currentSubTestStartTime=_currentSubTestStartTime;
@property(readonly, nonatomic) unsigned long long currentSubTestIndex; // @synthesize currentSubTestIndex=_currentSubTestIndex;
@property(retain, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) id <MapsAppTesting> app; // @synthesize app=_app;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (void).cxx_destruct;
- (void)didEndGEOPPTTest_Manifest_HandleMessage:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_HandleMessage:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_ResetActiveTileGroup:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_SetActiveTileGroup:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_SetManifestToken:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_SetManifestToken:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_GetResourceManifest:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_GetResourceManifest:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_ForcedUpdate:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_ForcedUpdate:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_Update:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_Update:(id)arg1;
- (void)didEndGEOPPTTest_Manifest_SetupConnection:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest_SetupConnection:(id)arg1;
- (void)didEndGEOPPTTest_Manifest:(id)arg1;
- (void)willBeginGEOPPTTest_Manifest:(id)arg1;
- (void)registerGEOManifestSubtests;
- (void)setupForVKTest;
- (void)setupPartiallyDrawnNotification:(SEL)arg1;
- (void)setupFullyDrawnNotification:(SEL)arg1;
- (void)addPartiallyDrawnCallback:(CDUnknownBlockType)arg1;
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;
- (void)onPartiallyDrawn:(id)arg1;
- (void)onFullyDrawn:(id)arg1;
- (void)runSerialSubTestAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *serialSubTests;
- (void)failedTest;
- (void)finishedTest;
- (void)finishedSerialSubTest:(id)arg1;
- (void)finishedSubTest:(id)arg1;
- (void)startedSubTest:(id)arg1 withMetrics:(id)arg2;
- (void)startedSerialSubTest:(id)arg1;
- (void)startedSubTest:(id)arg1;
- (void)startedTest;
- (void)cleanup:(BOOL)arg1;
- (BOOL)runTest;
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) NVMainWindowController *mainWindowController;
- (void)willSetupForVKTest;
- (void)switchToMapType:(unsigned long long)arg1;
@property(readonly, nonatomic) VKMapView *mainVKMapView;
@property(readonly, nonatomic) MKMapView *mainMKMapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
