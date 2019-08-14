//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface SUAdminAvailableUpdate : NSObject
{
    BOOL _criticalUpdate;
    BOOL _configDataUpdate;
    BOOL _firmwareUpdate;
    BOOL _macOSUpdate;
    BOOL _restartRequiredUpdate;
    BOOL _allowedToUseDoItLater;
    BOOL _isRecommended;
    BOOL _adminDeferred;
    BOOL _autoUpdateEligible;
    NSDate *_adminDeferralDate;
    NSString *_productKey;
    NSString *_title;
    NSString *_version;
    NSArray *_applicationIdentifiersToClose;
    NSString *_serverMetadataURL;
    NSString *_currentLocalization;
    NSAttributedString *_licenseAgreement;
    NSDate *_postDate;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    long long _installStatus;
    NSError *_lastError;
    double _downloadPercentComplete;
    long long _downloadSize;
}

@property(readonly) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly) double downloadPercentComplete; // @synthesize downloadPercentComplete=_downloadPercentComplete;
@property(readonly) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly) long long installStatus; // @synthesize installStatus=_installStatus;
@property(readonly, getter=isAutoUpdateEligible) BOOL autoUpdateEligible; // @synthesize autoUpdateEligible=_autoUpdateEligible;
@property(readonly) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) NSDate *postDate; // @synthesize postDate=_postDate;
@property(readonly) NSAttributedString *licenseAgreement; // @synthesize licenseAgreement=_licenseAgreement;
@property(readonly) NSString *currentLocalization; // @synthesize currentLocalization=_currentLocalization;
@property(readonly) NSString *serverMetadataURL; // @synthesize serverMetadataURL=_serverMetadataURL;
@property(readonly) NSArray *applicationIdentifiersToClose; // @synthesize applicationIdentifiersToClose=_applicationIdentifiersToClose;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *productKey; // @synthesize productKey=_productKey;
@property(readonly) NSDate *adminDeferralDate; // @synthesize adminDeferralDate=_adminDeferralDate;
@property(readonly) BOOL adminDeferred; // @synthesize adminDeferred=_adminDeferred;
@property(readonly) BOOL isRecommended; // @synthesize isRecommended=_isRecommended;
@property(readonly) BOOL allowedToUseDoItLater; // @synthesize allowedToUseDoItLater=_allowedToUseDoItLater;
@property(readonly) BOOL restartRequiredUpdate; // @synthesize restartRequiredUpdate=_restartRequiredUpdate;
@property(readonly) BOOL macOSUpdate; // @synthesize macOSUpdate=_macOSUpdate;
@property(readonly) BOOL firmwareUpdate; // @synthesize firmwareUpdate=_firmwareUpdate;
@property(readonly) BOOL configDataUpdate; // @synthesize configDataUpdate=_configDataUpdate;
@property(readonly) BOOL criticalUpdate; // @synthesize criticalUpdate=_criticalUpdate;
- (id)description;
- (id)_stringForInstallStatus;
- (void)_setStatus:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateProduct:(id)arg1 andStatus:(id)arg2;

@end

