//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface APPolicyMaximumFailedAuthentications : APPolicy <NSCopying, NSSecureCoding>
{
    NSNumber *_maximumFailedAuthentications;
    NSNumber *_minutesUntilAutomaticallyUnlocked;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 maximum:(id)arg2 automaticUnlock:(id)arg3;
+ (id)policyWithMaximum:(id)arg1 andAutomaticUnlock:(id)arg2;
- (void).cxx_destruct;
- (id)_parametersForMaximum:(id)arg1 andAutoUnlock:(id)arg2;
- (id)_contentForMaximum:(id)arg1 andAutoUnlock:(id)arg2;
@property(copy) NSNumber *minutesUntilAutomaticallyUnlocked; // @synthesize minutesUntilAutomaticallyUnlocked=_minutesUntilAutomaticallyUnlocked;
@property(copy) NSNumber *maximumFailedAuthentications; // @synthesize maximumFailedAuthentications=_maximumFailedAuthentications;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 maximum:(id)arg2 automaticUnlock:(id)arg3;
- (id)initWithMaximum:(id)arg1 andAutomaticUnlock:(id)arg2;

@end
