//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BrowserTabViewItem;

__attribute__((visibility("hidden")))
@interface BrowserTabViewController : NSViewController
{
    BrowserTabViewItem *_tabViewItem;
    NSViewController *_contentViewController;
}

@property(retain, nonatomic) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) __weak BrowserTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void).cxx_destruct;
- (void)_updateViewHierarchy;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTabViewItem:(id)arg1;

@end
