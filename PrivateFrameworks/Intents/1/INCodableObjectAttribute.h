//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>
{
    NSString *_className;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valueTransformer;

@end

