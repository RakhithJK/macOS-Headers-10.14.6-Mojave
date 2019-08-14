//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXImportSource.h"

@class ICCameraDevice;

@interface IPXImportDevice : IPXImportSource
{
    BOOL _observingTrustRelationship;
    ICCameraDevice *_device;
}

@property(retain) ICCameraDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)importAssets:(id)arg1 intoLibrary:(id)arg2 intoAlbum:(id)arg3 deleteAfterImport:(BOOL)arg4 preserveFolderStructure:(BOOL)arg5 statusReceiver:(id)arg6 atEnd:(CDUnknownBlockType)arg7;
- (BOOL)loadIfNecessary:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)requiresUserTrust;
- (BOOL)prefersSwitch;
- (id)iconWithSize:(struct CGSize)arg1;
- (void)ejectMedia;
- (BOOL)hasVolumeMountPoint;
- (BOOL)canDelete;
- (BOOL)canEject;
- (BOOL)canAutolaunch;
- (id)displayName;
- (void)_stopObservingDeviceName;
- (void)_startObservingDeviceName;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end
