//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@interface AAURLProtocol : NSURLProtocol
{
    unsigned long long _state;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)_normalizedRequestForURL:(id)arg1;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

