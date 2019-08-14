//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_IPXDatabaseEditorialModel.h"

#import "IPXVersionArrayControllerChangeReceiver-Protocol.h"

@class IPXQueryVersionArrayController, NSString, RDVersionsQuery;

@interface _IPXDatabaseVersionsQueryEditorialModel : _IPXDatabaseEditorialModel <IPXVersionArrayControllerChangeReceiver>
{
    IPXQueryVersionArrayController *_queryArrayController;
    BOOL _shouldFilterByDateRange;
    RDVersionsQuery *_versionsQuery;
}

@property(readonly, nonatomic) BOOL shouldFilterByDateRange; // @synthesize shouldFilterByDateRange=_shouldFilterByDateRange;
@property(readonly, nonatomic) RDVersionsQuery *versionsQuery; // @synthesize versionsQuery=_versionsQuery;
- (void).cxx_destruct;
- (void)versionArrayControllerDidChange:(id)arg1;
- (id)personsInVersions;
- (unsigned long long)personCountInVersions;
- (id)newAssetCollection;
- (id)newAllVersionsController;
@property(readonly, nonatomic) IPXQueryVersionArrayController *queryArrayController;
- (id)initWithDatabaseModel:(id)arg1 versionsQuery:(id)arg2 posterVersion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

