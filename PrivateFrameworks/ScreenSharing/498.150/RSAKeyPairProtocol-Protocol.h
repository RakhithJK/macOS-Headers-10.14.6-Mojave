//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenSharing/NSObject-Protocol.h>

@class NSString;

@protocol RSAKeyPairProtocol <NSObject>
+ (unsigned char)rsaKeyPairSimpleHash:(NSString *)arg1;
+ (void)TerminateApp;
+ (void)LowerEUID:(const char *)arg1;
+ (void)RaiseEUID:(const char *)arg1;
+ (NSString *)keySubpath;
+ (NSString *)appName;
@end
