//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FTPreferencesAccountController, NSView;

@interface FTPreferencesWindowController : NSWindowController
{
    NSView *_accountPlaceholderView;
    FTPreferencesAccountController *_accountViewController;
}

@property(retain, nonatomic) FTPreferencesAccountController *accountViewController; // @synthesize accountViewController=_accountViewController;
@property(nonatomic) __weak NSView *accountPlaceholderView; // @synthesize accountPlaceholderView=_accountPlaceholderView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithWindow:(id)arg1;
- (id)init;

@end

