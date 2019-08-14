//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DigiHubEvent, NSArray, NSButton, NSDictionary, NSImageView, NSPopUpButton, NSTextField, NSWindow;

@interface AskDialogController : NSObject
{
    DigiHubEvent *_event;
    NSDictionary *_dataDict;
    NSPopUpButton *_actionPopup;
    NSTextField *_askDescription;
    NSButton *_defaultCheckbox;
    NSButton *_ejectButton;
    NSImageView *_iconView;
    NSWindow *_window;
    _Bool _saveAsDefault;
    _Bool _hasEject;
    int _result;
    NSArray *_topLevelObjects;
    NSDictionary *_bundleIDMapper;
    id _delegate;
    id _key;
}

@property(nonatomic) _Bool hasEject; // @synthesize hasEject=_hasEject;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *bundleIDMapper; // @synthesize bundleIDMapper=_bundleIDMapper;
@property(nonatomic) NSButton *ejectButton; // @synthesize ejectButton=_ejectButton;
@property(nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) NSButton *defaultCheckbox; // @synthesize defaultCheckbox=_defaultCheckbox;
@property(nonatomic) NSTextField *askDescription; // @synthesize askDescription=_askDescription;
@property(nonatomic) NSPopUpButton *actionPopup; // @synthesize actionPopup=_actionPopup;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
@property(nonatomic) _Bool saveAsDefault; // @synthesize saveAsDefault=_saveAsDefault;
@property(nonatomic) int result; // @synthesize result=_result;
@property(readonly, nonatomic) DigiHubEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_popupSetURL:(id)arg1 isApplication:(BOOL)arg2;
- (void)_popupSetAction:(int)arg1;
- (void)_chooseScriptDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_chooseAppDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)_menuFromArray:(id)arg1;
- (void)doAskHelpLookup:(id)arg1;
- (void)flashEjectAndClose;
- (void)_handleActionMenu:(id)arg1;
- (void)dismissDialog:(id)arg1;
- (void)awakeFromNib;
- (id)_getAskDialogIcon:(id)arg1;
- (id)_getEventDictionary;
- (id)_getAskDialogText:(id)arg1;
- (id)_getNibName;
- (void)setDelegate:(id)arg1 withKey:(id)arg2;
- (id)initWithEvent:(id)arg1 bundleIDMapper:(id)arg2 canEject:(BOOL)arg3;

@end

