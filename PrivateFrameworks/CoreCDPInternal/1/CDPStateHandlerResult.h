//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CDPStateHandlerResult : NSObject
{
    BOOL _cloudDataProtectionEnabled;
    BOOL _shouldCompleteSignIn;
    unsigned long long _peeriCloudKeychainState;
    NSError *_error;
}

+ (id)successResult;
+ (id)resultWithError:(id)arg1;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 peeriCloudKeychainState:(unsigned long long)arg3 error:(id)arg4;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 error:(id)arg3;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long peeriCloudKeychainState; // @synthesize peeriCloudKeychainState=_peeriCloudKeychainState;
@property BOOL shouldCompleteSignIn; // @synthesize shouldCompleteSignIn=_shouldCompleteSignIn;
@property BOOL cloudDataProtectionEnabled; // @synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled;
- (void).cxx_destruct;

@end

