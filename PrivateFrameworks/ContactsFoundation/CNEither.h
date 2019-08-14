//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSSecureCoding-Protocol.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding>
{
    CNPair *_pair;
}

+ (BOOL)supportsSecureCoding;
+ (id)firstLeftInLazyChain:(id)arg1;
+ (id)eitherWithBlock:(CDUnknownBlockType)arg1;
+ (id)eitherWithBool:(BOOL)arg1 error:(id)arg2;
+ (id)eitherWithRight:(id)arg1;
+ (id)eitherWithLeft:(id)arg1;
+ (id)eitherWithLeft:(id)arg1 right:(id)arg2;
@property(retain, nonatomic) CNPair *pair; // @synthesize pair=_pair;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) BOOL isRight;
@property(readonly, nonatomic) id right;
@property(readonly, nonatomic) BOOL isLeft;
@property(readonly, nonatomic) id left;
- (id)initWithLeft:(id)arg1 right:(id)arg2;

@end

