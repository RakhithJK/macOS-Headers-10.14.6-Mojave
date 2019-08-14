//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FREditorialItemDownloader-Protocol.h"

@class FCArticleController;
@protocol FRArticleEditorialItemProvider, FREditorialItemCreator, FREditorialItemEntryManager, FREditorialItemThumbnailCreator, FRFlintDataProviderFactory;

@interface FRArticleEditorialItemDownloader : NSObject <FREditorialItemDownloader>
{
    id <FRFlintDataProviderFactory> _flintDataProviderFactory;
    FCArticleController *_articleController;
    id <FREditorialItemEntryManager> _editorialItemEntryManager;
    id <FRArticleEditorialItemProvider> _articleEditorialItemProvider;
    id <FREditorialItemThumbnailCreator> _thumbnailCreator;
    id <FREditorialItemCreator> _editorialItemCreator;
}

@property(readonly, nonatomic) id <FREditorialItemCreator> editorialItemCreator; // @synthesize editorialItemCreator=_editorialItemCreator;
@property(readonly, nonatomic) id <FREditorialItemThumbnailCreator> thumbnailCreator; // @synthesize thumbnailCreator=_thumbnailCreator;
@property(readonly, nonatomic) id <FRArticleEditorialItemProvider> articleEditorialItemProvider; // @synthesize articleEditorialItemProvider=_articleEditorialItemProvider;
@property(readonly, nonatomic) id <FREditorialItemEntryManager> editorialItemEntryManager; // @synthesize editorialItemEntryManager=_editorialItemEntryManager;
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(readonly, nonatomic) id <FRFlintDataProviderFactory> flintDataProviderFactory; // @synthesize flintDataProviderFactory=_flintDataProviderFactory;
- (void).cxx_destruct;
- (void)loadArticleMetadataWithArticleID:(id)arg1 editorialItemFromCache:(id)arg2 contentManifest:(id)arg3 articleModifiedDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadArticleWithArticleID:(id)arg1 editorialItemFromCache:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadEditorialItemWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithArticleController:(id)arg1 dataProviderFactory:(id)arg2 articleEditorialItemProvider:(id)arg3 editorialItemEntryManager:(id)arg4 thumbnailCreator:(id)arg5 editorialItemCreator:(id)arg6;

@end

