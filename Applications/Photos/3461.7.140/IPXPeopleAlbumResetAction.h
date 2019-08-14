//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class PHPhotoLibrary;

@interface IPXPeopleAlbumResetAction : RDDatabaseAccessAction
{
    PHPhotoLibrary *_library;
}

@property(retain, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)progressMessageForExecution;
- (id)defaultActionNameLocalizationKey;
- (BOOL)userInitiated;
- (double)progressPercent;
- (int)performUndo;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (id)progressMessageForUndo;
- (void)performAction:(CDUnknownBlockType)arg1;
- (id)resourceObject;
- (id)initWithLibrary:(id)arg1;

@end
