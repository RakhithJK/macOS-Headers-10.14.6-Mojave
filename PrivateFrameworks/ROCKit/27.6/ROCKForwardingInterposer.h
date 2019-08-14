//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface ROCKForwardingInterposer : NSObject
{
    id <NSObject> _remoteObject;
}

+ (id)forwardingInterposerWithRemoteObject:(id)arg1;
@property(retain, nonatomic) id <NSObject> remoteObject; // @synthesize remoteObject=_remoteObject;
- (void).cxx_destruct;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteObject:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)rockEncodeWithSessionManager:(id)arg1 error:(id *)arg2;

@end
