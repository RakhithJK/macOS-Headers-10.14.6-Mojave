//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICAttachmentGalleryModel.h>

#import <NotesUI/NSFilePromiseProviderDelegate-Protocol.h>

@class NSString;

@interface ICAttachmentGalleryModel (UI) <NSFilePromiseProviderDelegate>
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (id)filePromiseProvider;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (BOOL)requiresFilePromiseForDrags;
- (id)activityItems;
- (id)quicklookPreviewItems;
- (id)itemProvider;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

