//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class NSButton;

@interface IPXMetadataEditorFacesButtonCollectionViewItem : NSCollectionViewItem
{
    BOOL _isObservingRepresentedObject;
    NSButton *_button;
}

+ (id)collectionViewItemWithButton:(id)arg1;
@property(nonatomic) __weak NSButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithButton:(id)arg1;

@end

