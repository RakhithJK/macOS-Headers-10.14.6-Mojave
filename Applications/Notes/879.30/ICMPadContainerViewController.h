//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSManagedObjectContext, NSView, PadContentView, PadViewController;

@interface ICMPadContainerViewController : NSViewController
{
    PadContentView *_padContentView;
    PadViewController *_padViewController;
    NSView *_padView;
}

@property(nonatomic) __weak NSView *padView; // @synthesize padView=_padView;
@property(retain, nonatomic) PadViewController *padViewController; // @synthesize padViewController=_padViewController;
@property(nonatomic) __weak PadContentView *padContentView; // @synthesize padContentView=_padContentView;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (void)viewWillLayout;
- (void)awakeFromNib;
- (void)viewDidLoad;

@end

