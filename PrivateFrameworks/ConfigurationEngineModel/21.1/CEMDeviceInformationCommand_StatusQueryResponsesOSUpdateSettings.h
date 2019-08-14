//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDate, NSNumber, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase
{
    NSString *_statusCatalogURL;
    NSNumber *_statusIsDefaultCatalog;
    NSDate *_statusPreviousScanDate;
    NSString *_statusPreviousScanResult;
    NSNumber *_statusPerformPeriodicCheck;
    NSNumber *_statusAutomaticCheckEnabled;
    NSNumber *_statusBackgroundDownloadEnabled;
    NSNumber *_statusAutomaticAppInstallationEnabled;
    NSNumber *_statusAutomaticOSInstallationEnabled;
    NSNumber *_statusAutomaticSecurityUpdatesEnabled;
}

+ (id)buildRequiredOnly;
+ (id)buildWithCatalogURL:(id)arg1 withIsDefaultCatalog:(id)arg2 withPreviousScanDate:(id)arg3 withPreviousScanResult:(id)arg4 withPerformPeriodicCheck:(id)arg5 withAutomaticCheckEnabled:(id)arg6 withBackgroundDownloadEnabled:(id)arg7 withAutomaticAppInstallationEnabled:(id)arg8 withAutomaticOSInstallationEnabled:(id)arg9 withAutomaticSecurityUpdatesEnabled:(id)arg10;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusAutomaticSecurityUpdatesEnabled; // @synthesize statusAutomaticSecurityUpdatesEnabled=_statusAutomaticSecurityUpdatesEnabled;
@property(copy, nonatomic) NSNumber *statusAutomaticOSInstallationEnabled; // @synthesize statusAutomaticOSInstallationEnabled=_statusAutomaticOSInstallationEnabled;
@property(copy, nonatomic) NSNumber *statusAutomaticAppInstallationEnabled; // @synthesize statusAutomaticAppInstallationEnabled=_statusAutomaticAppInstallationEnabled;
@property(copy, nonatomic) NSNumber *statusBackgroundDownloadEnabled; // @synthesize statusBackgroundDownloadEnabled=_statusBackgroundDownloadEnabled;
@property(copy, nonatomic) NSNumber *statusAutomaticCheckEnabled; // @synthesize statusAutomaticCheckEnabled=_statusAutomaticCheckEnabled;
@property(copy, nonatomic) NSNumber *statusPerformPeriodicCheck; // @synthesize statusPerformPeriodicCheck=_statusPerformPeriodicCheck;
@property(copy, nonatomic) NSString *statusPreviousScanResult; // @synthesize statusPreviousScanResult=_statusPreviousScanResult;
@property(copy, nonatomic) NSDate *statusPreviousScanDate; // @synthesize statusPreviousScanDate=_statusPreviousScanDate;
@property(copy, nonatomic) NSNumber *statusIsDefaultCatalog; // @synthesize statusIsDefaultCatalog=_statusIsDefaultCatalog;
@property(copy, nonatomic) NSString *statusCatalogURL; // @synthesize statusCatalogURL=_statusCatalogURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

