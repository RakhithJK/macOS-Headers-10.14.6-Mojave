//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest
{
    NSString *_countryCode;
    NSString *_query;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

