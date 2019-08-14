//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, _WKUserContentWorld;

@interface WKUserScript : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::UserScript> _userScript;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property(readonly, nonatomic) long long injectionTime;
@property(readonly, copy, nonatomic) NSString *source;
- (void)dealloc;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3;
@property(readonly, nonatomic) _WKUserContentWorld *_userContentWorld;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

