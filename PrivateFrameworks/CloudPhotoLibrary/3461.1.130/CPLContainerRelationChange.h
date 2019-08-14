//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLContainerRelation, NSString;

@interface CPLContainerRelationChange : CPLRecordChange
{
    NSString *_itemIdentifier;
    CPLContainerRelation *_relation;
}

+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2;
+ (id)relationToContainerWithIdentifier:(id)arg1;
@property(retain, nonatomic) CPLContainerRelation *relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (BOOL)supportsDirectDeletion;
- (BOOL)supportsDeletion;
- (BOOL)validateFullRecord;
- (id)description;
- (id)scopedIdentifierForQuarantine;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setContainerScopedIdentifier:(id)arg1;
- (id)containerScopedIdentifier;
- (void)setItemScopedIdentifier:(id)arg1;
- (id)itemScopedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)scopedIdentifiersForMapping;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end

