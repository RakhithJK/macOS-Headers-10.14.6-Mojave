//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface _SFKeychainFetchResult : NSObject
{
    id _keychainFetchResultInternal;
}

+ (id)fetchResultWithError:(id)arg1;
+ (id)fetchResultWithValue:(id)arg1;
- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSError *error;
@property(readonly) id value;
@property(readonly) long long resultType;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

