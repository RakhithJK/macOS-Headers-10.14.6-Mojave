//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXJSONObjectMerger;
@protocol SXConditionValidating;

@interface SXConditionalObjectResolver : NSObject
{
    SXJSONObjectMerger *_objectMerger;
    id <SXConditionValidating> _conditionValidator;
}

@property(readonly, nonatomic) id <SXConditionValidating> conditionValidator; // @synthesize conditionValidator=_conditionValidator;
@property(readonly, nonatomic) SXJSONObjectMerger *objectMerger; // @synthesize objectMerger=_objectMerger;
- (void).cxx_destruct;
- (id)resolveObjects:(id)arg1 context:(id)arg2;
- (id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2;

@end

