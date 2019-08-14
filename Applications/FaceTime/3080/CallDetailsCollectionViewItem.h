//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class CNAvatarViewController, NSButton, NSTextField, NSView;
@protocol CallDetailsCollectionViewItemDelegate;

@interface CallDetailsCollectionViewItem : NSCollectionViewItem
{
    id <CallDetailsCollectionViewItemDelegate> _delegate;
    NSTextField *_label;
    NSButton *_infoButton;
    NSView *_avatarViewHolder;
    CNAvatarViewController *_avatarViewController;
    NSTextField *_faceTimeVideoLabel;
}

+ (id)contactFormatter;
@property __weak NSTextField *faceTimeVideoLabel; // @synthesize faceTimeVideoLabel=_faceTimeVideoLabel;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property __weak NSView *avatarViewHolder; // @synthesize avatarViewHolder=_avatarViewHolder;
@property __weak NSButton *infoButton; // @synthesize infoButton=_infoButton;
@property __weak NSTextField *label; // @synthesize label=_label;
@property(nonatomic) __weak id <CallDetailsCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureWithContact:(id)arg1;
- (void)infoButtonPressed:(id)arg1;
- (void)viewDidLoad;

@end

