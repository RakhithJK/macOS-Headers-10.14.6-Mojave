//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstallerPlugins/InstallerPane.h>

@class NSButton, NSTextView, NSView;

@interface StandardInstallController : InstallerPane
{
    NSView *uiBottomView;
    NSTextView *uiMessageTextView;
    NSButton *uiChangeInstallLocationButton;
    BOOL _showCustomizeButton;
    BOOL _customizeAlwaysFlowIsBeingUsed;
    BOOL _pageHasBeenEnteredBefore;
}

- (void)setCustomizeAlwaysFlowIsBeingUsed:(BOOL)arg1;
- (void)iaChangeInstallLocationButtonPressed:(id)arg1;
- (id)bottomContentView;
- (void)didEnterPane:(long long)arg1;
- (void)willEnterPane:(long long)arg1;
- (void)awakeFromNib;
- (id)title;
- (void)_fixScrollView;

@end
