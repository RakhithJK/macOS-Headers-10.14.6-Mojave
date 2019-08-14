//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, PCSLockAssertion, PCSMTT;
@protocol OS_os_transaction;

@interface PCSCKKSItemModifyContext : NSObject
{
    struct __CFDictionary *_rollAttributes;
    _Bool _sync;
    _Bool _roll;
    _Bool _returnedExistingIdentity;
    int _retryLeftCount;
    struct _PCSIdentitySetData *_set;
    struct __PCSLogContext *_log;
    long long _timeoutValue;
    NSString *_dsid;
    NSString *_service;
    struct _PCSIdentityData *_currentIdentity;
    NSData *_currentItemReference;
    NSData *_existingItemReference;
    NSData *_existingItemSHA1;
    struct _PCSIdentityData *_rollIdentity;
    NSData *_rollItemReference;
    NSData *_rollItemSHA1;
    NSDate *_server_NextRollDate;
    struct _PCSIdentityData *_relocateIdentity;
    PCSMTT *_mtt;
    NSObject<OS_os_transaction> *_transaction;
    PCSLockAssertion *_lockAssertion;
    id _activityAssertion;
}

@property(retain) id activityAssertion; // @synthesize activityAssertion=_activityAssertion;
@property(retain) PCSLockAssertion *lockAssertion; // @synthesize lockAssertion=_lockAssertion;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool returnedExistingIdentity; // @synthesize returnedExistingIdentity=_returnedExistingIdentity;
@property(readonly) PCSMTT *mtt; // @synthesize mtt=_mtt;
@property int retryLeftCount; // @synthesize retryLeftCount=_retryLeftCount;
@property _Bool roll; // @synthesize roll=_roll;
@property _Bool sync; // @synthesize sync=_sync;
@property struct _PCSIdentityData *relocateIdentity; // @synthesize relocateIdentity=_relocateIdentity;
@property(retain) NSDate *server_NextRollDate; // @synthesize server_NextRollDate=_server_NextRollDate;
@property(retain) NSData *rollItemSHA1; // @synthesize rollItemSHA1=_rollItemSHA1;
@property(retain) NSData *rollItemReference; // @synthesize rollItemReference=_rollItemReference;
@property struct _PCSIdentityData *rollIdentity; // @synthesize rollIdentity=_rollIdentity;
@property(retain) NSData *existingItemSHA1; // @synthesize existingItemSHA1=_existingItemSHA1;
@property(retain) NSData *existingItemReference; // @synthesize existingItemReference=_existingItemReference;
@property(retain) NSData *currentItemReference; // @synthesize currentItemReference=_currentItemReference;
@property struct _PCSIdentityData *currentIdentity; // @synthesize currentIdentity=_currentIdentity;
@property(retain) NSString *service; // @synthesize service=_service;
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property long long timeoutValue; // @synthesize timeoutValue=_timeoutValue;
@property struct __PCSLogContext *log; // @synthesize log=_log;
@property struct _PCSIdentitySetData *set; // @synthesize set=_set;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetIdentities;
- (id)init;

@end

