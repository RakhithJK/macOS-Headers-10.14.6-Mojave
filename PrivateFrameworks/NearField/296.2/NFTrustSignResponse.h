//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFTrustObject.h>

@class NFTrustKey, NSData, NSNumber, NSString;

@interface NFTrustSignResponse : NFTrustObject
{
    NSNumber *_counterValue;
    NFTrustKey *_key;
    NSData *_trustObjectInternalRawNSData;
}

+ (id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *trustObjectInternalRawNSData; // @synthesize trustObjectInternalRawNSData=_trustObjectInternalRawNSData;
@property(retain, nonatomic) NFTrustKey *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *counterValue; // @synthesize counterValue=_counterValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *rawData;
- (void)dealloc;

@end

