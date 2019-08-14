//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreFoundation/ISOperation.h>

#import <StoreFoundation/ISDialogOperationDelegate-Protocol.h>

@class ISDialog, ISDialogButton, ISServerAuthenticationOperation, NSNumber, NSString;

@interface ISDialogOperation : ISOperation <ISDialogOperationDelegate>
{
    ISDialog *_dialog;
    BOOL _performDefaultActions;
    ISDialogButton *_selectedButton;
    id _userNotification;
    ISServerAuthenticationOperation *_authenticationOperation;
    CDUnknownBlockType _buttonClickHandler;
}

+ (id)operationWithDialog:(id)arg1 storeClient:(id)arg2;
@property(copy) CDUnknownBlockType buttonClickHandler; // @synthesize buttonClickHandler=_buttonClickHandler;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property BOOL performDefaultActions; // @synthesize performDefaultActions=_performDefaultActions;
@property(readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)run;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)handleButtonSelected:(long long)arg1;
@property(readonly) NSNumber *authenticatedAccountDSID;
@property(readonly) ISServerAuthenticationOperation *authenticationOperation; // @dynamic authenticationOperation;
- (id)initWithDialog:(id)arg1 storeClient:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
