//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSAppInstallationInfoCenter;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject
{
    VSAppInstallationInfoCenter *_appInstallationInfoCenter;
}

+ (id)_subscriptionPredicateTemplateValues;
+ (id)_subscriptionSourcePredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
@property(retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter; // @synthesize appInstallationInfoCenter=_appInstallationInfoCenter;
- (void).cxx_destruct;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceOfTask:(id)arg1;
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;
- (id)_predicateTemplateForSourceKind:(long long)arg1;

@end

