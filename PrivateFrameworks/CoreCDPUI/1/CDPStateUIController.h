//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreCDPUI/CDPStateBaseUIController.h>

@class NSImageView, NSView, NSWindow;
@protocol CDPWindowDelegateProtocol;

@interface CDPStateUIController : CDPStateBaseUIController
{
    NSView *_iCDPWindowView;
    NSWindow *_iCDPWindow;
    id <CDPWindowDelegateProtocol> _delegate;
    NSImageView *_displayImageView;
}

@property(retain, nonatomic) NSImageView *displayImageView; // @synthesize displayImageView=_displayImageView;
@property(retain, nonatomic) id <CDPWindowDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSWindow *iCDPWindow; // @synthesize iCDPWindow=_iCDPWindow;
@property(retain, nonatomic) NSView *iCDPWindowView; // @synthesize iCDPWindowView=_iCDPWindowView;
- (void).cxx_destruct;
- (void)changeView:(id)arg1;
- (void)endCDPView;
- (void)showCDPView:(id)arg1;
- (void)showCDPView:(id)arg1 modalForWindow:(id)arg2;
- (void)setupCDPView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

