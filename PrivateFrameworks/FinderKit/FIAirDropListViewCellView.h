//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class CNAvatarCache, FI_TAirDropProgressView, FI_TButton, FI_TTextField, FI_TUpdateLayerView, NSLayoutConstraint, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FIAirDropListViewCellView : NSTableCellView
{
    FI_TAirDropProgressView *_progressView;
    NSView *_avatarView;
    FI_TButton *_cancelButton;
    FI_TUpdateLayerView *_pressedStateOverlayView;
    FI_TTextField *_statusTextField;
    struct TKeyValueBinder _cancellableBinder;
    struct TKeyValueBinder _percentCompleteBinder;
    struct TKeyValueBinder _indeterminateProgressBinder;
    struct TKeyValueBinder _contactBinder;
    struct TKeyValueBinder _personNameBinder;
    struct TNSRef<CNAvatarViewController, void> _avatarViewController;
    _Bool _isCancellable;
    NSLayoutConstraint *_cancelButtonWidthConstraint;
    double _defaultCancelButtonWidth;
    NSLayoutConstraint *_subtitleToCancelButtonGapConstraint;
    double _defaultSubtitleToCancelButtonGap;
    _Bool _pressed;
    NSString *_statusStr;
    NSString *_personNameStr;
    function_0b4d038e _ignoreClickHandler;
    function_2cc04e6b _clickHandler;
}

@property(getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(retain) NSString *personNameStr; // @synthesize personNameStr=_personNameStr;
@property(readonly, retain) NSString *statusStr; // @synthesize statusStr=_statusStr;
@property(nonatomic) function_2cc04e6b clickHandler; // @synthesize clickHandler=_clickHandler;
@property(nonatomic) function_0b4d038e ignoreClickHandler; // @synthesize ignoreClickHandler=_ignoreClickHandler;
@property(readonly, retain) FI_TTextField *statusTextField; // @synthesize statusTextField=_statusTextField;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
- (_Bool)handleClick;
- (void)cancelButtonPressed:(id)arg1;
@property(getter=isCancellable) _Bool cancellable; // @dynamic cancellable;
@property(retain) CNAvatarCache *sharedAvatarCache; // @dynamic sharedAvatarCache;
- (id)iconImageView;
@property(readonly, retain) FI_TTextField *machineNameTxtFld; // @dynamic machineNameTxtFld;
- (void)prepareForReuse;
- (void)dealloc;
- (void)awakeFromNib;

@end

