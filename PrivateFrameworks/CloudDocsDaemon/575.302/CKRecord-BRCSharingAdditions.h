//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (BRCSharingAdditions)
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(BOOL)arg2;
- (id)brc_documentName;
- (id)brc_sharedDocumentDisplayName;
- (id)brc_sharedDocumentExtension;
- (BOOL)isFolderShare;
@end

