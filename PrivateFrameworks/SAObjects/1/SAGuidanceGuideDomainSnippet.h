//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, NSURL;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet
{
}

+ (id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)guideDomainSnippet;
@property(copy, nonatomic) NSString *tagPhrase;
@property(nonatomic) BOOL performIntentEnabledAppAuthorizationCheck;
@property(nonatomic) BOOL isAppIcon;
@property(copy, nonatomic) NSString *iconResourceName;
@property(nonatomic) BOOL iconNeedsProcessing;
@property(copy, nonatomic) NSString *iconDisplayIdentifier;
@property(copy, nonatomic) NSArray *guideSections;
@property(nonatomic) BOOL enabledInOnlineMode;
@property(nonatomic) BOOL enabledInOfflineMode;
@property(copy, nonatomic) NSString *domainName;
@property(copy, nonatomic) NSURL *domainIconURI;
@property(copy, nonatomic) NSString *domainDisplayName;
@property(copy, nonatomic) NSString *domainAlternateDisplayName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

