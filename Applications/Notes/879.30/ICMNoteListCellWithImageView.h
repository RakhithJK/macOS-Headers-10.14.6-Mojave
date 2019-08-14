//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMNoteListCellView.h"

@class ICAttachment, ICImageAndMovieThumbnailView;

@interface ICMNoteListCellWithImageView : ICMNoteListCellView
{
    ICImageAndMovieThumbnailView *_thumbnailView;
    ICAttachment *_imageAttachment;
}

@property(retain, nonatomic) ICAttachment *imageAttachment; // @synthesize imageAttachment=_imageAttachment;
@property(nonatomic) __weak ICImageAndMovieThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)updateThumbnailWithImage:(struct NSImage *)arg1 imageScaling:(unsigned long long)arg2 isMovie:(BOOL)arg3 movieDuration:(CDStruct_198678f7)arg4 attachment:(id)arg5;
- (void)updateThumbnailHairlines;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;

@end

