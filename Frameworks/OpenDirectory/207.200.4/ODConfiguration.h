//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, ODMappings, ODSession;

@interface ODConfiguration : NSObject
{
    ODSession *session;
    NSString *nodeName;
    NSString *comment;
    NSArray *defaultModuleEntries;
    NSArray *authenticationModuleEntries;
    NSArray *discoveryModuleEntries;
    NSArray *generalModuleEntries;
    ODMappings *defaultMappings;
    NSString *templateName;
    NSArray *virtualSubnodes;
    BOOL hideRegistration;
    NSString *preferredDestinationHostName;
    unsigned short preferredDestinationHostPort;
    NSString *trustAccount;
    NSString *trustType;
    NSString *trustKerberosPrincipal;
    NSString *trustMetaAccount;
    BOOL trustUsesMutualAuthentication;
    BOOL trustUsesKerberosKeytab;
    BOOL trustUsesSystemKeychain;
    long long packetSigning;
    long long packetEncryption;
    BOOL manInTheMiddleProtection;
    long long queryTimeoutInSeconds;
    long long connectionSetupTimeoutInSeconds;
    long long connectionIdleTimeoutInSeconds;
}

+ (id)suggestedTrustPassword:(unsigned long long)arg1;
+ (id)suggestedTrustAccount:(id)arg1;
+ (id)configuration;
+ (id)configurationWithDictionary:(id)arg1 session:(id)arg2;
@property(copy) NSArray *generalModuleEntries; // @synthesize generalModuleEntries;
@property(copy) NSArray *discoveryModuleEntries; // @synthesize discoveryModuleEntries;
@property(copy) NSArray *authenticationModuleEntries; // @synthesize authenticationModuleEntries;
@property(copy) NSArray *defaultModuleEntries; // @synthesize defaultModuleEntries;
@property long long connectionIdleTimeoutInSeconds; // @synthesize connectionIdleTimeoutInSeconds;
@property long long connectionSetupTimeoutInSeconds; // @synthesize connectionSetupTimeoutInSeconds;
@property long long queryTimeoutInSeconds; // @synthesize queryTimeoutInSeconds;
@property BOOL manInTheMiddleProtection; // @synthesize manInTheMiddleProtection;
@property long long packetEncryption; // @synthesize packetEncryption;
@property long long packetSigning; // @synthesize packetSigning;
@property(readonly) BOOL trustUsesSystemKeychain; // @synthesize trustUsesSystemKeychain;
@property(readonly) BOOL trustUsesKerberosKeytab; // @synthesize trustUsesKerberosKeytab;
@property(readonly) BOOL trustUsesMutualAuthentication; // @synthesize trustUsesMutualAuthentication;
@property(readonly, copy) NSString *trustMetaAccount; // @synthesize trustMetaAccount;
@property(readonly, copy) NSString *trustKerberosPrincipal; // @synthesize trustKerberosPrincipal;
@property(readonly, copy) NSString *trustType; // @synthesize trustType;
@property(readonly, copy) NSString *trustAccount; // @synthesize trustAccount;
@property unsigned short preferredDestinationHostPort; // @synthesize preferredDestinationHostPort;
@property(copy) NSString *preferredDestinationHostName; // @synthesize preferredDestinationHostName;
@property BOOL hideRegistration; // @synthesize hideRegistration;
@property(copy) NSArray *virtualSubnodes; // @synthesize virtualSubnodes;
@property(copy) NSString *templateName; // @synthesize templateName;
@property(retain) ODMappings *defaultMappings; // @synthesize defaultMappings;
@property(copy) NSString *comment; // @synthesize comment;
@property(copy) NSString *nodeName; // @synthesize nodeName;
@property(retain) ODSession *session; // @synthesize session;
- (BOOL)removeTrustUsingUsername:(id)arg1 password:(id)arg2 deleteTrustAccount:(BOOL)arg3 error:(id *)arg4;
- (BOOL)addTrustType:(id)arg1 trustAccount:(id)arg2 trustPassword:(id)arg3 username:(id)arg4 password:(id)arg5 joinExisting:(BOOL)arg6 error:(id *)arg7;
- (BOOL)saveUsingAuthorization:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSDictionary *configuration;
- (void)packageModules:(id)arg1 intoConfiguration:(id)arg2 forCategory:(id)arg3;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

