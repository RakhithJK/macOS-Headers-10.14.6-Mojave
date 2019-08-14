//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCPersistedAccount-Protocol.h>

@class ACAccount, NSData, NSString;

@protocol ICNFMCPersistedConnectionBasedAccount <ICNFMCPersistedAccount>
@property(readonly, nonatomic) ACAccount *acAccount;
@property(copy, nonatomic) NSString *authenticationSchemeName;
@property(copy, nonatomic) NSData *tlsCertificate;
@property(nonatomic) long long securityLayerType;
@property(nonatomic) long long port;
@property(copy, nonatomic) NSString *hostname;
@end

