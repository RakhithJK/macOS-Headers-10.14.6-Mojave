//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>
{
    BOOL _isProductionContentEnvironment;
    BOOL _isProductionPrivateDataEnvironment;
    long long _environment;
    NSString *_contentContainerIdentifier;
    NSString *_contentContainerCombinationIdentifier;
    NSString *_privateDataContainerIdentifier;
    NSString *_privateDataSecureContainerIdentifier;
    NSString *_privateDataContainerCombinationIdentifier;
}

+ (id)defaultConfiguration;
@property(readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier; // @synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier;
@property(readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier; // @synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *privateDataContainerIdentifier; // @synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier;
@property(readonly, nonatomic) BOOL isProductionPrivateDataEnvironment; // @synthesize isProductionPrivateDataEnvironment=_isProductionPrivateDataEnvironment;
@property(readonly, nonatomic) BOOL isProductionContentEnvironment; // @synthesize isProductionContentEnvironment=_isProductionContentEnvironment;
@property(readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier; // @synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier;
@property(readonly, copy, nonatomic) NSString *contentContainerIdentifier; // @synthesize contentContainerIdentifier=_contentContainerIdentifier;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)initWithEnvironment:(long long)arg1;
- (id)initWithProductionContentEnvironment:(BOOL)arg1 productionPrivateDataEnvironment:(BOOL)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
