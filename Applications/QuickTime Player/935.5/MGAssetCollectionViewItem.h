//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class AVAssetImageGenerator, AVTimeFormatter, NSTextField;

@interface MGAssetCollectionViewItem : NSCollectionViewItem
{
    NSTextField *_timeTextField;
    AVAssetImageGenerator *_imageGenerator;
    AVTimeFormatter *_timeFormatter;
}

@property(retain) AVTimeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain) NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
- (void).cxx_destruct;
- (id)subtitle;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)asset;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlightState:(long long)arg1;
- (void)setRepresentedObject:(id)arg1;

@end
