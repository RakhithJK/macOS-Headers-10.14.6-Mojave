//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (SafariCoreExtras)
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
@property(readonly, nonatomic) BOOL safari_isSQLiteCorruptionError;
@property(readonly, nonatomic) BOOL safari_isSQLiteError;
@property(readonly, copy, nonatomic) NSString *safari_privacyPreservingDescription;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (BOOL)safari_isClientSideNetworkError;
@end

