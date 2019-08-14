//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSString;

@interface DMFUpdateDeclarationsRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;
    NSString *_syncToken;
    NSArray *_upsertDeclarations;
    NSArray *_removeDeclarations;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSArray *removeDeclarations; // @synthesize removeDeclarations=_removeDeclarations;
@property(copy, nonatomic) NSArray *upsertDeclarations; // @synthesize upsertDeclarations=_upsertDeclarations;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

