//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURLCredential, NSURLProtectionSpace;

@interface WBSProtectionSpaceMatch : NSObject
{
    NSURLProtectionSpace *_protectionSpace;
    NSDictionary *_credentials;
    NSURLCredential *_defaultCredential;
    long long _matchLevel;
}

@property(readonly, nonatomic) long long matchLevel; // @synthesize matchLevel=_matchLevel;
@property(readonly, nonatomic) NSURLCredential *defaultCredential; // @synthesize defaultCredential=_defaultCredential;
@property(readonly, copy, nonatomic) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property(readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
- (void).cxx_destruct;
- (id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4;

@end

