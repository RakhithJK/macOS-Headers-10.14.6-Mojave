//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, WBSSiteMetadataRequest;

@interface _WBSSiteMetadataToken : NSObject
{
    BOOL _isOneTimeRequest;
    WBSSiteMetadataRequest *_request;
    long long _priority;
    CDUnknownBlockType _responseHandler;
    NSTimer *_delayTimer;
    long long _lastResponseType;
}

@property(nonatomic) long long lastResponseType; // @synthesize lastResponseType=_lastResponseType;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) WBSSiteMetadataRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) BOOL isOneTimeRequest; // @synthesize isOneTimeRequest=_isOneTimeRequest;
- (void).cxx_destruct;
- (void)dispatchResponse:(id)arg1;
- (void)dealloc;
- (id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

