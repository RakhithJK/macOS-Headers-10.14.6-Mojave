//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBRUtilities : NSObject
{
}

+ (void)releasePowerAssertion:(unsigned int)arg1;
+ (unsigned int)createPowerAssertionWithDescription:(id)arg1 timeout:(double)arg2;
+ (id)alertIcon;
+ (id)bridgeVersionStringFromBinaryRepresentation:(id)arg1;
+ (BOOL)clearContentsOfDirectory:(id)arg1;
+ (BOOL)isAppleInternalBuild;
+ (BOOL)_shouldShutdownOrRestart;
+ (BOOL)restart;
+ (BOOL)shutdown;
+ (BOOL)quit;
+ (BOOL)hardwareSupported;

@end

