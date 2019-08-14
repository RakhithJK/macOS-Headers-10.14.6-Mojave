//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class NSButton, NSString, NSView, RDAlbum, RDVersion;

@interface IPXAlbumInfoDebugViewController : IPXViewController <IPXMetadataEditorViewController>
{
    RDAlbum *_album;
    RDVersion *_oneVersion;
    NSButton *_touchDateButton;
    NSButton *_removePhotoButton;
}

@property(nonatomic) __weak NSButton *removePhotoButton; // @synthesize removePhotoButton=_removePhotoButton;
@property(nonatomic) __weak NSButton *touchDateButton; // @synthesize touchDateButton=_touchDateButton;
- (void).cxx_destruct;
- (void)a_removePhoto:(id)arg1;
- (void)a_touchDate:(id)arg1;
- (void)selectedVersions:(id)arg1;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end

