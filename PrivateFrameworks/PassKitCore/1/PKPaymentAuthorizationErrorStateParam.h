//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam
{
    NSError *_error;
}

+ (id)paramWithError:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;

@end
