//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NEAppInfo, NEFilterFlow, NEFilterReport;

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)report:(NEFilterReport *)arg1;
- (void)getSourceAppInfo:(NEAppInfo *)arg1 completionHandler:(void (^)(NEAppInfo *))arg2;
- (void)fetchCurrentRulesForFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
- (void)sendSocketContentFilterRequest;
- (void)sendBrowserContentFilterServerRequest;
@end

