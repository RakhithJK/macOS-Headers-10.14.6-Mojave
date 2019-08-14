//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "ICAttachmentBrickAudioPlayerViewV2Delegate-Protocol.h"
#import "ICMZoomableAttachmentView-Protocol.h"

@class ICAttachment, ICAttachmentBrickFrostedView, ICAttachmentBrickTextViewV2, ICMZoomController, ICSearchResult, NSImage, NSLayoutConstraint, NSString;

@interface ICAttachmentBrickViewV2 : NSView <ICAttachmentBrickAudioPlayerViewV2Delegate, ICMZoomableAttachmentView>
{
    BOOL _forceDefaultBrickSize;
    BOOL _forManualRendering;
    BOOL _fullHeightText;
    BOOL _showAsFileIcon;
    BOOL _frostedViewActive;
    BOOL _usingConstraintsForAXLargerTextSizes;
    BOOL _layerIsInvertedForAXInvertColors;
    BOOL _vibrant;
    BOOL _disableImageUpdates;
    BOOL _disableTextUpdates;
    BOOL _disableVibrancy;
    ICMZoomController *_zoomController;
    ICAttachment *_attachment;
    ICSearchResult *_searchResult;
    struct NSView *_accessoryView;
    unsigned long long _defaultBrickSize;
    unsigned long long _brickSize;
    ICAttachmentBrickFrostedView *_frostedView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_textViewTopConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewVerticalConstraint;
    NSLayoutConstraint *_accessoryViewTrailingConstraint;
    long long _fileSizeCache;
    NSString *_fileSizeStringCache;
    ICAttachmentBrickTextViewV2 *_textView;
    unsigned long long _brickType;
    unsigned long long _accessoryType;
    unsigned long long _imageScaling;
    struct NSImage *_image;
    struct CGSize _imageSize;
}

+ (struct CGSize)brickSizeWithSize:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) BOOL disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) BOOL disableTextUpdates; // @synthesize disableTextUpdates=_disableTextUpdates;
@property(nonatomic) BOOL disableImageUpdates; // @synthesize disableImageUpdates=_disableImageUpdates;
@property(nonatomic, getter=isVibrant) BOOL vibrant; // @synthesize vibrant=_vibrant;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) unsigned long long brickType; // @synthesize brickType=_brickType;
@property(retain, nonatomic) ICAttachmentBrickTextViewV2 *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL layerIsInvertedForAXInvertColors; // @synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors;
@property(nonatomic) BOOL usingConstraintsForAXLargerTextSizes; // @synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes;
@property(copy, nonatomic) NSString *fileSizeStringCache; // @synthesize fileSizeStringCache=_fileSizeStringCache;
@property(nonatomic) long long fileSizeCache; // @synthesize fileSizeCache=_fileSizeCache;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint; // @synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint; // @synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTopConstraint; // @synthesize textViewTopConstraint=_textViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isFrostedViewActive) BOOL frostedViewActive; // @synthesize frostedViewActive=_frostedViewActive;
@property(retain, nonatomic) ICAttachmentBrickFrostedView *frostedView; // @synthesize frostedView=_frostedView;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic, getter=isFullHeightText) BOOL fullHeightText; // @synthesize fullHeightText=_fullHeightText;
@property(nonatomic) unsigned long long brickSize; // @synthesize brickSize=_brickSize;
@property(nonatomic) BOOL forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(nonatomic) unsigned long long defaultBrickSize; // @synthesize defaultBrickSize=_defaultBrickSize;
@property(nonatomic) BOOL forceDefaultBrickSize; // @synthesize forceDefaultBrickSize=_forceDefaultBrickSize;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) ICMZoomController *zoomController; // @synthesize zoomController=_zoomController;
- (void).cxx_destruct;
- (void)updateAccessoryViewForAccessibilityInvertColors;
@property(readonly, nonatomic) NSString *typeDescriptionForAccessibility;
- (void)setContentsScale:(double)arg1;
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1;
- (void)updateSearchHighlighting;
- (struct CGSize)imageSizeForBrickSize:(unsigned long long)arg1;
- (void)updateAccessoryViewShadow;
- (id)createTextViewTrailingConstraint;
- (double)accessoryViewTopMarginWithAccessorySize:(struct CGSize)arg1;
- (struct CGSize)computedAccessorySize;
- (struct CGSize)computedSize;
- (double)layoutScaling;
- (void)scaleDidChange;
- (id)audioAttachmentDetail1StringWithDuration:(double)arg1;
- (void)updateFileSizeCacheStringIfNeeded;
- (void)updateImage;
- (void)clearAccessoryView;
- (void)updateAccessoryView;
- (void)updateText;
- (void)updateBackgroundImage;
- (void)updateStyle;
- (void)updateBrickType;
- (void)updateContentFromAttachment;
- (void)initializeBasicViews;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (struct NSColor *)backgroundColorForCurrentVibrancy;
- (void)updateVibrancyIfNecessary;
- (void)audioPlayerViewStopped:(id)arg1;
- (void)audioPlayerView:(id)arg1 updateTime:(double)arg2;
- (void)hostViewDidZoom:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1;
- (void)mediaDidLoadNotification:(id)arg1;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;
- (void)attachmentDidLoadNotification:(id)arg1;
- (id)quickLookTransitionImageWithContentRect:(struct CGRect *)arg1;
- (struct CGRect)quickLookSourceFrameOnScreen;
- (void)prepareForReuse;
- (void)prepareForPrinting;
- (void)setAttachment:(id)arg1 forSearchResult:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 defaultBrickSize:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)icaxTypeDescription;
- (id)accessibilityValueDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
