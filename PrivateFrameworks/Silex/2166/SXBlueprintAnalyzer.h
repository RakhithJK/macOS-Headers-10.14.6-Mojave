//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBlueprintAnalyzer-Protocol.h>

@class NSString;

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>
{
}

- (BOOL)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4;
- (void)iterateMarkers:(id)arg1 onMarkerFound:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3 onEndReached:(CDUnknownBlockType)arg4;
- (void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4 onEndReached:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

