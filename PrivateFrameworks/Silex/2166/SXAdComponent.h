//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXComponent.h>

#import <Silex/SXAdComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary, UIColor;
@protocol SXComponentAnchor;

@interface SXAdComponent : SXComponent <SXAdComponent>
{
    unsigned long long adType;
}

@property(readonly, nonatomic) unsigned long long adType; // @synthesize adType;
@property(readonly, nonatomic) unsigned long long placementType;
@property(readonly, nonatomic) UIColor *debugColor;
@property(readonly, nonatomic) unsigned long long traits;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *advertising; // @dynamic advertising;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXJSONArray *conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type;

@end

