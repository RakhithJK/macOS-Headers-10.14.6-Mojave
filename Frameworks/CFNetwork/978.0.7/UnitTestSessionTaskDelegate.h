//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UnitTestSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate>
{
    SmartBlockWithArgs_02d865d6 _didFinishCollectingMetricsCompletionBlock;
}

@property(nonatomic) SmartBlockWithArgs_02d865d6 didFinishCollectingMetricsCompletionBlock; // @synthesize didFinishCollectingMetricsCompletionBlock=_didFinishCollectingMetricsCompletionBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

