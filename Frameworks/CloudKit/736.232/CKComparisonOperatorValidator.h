//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance
{
    unsigned long long _operatorType;
}

@property(nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)arg1 error:(id *)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1;

@end
