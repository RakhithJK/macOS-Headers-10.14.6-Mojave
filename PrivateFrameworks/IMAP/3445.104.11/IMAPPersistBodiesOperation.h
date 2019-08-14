//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSOrderedSet;
@protocol IMAPPersistBodiesOperationDelegate;

@interface IMAPPersistBodiesOperation : IMAPPersistenceTaskOperation
{
    NSOrderedSet *_downloads;
    id <IMAPPersistBodiesOperationDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <IMAPPersistBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSOrderedSet *downloads; // @synthesize downloads=_downloads;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDownloads:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

@end

