//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface ICNFMCAuthScheme : NSObject
{
}

+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;
+ (id)schemeWithAccountInfo:(id)arg1;
+ (id)schemeWithName:(id)arg1;
+ (id)knownSchemes;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSSet *supportedSaslMechanisms;
@property(readonly, nonatomic) BOOL requiresPassword;
@property(readonly, nonatomic) BOOL requiresUsername;

@end

