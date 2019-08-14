//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class ACAccountCredential, NSString;

@protocol ICNFMCPersistedAccount <NSObject>
@property(nonatomic) BOOL enabled;
@property(retain, nonatomic) ACAccountCredential *credential;
@property(nonatomic) BOOL allowInsecureAuthentication;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *canonicalEmailAddress;
@property(copy, nonatomic) NSString *accountDescription;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

