//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents, NSString;

@interface _TtC8FMClient19ClientConfiguration : NSObject
{
    // Error parsing type: , name: nearbyScanDuration
    // Error parsing type: , name: nearbyScanEnabled
    // Error parsing type: , name: nearbyScanWhileAuthenticated
    // Error parsing type: , name: deviceNameSyncInterval
    // Error parsing type: , name: deviceNameSyncEnabled
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(BOOL)arg2 nearbyScanWhileAuthenticated:(BOOL)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(BOOL)arg5;
@property(nonatomic, readonly) BOOL deviceNameSyncEnabled; // @synthesize deviceNameSyncEnabled;
@property(nonatomic, readonly) NSDateComponents *deviceNameSyncInterval; // @synthesize deviceNameSyncInterval;
@property(nonatomic, readonly) BOOL nearbyScanWhileAuthenticated; // @synthesize nearbyScanWhileAuthenticated;
@property(nonatomic, readonly) BOOL nearbyScanEnabled; // @synthesize nearbyScanEnabled;
@property(nonatomic, readonly) double nearbyScanDuration; // @synthesize nearbyScanDuration;

@end

