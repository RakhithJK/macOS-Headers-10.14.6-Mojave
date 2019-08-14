//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPNetworkTaskOperation.h>

@class IMAPDownloadCache, NSOrderedSet;
@protocol IMAPMessageDataSource, IMAPSyncBodiesOperationDelegate;

@interface IMAPSyncBodiesOperation : IMAPNetworkTaskOperation
{
    NSOrderedSet *_messages;
    id <IMAPMessageDataSource> _dataSource;
    id <IMAPSyncBodiesOperationDelegate> _delegate;
    IMAPDownloadCache *_downloadCache;
}

@property(retain, nonatomic) IMAPDownloadCache *downloadCache; // @synthesize downloadCache=_downloadCache;
@property(readonly, nonatomic) __weak id <IMAPSyncBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IMAPMessageDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSOrderedSet *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMessages:(id)arg1 dataSource:(id)arg2 downloadCache:(id)arg3 delegate:(id)arg4;

@end

