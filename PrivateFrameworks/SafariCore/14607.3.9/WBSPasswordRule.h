//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSPasswordRule : NSObject
{
    long long _type;
    id _value;
}

+ (id)ruleWithType:(long long)arg1 value:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithPasswordRuleType:(long long)arg1 value:(id)arg2;

@end
