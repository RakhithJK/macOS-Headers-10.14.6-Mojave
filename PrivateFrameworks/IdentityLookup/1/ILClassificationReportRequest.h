//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding>
{
    NSString *_extensionIdentifier;
    NSDictionary *_jsonDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2;

@end

