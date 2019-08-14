//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DPDesktopWindow-Protocol.h"

@class CAContext, CALayer, DPColorSpace, DPPictureInfo, DPSharedDesktopImage, NSMutableArray, NSString, _CGSSpace;

@interface DPDesktopPicture : NSObject <DPDesktopWindow>
{
    unsigned int _wid;
    CAContext *_context;
    unsigned int _sid;
    CALayer *_layer;
    CALayer *_desktopLayer;
    _CGSSpace *_space;
    DPPictureInfo *_pictureInfo;
    CALayer *_pictureLayer;
    struct CGRect _frame;
    DPColorSpace *_colorSpace;
    DPSharedDesktopImage *_sharedImage;
    float _surfaceResolution;
    NSMutableArray *_remoteConnections;
    BOOL _sleeping;
    BOOL _darkened;
    _Bool _ordered;
    _Bool _blurredForExpose;
    _Bool _darkenAndBlur;
}

@property(nonatomic) _Bool blurredForExpose; // @synthesize blurredForExpose=_blurredForExpose;
@property(nonatomic) _Bool darkenAndBlur; // @synthesize darkenAndBlur=_darkenAndBlur;
@property(nonatomic) BOOL darkened; // @synthesize darkened=_darkened;
@property(retain, nonatomic) DPColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) DPSharedDesktopImage *sharedImage; // @synthesize sharedImage=_sharedImage;
@property(readonly, nonatomic) _CGSSpace *space; // @synthesize space=_space;
@property(nonatomic) BOOL sleeping; // @synthesize sleeping=_sleeping;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) unsigned int wid; // @synthesize wid=_wid;
@property(retain, nonatomic) DPPictureInfo *pictureInfo; // @synthesize pictureInfo=_pictureInfo;
- (void).cxx_destruct;
- (void)_updateRemoteDesktops;
- (void)_orderWindowOnscreen;
@property(readonly, copy) NSString *description;
- (void)removeRemoteConnection:(id)arg1;
- (unsigned int)addRemoteConnection:(id)arg1;
@property(readonly, nonatomic) unsigned int backdropWindow;
- (void)dumpLayerTree:(id)arg1;
- (void)invalidate;
- (void)moveToDisplay:(unsigned int)arg1 realDisplay:(unsigned int)arg2 displayUUID:(id)arg3;
- (void)forceShowForFailure;
- (BOOL)setFrame:(struct CGRect)arg1;
- (void)_setupDarkenedFilter;
- (void)setDarkenedValueImmediate:(double)arg1;
@property(readonly, nonatomic) BOOL isReady; // @dynamic isReady;
@property(readonly, nonatomic) BOOL isRenderable; // @dynamic isRenderable;
@property(readonly, nonatomic) CALayer *fullsizedLayer; // @dynamic fullsizedLayer;
@property(readonly, nonatomic) CALayer *miniLayer; // @dynamic miniLayer;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 pictureInfo:(id)arg2 space:(id)arg3 colorSpace:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

