//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEHelper;
@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject
{
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)processQueryNetworksResponse:(id)arg1;
- (id)createXPCRequest:(id)arg1 requestType:(long long)arg2;
- (id)init;
@property(readonly) NEHelper *helper;

@end

