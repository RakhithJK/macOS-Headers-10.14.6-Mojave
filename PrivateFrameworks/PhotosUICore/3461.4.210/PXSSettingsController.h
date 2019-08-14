//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <PhotosUICore/NSWindowDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyPathObserver-Protocol.h>

@class NSString, PXSModuleController;

@interface PXSSettingsController : NSWindowController <PXSettingsKeyPathObserver, NSWindowDelegate>
{
    BOOL _willSave;
    PXSModuleController *_rootModuleController;
    CDUnknownBlockType _onWindowDidClose;
}

@property(copy, nonatomic) CDUnknownBlockType onWindowDidClose; // @synthesize onWindowDidClose=_onWindowDidClose;
@property(nonatomic) BOOL willSave; // @synthesize willSave=_willSave;
@property(readonly, nonatomic) PXSModuleController *rootModuleController; // @synthesize rootModuleController=_rootModuleController;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_save;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

