//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSIdentityProvider;

@interface VSIdentityProviderInfoQueryResult : NSObject
{
    BOOL _isInSetTopBoxMode;
    VSIdentityProvider *_identityProvider;
    NSString *_designatedAppBundleIdentifier;
}

@property(nonatomic) BOOL isInSetTopBoxMode; // @synthesize isInSetTopBoxMode=_isInSetTopBoxMode;
@property(copy, nonatomic) NSString *designatedAppBundleIdentifier; // @synthesize designatedAppBundleIdentifier=_designatedAppBundleIdentifier;
@property(copy, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (id)description;

@end

