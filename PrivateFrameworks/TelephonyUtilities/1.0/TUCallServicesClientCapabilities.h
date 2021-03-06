//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>
{
    BOOL _wantsCallDisconnectionOnInvalidation;
    BOOL _wantsFrequencyChangeNotifications;
    id <TUCallServicesClientCapabilitiesActions> _delegate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <TUCallServicesClientCapabilitiesActions> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL wantsFrequencyChangeNotifications; // @synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications;
@property(nonatomic) BOOL wantsCallDisconnectionOnInvalidation; // @synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;

@end

