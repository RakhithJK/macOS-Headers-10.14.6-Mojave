//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/NSObject-Protocol.h>

@class SMCustomizeTree_Client;

@protocol SMCustomize_Client_Delegate <NSObject>
@property(readonly) SMCustomizeTree_Client *customizeTree;

@optional
- (void)reconnecting:(BOOL)arg1;
- (void)daemonConnectionLost;
@end

