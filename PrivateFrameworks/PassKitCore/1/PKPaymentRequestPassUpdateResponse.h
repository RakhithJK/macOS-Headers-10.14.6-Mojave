//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse
{
    NSString *_passURL;
    unsigned long long _appletState;
}

@property(readonly, nonatomic) unsigned long long appletState; // @synthesize appletState=_appletState;
@property(readonly, copy, nonatomic) NSString *passURL; // @synthesize passURL=_passURL;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

