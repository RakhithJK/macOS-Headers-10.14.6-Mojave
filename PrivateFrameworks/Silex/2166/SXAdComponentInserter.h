//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInserter-Protocol.h>

@class NSString;
@protocol SXAdvertisingSettingsFactory, SXComponentInsertionConditionEngine;

@interface SXAdComponentInserter : NSObject <SXComponentInserter>
{
    id <SXComponentInsertionConditionEngine> _conditionEngine;
    id <SXAdvertisingSettingsFactory> _advertisingSettingsFactory;
    long long _insertedCount;
    double _lastInsertedYOffset;
}

@property(nonatomic) double lastInsertedYOffset; // @synthesize lastInsertedYOffset=_lastInsertedYOffset;
@property(nonatomic) long long insertedCount; // @synthesize insertedCount=_insertedCount;
@property(readonly, nonatomic) id <SXAdvertisingSettingsFactory> advertisingSettingsFactory; // @synthesize advertisingSettingsFactory=_advertisingSettingsFactory;
@property(readonly, nonatomic) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine=_conditionEngine;
- (void).cxx_destruct;
- (unsigned long long)adTypeFromBannerType:(unsigned long long)arg1;
- (void)componentInsertionCompleted;
- (id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2;
- (id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)conditionsForDOMObjectProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long componentTraits;
- (id)initWithConditionEngine:(id)arg1 advertisingSettingsFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

