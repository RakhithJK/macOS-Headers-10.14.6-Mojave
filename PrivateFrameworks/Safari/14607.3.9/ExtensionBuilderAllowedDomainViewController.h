//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ExtensionBuilderIndexedItemViewController.h>

@class NSButton, NSLayoutConstraint, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderAllowedDomainViewController : ExtensionBuilderIndexedItemViewController
{
    NSTextField *_allowedDomainTextField;
    NSButton *_deleteButton;
    NSView *_errorContainerView;
    NSLayoutConstraint *_errorContainerViewToBottomBorderViewVerticalConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *errorContainerViewToBottomBorderViewVerticalConstraint; // @synthesize errorContainerViewToBottomBorderViewVerticalConstraint=_errorContainerViewToBottomBorderViewVerticalConstraint;
@property(nonatomic) __weak NSView *errorContainerView; // @synthesize errorContainerView=_errorContainerView;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NSTextField *allowedDomainTextField; // @synthesize allowedDomainTextField=_allowedDomainTextField;
- (void).cxx_destruct;
- (void)_representedObjectDidChange;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)nibName;

@end

