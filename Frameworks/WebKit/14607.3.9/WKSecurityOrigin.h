//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject>
{
    struct ObjectStorage<API::SecurityOrigin> _securityOrigin;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) long long port;
@property(readonly, copy, nonatomic) NSString *host;
@property(readonly, copy, nonatomic) NSString *protocol;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
