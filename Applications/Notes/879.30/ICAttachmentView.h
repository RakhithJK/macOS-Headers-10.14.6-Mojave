//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesUI/ICBaseAttachmentView.h>

#import "ICAttachmentViewContentFrame-Protocol.h"
#import "NSAccessibilityImage-Protocol.h"
#import "NSGestureRecognizerDelegate-Protocol.h"

@class ICAttachmentSharingServicePickerController, ICMacTextView, ICServicesRolloverView, NSSharingServicePicker, NSString;

@interface ICAttachmentView : ICBaseAttachmentView <NSAccessibilityImage, NSGestureRecognizerDelegate, ICAttachmentViewContentFrame>
{
    BOOL _forManualRendering;
    ICAttachmentSharingServicePickerController *_sharingServicePickerController;
    ICServicesRolloverView *_icaxServicesRolloverView;
}

@property(retain, nonatomic) ICServicesRolloverView *icaxServicesRolloverView; // @synthesize icaxServicesRolloverView=_icaxServicesRolloverView;
@property(retain, nonatomic) ICAttachmentSharingServicePickerController *sharingServicePickerController; // @synthesize sharingServicePickerController=_sharingServicePickerController;
@property(readonly) BOOL forManualRendering; // @synthesize forManualRendering=_forManualRendering;
- (void).cxx_destruct;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
@property(readonly, nonatomic) NSSharingServicePicker *icaxSharingServicePicker;
- (void)icaxActivate;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)openAttachmentView:(id)arg1;
- (void)selectAttachmentView:(id)arg1;
- (struct CGRect)boundsToUseForCursorRect;
- (void)resetCursorRects;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)_shareServiceSelected:(id)arg1;
- (void)showAttachmentsAsLargePreviews:(id)arg1;
- (void)divergeCryptoKey:(id)arg1;
- (void)showAttachmentsAsThumbnails:(id)arg1;
- (void)setAttachmentViewType:(short)arg1;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (BOOL)shouldOpenAttachmentOnDoubleClick;
- (BOOL)shouldSelectOnClick;
- (void)setupForMarkup;
- (void)didLongPressAttachment:(id)arg1;
- (void)prepareForPrinting;
- (void)copyIdentifier:(id)arg1;
- (void)openAttachmentInPreview;
- (void)openAttachment;
- (void)didTapAttachment:(id)arg1;
- (void)setupEventHandling;
@property(readonly, nonatomic) ICMacTextView *textView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(BOOL)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sharedInit:(BOOL)arg1;
- (void)dealloc;
- (struct CGRect)frameForContent;
- (void)setupConstraints;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilitySubrole;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
@property(readonly, nonatomic) BOOL shouldIncludeAttachmentTitleInAXLabel;
- (void)icaxShowServicesMenu;
@property(readonly, nonatomic) NSString *icaxTypeDescription;
@property(readonly, nonatomic) NSString *icaxAttachmentViewTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

