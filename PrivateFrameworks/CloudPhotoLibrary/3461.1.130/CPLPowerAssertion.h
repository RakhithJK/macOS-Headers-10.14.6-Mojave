//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLPowerAssertion : NSObject
{
}

+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(BOOL)arg1;
+ (BOOL)hasEnoughPower;
+ (void)enableSleep;
+ (void)disableSleep;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)_doProtected:(CDUnknownBlockType)arg1;

@end

