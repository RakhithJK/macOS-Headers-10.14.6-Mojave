//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class NSString;
@protocol ACDEAppleConnectDelegate, ACDEAuthenticationRequest;

@protocol ACDEAppleConnect <NSObject>
@property(nonatomic) int logLevel;
@property id <ACDEAppleConnectDelegate> delegate;
- (void)authenticate:(id <ACDEAuthenticationRequest>)arg1 completion:(void (^)(id <ACDEAuthenticationResponse>))arg2;
- (void)authenticate:(id <ACDEAuthenticationRequest>)arg1 withPassword:(NSString *)arg2;
@end

