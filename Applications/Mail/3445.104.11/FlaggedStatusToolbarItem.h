//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@protocol FlaggedStatusToolbarItemDelegate;

@interface FlaggedStatusToolbarItem : NSToolbarItem
{
    id <FlaggedStatusToolbarItemDelegate> _delegate;
}

@property(nonatomic) __weak id <FlaggedStatusToolbarItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)validate;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1;

@end
