//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSColor, NSImage, NSString, _TtC18Feedback_Assistant18FBAFilePromiseStub;

@interface FBAFilePromiseStubViewController : NSViewController
{
    BOOL _shouldShowQuestionLink;
    NSImage *_questionLinkIcon;
    NSString *_filename;
    _TtC18Feedback_Assistant18FBAFilePromiseStub *_stub;
    NSButton *_linkButton;
    NSButton *_revealButton;
}

+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingName;
@property __weak NSButton *revealButton; // @synthesize revealButton=_revealButton;
@property __weak NSButton *linkButton; // @synthesize linkButton=_linkButton;
@property BOOL shouldShowQuestionLink; // @synthesize shouldShowQuestionLink=_shouldShowQuestionLink;
@property(retain) _TtC18Feedback_Assistant18FBAFilePromiseStub *stub; // @synthesize stub=_stub;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(readonly) NSImage *questionLinkIcon; // @synthesize questionLinkIcon=_questionLinkIcon;
- (void).cxx_destruct;
- (void)didClickQuestionLink:(id)arg1;
- (void)didClickRevealButton:(id)arg1;
@property(readonly) NSImage *icon;
@property(readonly) NSColor *labelColor;
@property(readonly) NSString *name;
- (id)initWithFilePromiseStub:(id)arg1;
- (id)nibName;

@end

