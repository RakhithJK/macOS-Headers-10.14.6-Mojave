//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isCritical;
    BOOL _restartRequired;
    BOOL _allowsInstallLater;
    NSString *_productKey;
    NSString *_humanReadableName;
    NSString *_productName;
    NSString *_version;
    NSString *_build;
    unsigned long long _downloadSize;
    unsigned long long _installSize;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL allowsInstallLater; // @synthesize allowsInstallLater=_allowsInstallLater;
@property(readonly, nonatomic) BOOL restartRequired; // @synthesize restartRequired=_restartRequired;
@property(readonly, nonatomic) BOOL isCritical; // @synthesize isCritical=_isCritical;
@property(readonly, nonatomic) unsigned long long installSize; // @synthesize installSize=_installSize;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, copy, nonatomic) NSString *humanReadableName; // @synthesize humanReadableName=_humanReadableName;
@property(readonly, copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(BOOL)arg8 restartRequired:(BOOL)arg9 allowsInstallLater:(BOOL)arg10;

@end

