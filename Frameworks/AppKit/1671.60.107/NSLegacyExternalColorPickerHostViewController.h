//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSColorPickingInternal-Protocol.h>
#import <AppKit/NSLegacyExternalColorPickerHostViewController-Protocol.h>
#import <AppKit/NSRemoteViewDelegate-Protocol.h>

@class NSColor, NSColorPanel, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSLegacyExternalColorPickerHostViewController : NSViewController <NSLegacyExternalColorPickerHostViewController, NSRemoteViewDelegate, NSColorPickingInternal>
{
    NSURL *_bundleURL;
    unsigned long long _initialMask;
    BOOL _firstLoad;
    NSColorPanel *_colorPanel;
    BOOL _isActivePicker;
    NSColor *_currentColor;
}

+ (void)warmup;
@property(copy, setter=_setCurrentColor:) NSColor *_currentColor; // @synthesize _currentColor;
- (void)loadView;
- (void)viewDidInvalidate:(id)arg1;
- (void)preparePickerWithSandboxExtension:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)remoteView;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)attachColorList:(id)arg1;
- (void)detachColorList:(id)arg1;
- (struct CGSize)minContentSize;
- (id)buttonToolTip;
- (id)description;
- (id)provideNewButtonImage;
- (void)insertNewButtonImage:(id)arg1 in:(id)arg2;
- (void)alphaControlAddedOrRemoved:(id)arg1;
- (void)setMode:(long long)arg1;
@property(readonly, copy) NSString *pickerIdentifier;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 bundleURL:(id)arg3;
- (void)viewSizeChanged:(id)arg1;
- (void)pickColor:(id)arg1;
@property BOOL isActivePicker;
- (void)setColor:(id)arg1;
- (id)provideNewView:(BOOL)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end

