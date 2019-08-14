//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <NSSecureCoding>
{
    BOOL _allowDeepLink;
    BOOL _hasAssociatedPaymentApplication;
    BOOL _archived;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_content;
    NSDate *_messageDate;
    NSDate *_expirationDate;
    unsigned long long _messageType;
}

+ (BOOL)supportsSecureCoding;
+ (id)paymentMessageWithDictionary:(id)arg1;
@property(nonatomic, getter=isArchived) BOOL archived; // @synthesize archived=_archived;
@property(nonatomic) BOOL hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) BOOL allowDeepLink; // @synthesize allowDeepLink=_allowDeepLink;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL archiveOnNextTransaction;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToPaymentMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

