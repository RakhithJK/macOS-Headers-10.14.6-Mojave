//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ISSupport/ISS_DAVChallenge.h>

@class NSString;

@interface ISS__DAVBasicChallenge : ISS_DAVChallenge
{
    NSString *authString;
}

- (void)addAuthHeaderToMessage:(struct __CFHTTPMessage *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithAuthString:(id)arg1;

@end

