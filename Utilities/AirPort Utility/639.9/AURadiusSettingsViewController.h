//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AUSheetViewController.h"

#import "AUControlFocusProtocol-Protocol.h"

@class AURadiusSettings, NSButton, NSSecureTextField, NSString, NSTextField;

@interface AURadiusSettingsViewController : AUSheetViewController <AUControlFocusProtocol>
{
    NSTextField *server1IPLabel;
    NSTextField *server1IPField;
    NSTextField *server1SecretLabel;
    NSSecureTextField *server1SecretField;
    NSTextField *server1VerifyLabel;
    NSSecureTextField *server1VerifyField;
    NSTextField *server1PortLabel;
    NSTextField *server1PortField;
    NSTextField *server2IPLabel;
    NSTextField *server2IPField;
    NSTextField *server2SecretLabel;
    NSSecureTextField *server2SecretField;
    NSTextField *server2VerifyLabel;
    NSSecureTextField *server2VerifyField;
    NSTextField *server2PortLabel;
    NSTextField *server2PortField;
    NSButton *okButton;
    NSButton *cancelButton;
    AURadiusSettings *dataModel;
}

@property(retain, nonatomic) AURadiusSettings *dataModel; // @synthesize dataModel;
- (void)restoreDataModel:(id)arg1;
- (void)focusOnControlForSetting:(id)arg1;
- (id)_controlForSetting:(id)arg1;
- (id)createNewSubproperty;
- (id)nibName;
- (BOOL)valid;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

