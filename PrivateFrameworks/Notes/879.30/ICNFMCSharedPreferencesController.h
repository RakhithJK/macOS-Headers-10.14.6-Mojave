//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUserDefaults;

@interface ICNFMCSharedPreferencesController : NSObject
{
    NSUserDefaults *_sharedMailUserDefaults;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSUserDefaults *sharedMailUserDefaults; // @synthesize sharedMailUserDefaults=_sharedMailUserDefaults;
- (void).cxx_destruct;
- (void)_preferencesChangedExternally:(id)arg1;
- (void)_postPreferencesDidChangeNotifications;
@property(readonly) BOOL intranetDomainsManagedByProfile;
@property BOOL shouldCheckIntranetDomains;
@property(retain) NSArray *intranetDomains;
@property long long addressDisplayMode;
@property BOOL disableRemoteContent;
@property BOOL shouldExpandGroups;
@property(retain) NSString *defaultFromAddress;
- (void)dealloc;
- (id)init;

@end
