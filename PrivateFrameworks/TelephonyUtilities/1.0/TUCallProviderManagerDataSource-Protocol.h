//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary, NSURL, TUDialRequest;
@protocol TUCallProviderManagerDataSourceDelegate;

@protocol TUCallProviderManagerDataSource <NSObject>
@property(nonatomic) __weak id <TUCallProviderManagerDataSourceDelegate> delegate;
@property(readonly, copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *localProvidersByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property(readonly, nonatomic) BOOL currentProcessCanAccessInitialState;
- (void)invalidate;
- (void)blockUntilInitialStateReceived;
- (void)launchAppForDialRequest:(TUDialRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (BOOL)openURL:(NSURL *)arg1 isSensitive:(BOOL)arg2 error:(id *)arg3;
@end

