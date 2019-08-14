//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountPolicy/APPolicyMaximum.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@interface APPolicyMaximumPasswordLength : APPolicyMaximum <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andMaximum:(id)arg2;
+ (id)policyWithMaximum:(id)arg1;
- (id)_parametersForMaximum:(id)arg1;
- (id)_contentDescriptionsForMaximum:(id)arg1;
- (id)_contentForMaximum:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMaximum:(id)arg2;
- (id)initWithMaximum:(id)arg1;

@end

