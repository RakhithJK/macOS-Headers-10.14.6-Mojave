//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSData, NSString;

@protocol FMDFMMProtocol <NSObject>
- (oneway void)shouldResumeCardsForUser:(NSString *)arg1 usingCallback:(void (^)(BOOL, NSError *))arg2;
- (oneway void)disableFMMUsingToken:(NSString *)arg1 tokenIsPET:(BOOL)arg2 inContext:(unsigned long long)arg3 usingCallback:(void (^)(NSError *))arg4;
- (oneway void)clearFMMAccountsWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)retrieveFMMAccountUsingCallback:(void (^)(FMDFMMAccountInfo *, NSError *))arg1;
- (oneway void)removeFMMAccountWithUsername:(NSString *)arg1 withAuthData:(NSData *)arg2 usingCallback:(void (^)(NSError *))arg3;
@end

