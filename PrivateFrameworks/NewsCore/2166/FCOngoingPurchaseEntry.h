//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface FCOngoingPurchaseEntry : NSObject
{
    BOOL _webAccessOptIn;
    NSString *_identifier;
    NSString *_tagID;
    NSString *_purchaseID;
    NSString *_productID;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersion;
    NSString *_vendorIdentifier;
    NSDate *_purchaseInitiatedTime;
    NSNumber *_price;
}

+ (id)dummyOngoingPurchaseEntryWithTagID:(id)arg1;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSDate *purchaseInitiatedTime; // @synthesize purchaseInitiatedTime=_purchaseInitiatedTime;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(copy, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(nonatomic) BOOL webAccessOptIn; // @synthesize webAccessOptIn=_webAccessOptIn;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productID:(id)arg4 webAccessOptIn:(BOOL)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10;

@end

