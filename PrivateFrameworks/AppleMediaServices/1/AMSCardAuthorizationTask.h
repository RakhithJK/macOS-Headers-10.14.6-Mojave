//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSMetricsEvent, NSDictionary, NSMutableArray, NSString;

@interface AMSCardAuthorizationTask : AMSTask
{
    BOOL _didBiometricsLockout;
    BOOL _didCancelHomeButton;
    long long _confirmationStyle;
    NSString *_countryCode;
    NSString *_currencyCode;
    AMSMetricsEvent *_metricsEvent;
    NSString *_passSerialNumber;
    NSString *_passTypeIdentifier;
    NSDictionary *_paymentSession;
    NSMutableArray *_userActions;
}

@property(retain) NSMutableArray *userActions; // @synthesize userActions=_userActions;
@property BOOL didCancelHomeButton; // @synthesize didCancelHomeButton=_didCancelHomeButton;
@property BOOL didBiometricsLockout; // @synthesize didBiometricsLockout=_didBiometricsLockout;
@property(readonly) NSDictionary *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(retain) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(copy) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
- (void).cxx_destruct;
- (id)_metricsUserActionDictionary;
- (id)_metricsTimestamp;
- (void)_metricsPost;
- (id)performCardAuthorization;
- (id)initWithPaymentSession:(id)arg1;

@end

