//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class LiAddress, PHAssetCollection, PHFetchResult, PHPhotoLibrary, PXDisplayTitleInfo;

@interface IPXCreateMemoryAction : RDDatabaseAccessAction
{
    LiAddress *_createdAddress;
    PHAssetCollection *_assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
    PHPhotoLibrary *_photoLibrary;
}

@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) PHFetchResult *people; // @synthesize people=_people;
@property(readonly) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)createdMemory;
- (id)defaultActionNameLocalizationKey;
- (BOOL)canRedo;
- (int)performRedo;
- (BOOL)canUndo;
- (int)performUndo;
- (int)performAction;
- (id)resourceObject;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 people:(id)arg3;
- (id)initWithAssetCollection:(id)arg1;
- (id)init;

@end

