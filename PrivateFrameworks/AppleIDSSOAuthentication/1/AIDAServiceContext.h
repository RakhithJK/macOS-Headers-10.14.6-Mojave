//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/NSCopying-Protocol.h>
#import <AppleIDSSOAuthentication/NSMutableCopying-Protocol.h>

@class NSDictionary, NSWindow;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>
{
    NSDictionary *_authenticationResults;
    BOOL _shouldForceOperation;
    NSWindow *_hostWindow;
}

+ (id)contextWithContext:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
@property(readonly, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly, nonatomic) BOOL shouldForceOperation; // @synthesize shouldForceOperation=_shouldForceOperation;
@property(readonly, copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

