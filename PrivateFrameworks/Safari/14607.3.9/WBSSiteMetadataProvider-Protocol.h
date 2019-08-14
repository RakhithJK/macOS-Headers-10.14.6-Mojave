//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSOperation, WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <NSObject>
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(BOOL)arg2;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(char *)arg2;
- (BOOL)canHandleRequest:(WBSSiteMetadataRequest *)arg1;

@optional
@property(readonly, nonatomic) BOOL providesFavicons;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;
- (NSOperation *)operationForRequest:(WBSSiteMetadataRequest *)arg1;
@end
