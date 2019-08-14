//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVSearchResultContentItemCellView.h"

@class NSImageView, NSTextField;

@interface PVSearchResultPageItemCellView : PVSearchResultContentItemCellView
{
    NSTextField *_resultTitle;
    NSImageView *_thumbnailImageView;
}

@property(readonly) __weak NSImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(readonly) __weak NSTextField *resultTitle; // @synthesize resultTitle=_resultTitle;
- (void).cxx_destruct;
- (void)_setTextColorForBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)viewWillDraw;
- (void)stopObservingObject:(id)arg1;
- (void)startObservingObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

