//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase
{
    NSString *_merchantIdentifier;
    NSString *_hostApplicationIdentifier;
}

@property(copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointName;

@end

