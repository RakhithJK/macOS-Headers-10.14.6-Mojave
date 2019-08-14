//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAnnotationViewController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class IPXCommentTextView, NSButton, NSString, NSTextField;

@interface IPXCommentViewController : IPXAnnotationViewController <NSTextFieldDelegate>
{
    BOOL _deletingComment;
    IPXCommentTextView *_textView;
    NSTextField *_author;
    NSTextField *_date;
    NSButton *_deleteButton;
    NSButton *_cancelButton;
}

@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain) NSTextField *date; // @synthesize date=_date;
@property(retain) NSTextField *author; // @synthesize author=_author;
@property(retain) IPXCommentTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)deleteButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
@property BOOL deletingComment; // @synthesize deletingComment=_deletingComment;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (BOOL)_isBusyElsewhere;
- (void)_viewFrameChanged:(id)arg1;
- (void)_updateTrackingAreas;
- (void)_updateDeleteButtonAttributesForState:(unsigned long long)arg1;
- (BOOL)_canDelete;
- (void)_updateCancelButtonAttributesForState:(unsigned long long)arg1;
- (void)_setupTextView:(id)arg1;
- (void)_removeFileURLLinks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

