//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMAddressBookItemsRowTemplateFactory : _AMRowTemplateFactory
{
}

+ (id)validKeyPathsForPredicate;
+ (id)sharedInstance;
- (id)convertToSearchElementFromUIPredicate:(id)arg1 withItemType:(id)arg2;
- (id)_convertGroupEvaluationPredicateToSearchElement:(id)arg1;
- (id)_convertPersonUIPredicateToSearchElement:(id)arg1;
- (id)_convertPersonEvaluationPredicateToSearchElement:(id)arg1;
- (id)_nameSearchElementForComparisonPredicate:(id)arg1;
- (long long)searchComparisonForComparisonPredicate:(id)arg1;
- (id)rowTemplatesForItemType:(id)arg1;
- (id)rowTemplatesForAddressBookGroups;
- (id)rowTemplatesForAddressBookPeople;

@end
