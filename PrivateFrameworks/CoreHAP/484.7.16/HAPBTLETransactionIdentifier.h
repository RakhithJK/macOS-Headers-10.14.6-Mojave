//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject
{
    unsigned char _unsignedCharValue;
}

+ (unsigned char)generateRequestIdentifier;
@property(readonly, nonatomic) unsigned char unsignedCharValue; // @synthesize unsignedCharValue=_unsignedCharValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithUnsignedCharValue:(unsigned char)arg1;
- (id)init;

@end

