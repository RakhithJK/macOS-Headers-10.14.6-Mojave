//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImageView, NSTextField, NSTimer, NSView;

@interface MGAboutPanelController : NSObject
{
    NSTimer *_timer;
    unsigned long long _timerIndex;
    NSView *_additionalCopyrightsView;
    NSImageView *_logoImageView;
    NSTextField *_URLTextField;
    NSTextField *_copyrightTextField;
}

+ (id)sharedAboutPanelController;
- (void).cxx_destruct;
- (void)fireTimer:(id)arg1;
- (void)aboutPanelDidHide:(id)arg1;
- (void)aboutPanelWillShow:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

