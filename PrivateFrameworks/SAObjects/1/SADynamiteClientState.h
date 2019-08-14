//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSNumber, NSString, SACalendar;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>
{
}

+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dynamiteClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSString *xpAbCookie;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *status;
@property(retain, nonatomic) SACalendar *expirationDate;
@property(nonatomic) BOOL ageVerificationRequired;
@property(nonatomic) BOOL activeTvUser;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

