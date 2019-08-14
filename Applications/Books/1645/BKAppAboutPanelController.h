//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSTextField;

@interface BKAppAboutPanelController : NSWindowController
{
    NSTextField *_appNameField;
    NSTextField *_appVersionField;
    NSTextField *_appCopyrightField;
    NSImageView *_imageView;
    NSButton *_acknowledgementsButton;
    NSButton *_licenseAgreementButton;
}

+ (id)windowNibName;
+ (id)instance;
@property __weak NSButton *licenseAgreementButton; // @synthesize licenseAgreementButton=_licenseAgreementButton;
@property __weak NSButton *acknowledgementsButton; // @synthesize acknowledgementsButton=_acknowledgementsButton;
- (void).cxx_destruct;
- (void)licenseAgreementButton:(id)arg1;
- (void)acknowledgementsButton:(id)arg1;
- (id)licenseFileName;
- (id)acknowledgementsFileName;
- (id)imageName;
- (void)awakeFromNib;
- (id)init;
- (void)performWindowClose:(id)arg1;

@end

