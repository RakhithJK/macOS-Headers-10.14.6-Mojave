//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString;

@interface ASDRepairApplicationRequestOptions : ASDRequestOptions
{
    NSString *_bundleID;
    NSNumber *_accountDSID;
    long long _claimStyle;
    unsigned long long _exitReason;
}

@property(nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)arg1;
- (id)init;

@end
