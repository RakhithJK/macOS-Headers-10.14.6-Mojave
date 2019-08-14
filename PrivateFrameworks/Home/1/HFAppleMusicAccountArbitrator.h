//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NAFuture, NSSet;

@interface HFAppleMusicAccountArbitrator : NSObject
{
    BOOL _forceLogout;
    ACAccount *_account;
    NSSet *_accessories;
    CDUnknownBlockType _contextGenerator;
    long long _loginType;
    NAFuture *_activeArbitrationFuture;
}

@property(retain, nonatomic) NAFuture *activeArbitrationFuture; // @synthesize activeArbitrationFuture=_activeArbitrationFuture;
@property(nonatomic) BOOL forceLogout; // @synthesize forceLogout=_forceLogout;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(readonly, copy, nonatomic) CDUnknownBlockType contextGenerator; // @synthesize contextGenerator=_contextGenerator;
@property(readonly, copy, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)_resolvedLoginType:(id *)arg1;
- (id)pendingArbitrationExecutionFuture;
- (id)init;
- (id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(CDUnknownBlockType)arg3;

@end

