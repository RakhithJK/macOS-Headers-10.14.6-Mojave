//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDiscoveryBonjour, NSMutableArray;

@interface GKDiscoveryBonjourResolveContainer : NSObject
{
    NSMutableArray *_serviceRefList;
    GKDiscoveryBonjour *_context;
    CDUnknownBlockType _resolveCompletionHandler;
}

@property(nonatomic) GKDiscoveryBonjour *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType resolveCompletionHandler; // @synthesize resolveCompletionHandler=_resolveCompletionHandler;
@property(retain, nonatomic) NSMutableArray *serviceRefList; // @synthesize serviceRefList=_serviceRefList;
- (void)dealloc;
- (id)init;

@end

