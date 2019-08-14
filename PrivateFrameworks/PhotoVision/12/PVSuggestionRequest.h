//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CVMLRequest, NSArray, NSString, PVCanceler;

__attribute__((visibility("hidden")))
@interface PVSuggestionRequest : NSObject
{
    long long _type;
    NSString *_requestId;
    NSArray *_csns;
    NSArray *_cflags;
    CDUnknownBlockType _updateHandler;
    CVMLRequest *_cvmlRequest;
    PVCanceler *_canceller;
}

+ (id)requestWithFaceCSNs:(id)arg1 withFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
@property(readonly) PVCanceler *canceller; // @synthesize canceller=_canceller;
@property(retain) CVMLRequest *cvmlRequest; // @synthesize cvmlRequest=_cvmlRequest;
@property(copy) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly) NSArray *cflags; // @synthesize cflags=_cflags;
@property(readonly) NSArray *csns; // @synthesize csns=_csns;
@property(readonly) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithFaceCSNs:(id)arg1 withFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end

