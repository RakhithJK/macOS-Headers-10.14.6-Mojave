//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface TestDriveMigrationBannerViewController : NSViewController
{
    BOOL _isPreparedForPresentation;
    NSButton *_keepButton;
    NSButton *_discardButton;
    NSTextField *_descriptionField;
}

@property(nonatomic) __weak NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(nonatomic) __weak NSButton *discardButton; // @synthesize discardButton=_discardButton;
@property(nonatomic) __weak NSButton *keepButton; // @synthesize keepButton=_keepButton;
- (void).cxx_destruct;
- (void)_updateDescription;
- (BOOL)prepareForPresentation;
- (void)viewDidAppear;
- (void)discardData:(id)arg1;
- (void)keepData:(id)arg1;
- (id)nibName;

@end

