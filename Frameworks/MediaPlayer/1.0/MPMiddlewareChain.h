//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEnumerator;

@interface MPMiddlewareChain : NSObject
{
    NSEnumerator *_middlewareEnumerator;
}

+ (void)_addBuilderProtocol:(id)arg1;
+ (void)registerReturnType:(const char *)arg1 returnValueBlock:(id)arg2;
+ (id)builderProxyForProtocol:(id)arg1;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMiddleware:(id)arg1 protocol:(id)arg2;

@end

