//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSession.h>

@interface NFTrustSession : NFSession
{
}

- (id)listKeys:(id *)arg1;
- (id)getKey:(id)arg1 error:(id *)arg2;
- (id)signWithKey:(id)arg1 request:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 error:(id *)arg5;
- (id)signWithKey:(id)arg1 request:(id)arg2 authorization:(id)arg3 error:(id *)arg4;
- (BOOL)deleteKey:(id)arg1 error:(id *)arg2;
- (id)createKey:(id)arg1 request:(id)arg2 error:(id *)arg3;

@end

