//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotoCaptionCell.h"

@class NSButton, NSColor, NSImage, RDPerson, UXImageView;
@protocol IPXPeopleHomeCellDelegate;

@interface IPXPeopleHomeCell : IPXPhotoCaptionCell
{
    NSColor *_backgroundColor;
    BOOL _editing;
    id <IPXPeopleHomeCellDelegate> _delegate;
    NSButton *_favoriteButton;
    double _heartAspectRatio;
    UXImageView *_plusView;
}

+ (unsigned long long)badgesViewOptions;
+ (double)captionLabelsGap;
+ (double)nameLabelHeight;
+ (double)captionHeight;
+ (id)captionCellBackgroundColor;
@property(retain, nonatomic) UXImageView *plusView; // @synthesize plusView=_plusView;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) double heartAspectRatio; // @synthesize heartAspectRatio=_heartAspectRatio;
@property(retain, nonatomic) NSButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property __weak id <IPXPeopleHomeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) RDPerson *representedPerson;
- (id)mirrorCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
@property(readonly) NSImage *homeCellSnapshotImage;
@property(readonly) NSImage *homeCellThumbnailImage;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)searchViewControllerWillBeginFieldEditing:(id)arg1;
- (void)searchViewController:(id)arg1 selectedSuggestion:(id)arg2 row:(long long)arg3;
- (double)_scaledFontSize;
- (struct CGRect)_favoriteButtonFrame;
- (struct CGRect)_thumbFrame;
- (void)didCancelCaptionEditing;
- (void)didEndCaptionEditingWithString:(id)arg1;
- (void)willBeginCaptionEditing;
- (BOOL)canEditCaption;
- (id)initialCaptionEditingString;
- (id)captionAttributes;
- (void)prepareForReuse;
- (void)updateWithMediaItem:(id)arg1;
- (struct CGRect)captionTextFieldFrame;
- (struct CGRect)thumbnailViewFrame;
- (void)setThumbnailImage:(id)arg1 usingNearestInterpolation:(BOOL)arg2 animated:(BOOL)arg3;
- (struct CGRect)selectionBorderFrame;
- (void)viewDidChangeBackingProperties;
- (void)layoutSubviews;
- (void)_updateCaptionState;
- (BOOL)_hasValidThumbnail;
- (void)setCaption:(id)arg1;
- (void)updateCaptionFont;
- (void)updateWithTitle:(id)arg1 filename:(id)arg2;
- (void)toggleFavoriteState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)database;
- (BOOL)useFaceSearchFieldForEditing;

@end

