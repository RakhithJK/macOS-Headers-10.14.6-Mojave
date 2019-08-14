//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ExtensionBuilderIndexedItemViewController.h>

@class ExtensionBuilderPopUpMenuManager, NSButton, NSDictionary, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderToolbarItemViewController : ExtensionBuilderIndexedItemViewController
{
    ExtensionBuilderPopUpMenuManager *_imageFilePopUpMenuManager;
    ExtensionBuilderPopUpMenuManager *_menuIdentifiersPopUpMenuManager;
    ExtensionBuilderPopUpMenuManager *_popoverIdentifiersPopUpMenuManager;
    NSButton *_deleteButton;
    NSTextField *_labelTextField;
    NSPopUpButton *_imagePopupButton;
    NSPopUpButton *_menuPopupButton;
    NSPopUpButton *_popoverPopupButton;
    NSView *_labelErrorContainerView;
    NSView *_imageErrorContainerView;
    NSView *_identifierErrorContainerView;
    NSButton *_includeByDefaultCheckbox;
    NSLayoutConstraint *_labelErrorContainerViewToPaletteLabelVerticalConstraint;
    NSLayoutConstraint *_imageErrorContainerViewToMenuPopuplVerticalConstraint;
    NSLayoutConstraint *_identifierErrorContainerViewToCommandVerticalConstraint;
}

+ (id)keyPathsForValuesAffectingToolbarItemIncludeByDefault;
+ (id)keyPathsForValuesAffectingToolbarItemCommand;
+ (id)keyPathsForValuesAffectingToolbarItemIdentifier;
+ (id)keyPathsForValuesAffectingIndexOfToolbarItemPopoverMenuItem;
+ (id)keyPathsForValuesAffectingIndexOfToolbarItemMenuMenuItem;
+ (id)keyPathsForValuesAffectingIndexOfToolbarItemImageMenuItem;
+ (id)keyPathsForValuesAffectingToolbarItemPaletteLabel;
+ (id)keyPathsForValuesAffectingToolbarItemTooltip;
+ (id)keyPathsForValuesAffectingToolbarItemLabel;
+ (id)keyPathsForValuesAffectingToolbarItemName;
@property(retain, nonatomic) NSLayoutConstraint *identifierErrorContainerViewToCommandVerticalConstraint; // @synthesize identifierErrorContainerViewToCommandVerticalConstraint=_identifierErrorContainerViewToCommandVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageErrorContainerViewToMenuPopuplVerticalConstraint; // @synthesize imageErrorContainerViewToMenuPopuplVerticalConstraint=_imageErrorContainerViewToMenuPopuplVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelErrorContainerViewToPaletteLabelVerticalConstraint; // @synthesize labelErrorContainerViewToPaletteLabelVerticalConstraint=_labelErrorContainerViewToPaletteLabelVerticalConstraint;
@property(nonatomic) __weak NSButton *includeByDefaultCheckbox; // @synthesize includeByDefaultCheckbox=_includeByDefaultCheckbox;
@property(nonatomic) __weak NSView *identifierErrorContainerView; // @synthesize identifierErrorContainerView=_identifierErrorContainerView;
@property(nonatomic) __weak NSView *imageErrorContainerView; // @synthesize imageErrorContainerView=_imageErrorContainerView;
@property(nonatomic) __weak NSView *labelErrorContainerView; // @synthesize labelErrorContainerView=_labelErrorContainerView;
@property(nonatomic) __weak NSPopUpButton *popoverPopupButton; // @synthesize popoverPopupButton=_popoverPopupButton;
@property(nonatomic) __weak NSPopUpButton *menuPopupButton; // @synthesize menuPopupButton=_menuPopupButton;
@property(nonatomic) __weak NSPopUpButton *imagePopupButton; // @synthesize imagePopupButton=_imagePopupButton;
@property(nonatomic) __weak NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)_representedObjectDidChange;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)nibName;
@property(nonatomic) BOOL toolbarItemIncludeByDefault;
@property(copy, nonatomic) NSString *toolbarItemCommand;
@property(copy, nonatomic) NSString *toolbarItemIdentifier;
@property(nonatomic) unsigned long long indexOfToolbarItemPopoverMenuItem;
@property(nonatomic) unsigned long long indexOfToolbarItemMenuMenuItem;
@property(nonatomic) unsigned long long indexOfToolbarItemImageMenuItem;
@property(copy, nonatomic) NSString *toolbarItemPaletteLabel;
@property(copy, nonatomic) NSString *toolbarItemTooltip;
@property(copy, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSString *toolbarItemName;
@property(retain) NSDictionary *representedObject; // @dynamic representedObject;
- (void)_updateVisibilityOfIdentifierError;
- (void)_updateVisibilityOfImageError;
- (void)_updateVisibilityOfLabelError;
- (void)_updatePopoverIdentifiersMenu;
- (void)_updateMenuIdentifiersMenu;
- (void)_updateImageMenu;
- (void)refreshFileMenus;

@end

