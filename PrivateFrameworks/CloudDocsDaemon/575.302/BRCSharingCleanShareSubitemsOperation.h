//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCleanShareSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    unsigned long long _rowID;
    NSMutableArray *_shareIDsToDelete;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)main;
- (void)_deleteNextShareIDBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

