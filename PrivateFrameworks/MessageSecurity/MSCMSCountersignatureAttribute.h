//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder>
{
    NSArray *_signerInfoSet;
}

@property(readonly) NSArray *signerInfoSet; // @synthesize signerInfoSet=_signerInfoSet;
- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)arg1;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 signature:(id)arg3 error:(id *)arg4;
- (BOOL)verifyCountersignatures:(id)arg1 error:(id *)arg2;
- (void)addSignerInfo:(id)arg1;
- (id)initWithSignerInfo:(id)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id *)arg3;

@end

