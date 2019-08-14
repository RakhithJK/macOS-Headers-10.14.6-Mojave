//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : NSObject
{
    NSManagedObjectContext *_metadataMOC;
    PFUbiquityMetadataFactoryEntry *_metadataEntry;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootURL;
    NSString *_storeName;
    PFUbiquityLocation *_metadataStoreFileLocation;
}

@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) PFUbiquityLocation *metadataStoreFileLocation; // @synthesize metadataStoreFileLocation=_metadataStoreFileLocation;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootURL; // @synthesize ubiquityRootURL=_ubiquityRootURL;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) PFUbiquityMetadataFactoryEntry *metadataEntry; // @synthesize metadataEntry=_metadataEntry;
@property(readonly, nonatomic) NSManagedObjectContext *metadataMOC; // @synthesize metadataMOC=_metadataMOC;
- (id)peerForPeerID:(id)arg1 createIfMissing:(BOOL)arg2;
- (id)allPeers;
- (id)createMinMetadataStoreKnowledgeVector:(id *)arg1;
- (id)createMetadataStoreKnowledgeVector:(id *)arg1;
- (BOOL)purgeMetadataForStoreMetadata:(id)arg1 withError:(id *)arg2;
- (BOOL)purgeAndInitializeMetadataStoreFileWithError:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithMetadataEntry:(id)arg1;
- (id)init;

@end

