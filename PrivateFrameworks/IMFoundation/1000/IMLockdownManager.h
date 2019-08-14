//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMLockdownManager : NSObject
{
    BOOL _settingUpActivationState;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _isNonUIInstall;
    BOOL _isVendorInstall;
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    unsigned long long _state;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL _hasShownWaitingAlertThisSession; // @synthesize _hasShownWaitingAlertThisSession;
@property(nonatomic) BOOL _hasShownMismatchedSIM; // @synthesize _hasShownMismatchedSIM;
@property(nonatomic) BOOL _isVendorInstall; // @synthesize _isVendorInstall;
@property(nonatomic) BOOL _isNonUIInstall; // @synthesize _isNonUIInstall;
@property(nonatomic) BOOL _isCarrierInstall; // @synthesize _isCarrierInstall;
@property(nonatomic) BOOL _isInternalInstall; // @synthesize _isInternalInstall;
@property(nonatomic) BOOL _settingUpActivationState; // @synthesize _settingUpActivationState;
- (id)description;
@property(readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property(readonly, nonatomic) BOOL isExpired;
@property(readonly, nonatomic) BOOL isActivated;
@property(readonly, nonatomic) BOOL isCarrierInstall;
- (long long)lockdownState;
@property(readonly, nonatomic) BOOL isInternalInstall;
@property(readonly, nonatomic) BOOL isVendorInstall;
@property(readonly, nonatomic) BOOL isNonUIInstall;
- (void)_calculateInstallType;
- (void)_setupActivationState;
@property(nonatomic, setter=_setState:) unsigned long long _state; // @synthesize _state;
- (void)_resetActivationState;
- (void)dealloc;
- (id)init;

@end

