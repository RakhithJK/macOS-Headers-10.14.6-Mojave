//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSFormControlMetadata.h>

@class NSArray, NSDictionary, NSString;

@interface WBSMutableFormControlMetadata : WBSFormControlMetadata
{
}

@property(copy, nonatomic) NSArray *selectElementInfo; // @dynamic selectElementInfo;
@property(copy, nonatomic) NSArray *autocompleteTokens; // @dynamic autocompleteTokens;
@property(copy, nonatomic) NSDictionary *radioButtonInfo; // @dynamic radioButtonInfo;
@property(copy, nonatomic) NSDictionary *annotations; // @dynamic annotations;
@property(nonatomic) long long lastAutoFillButtonType; // @dynamic lastAutoFillButtonType;
@property(nonatomic) long long autoFillButtonType; // @dynamic autoFillButtonType;
@property(nonatomic) unsigned long long selectionLength; // @dynamic selectionLength;
@property(nonatomic) unsigned long long selectionStart; // @dynamic selectionStart;
@property(nonatomic) unsigned long long minLength; // @dynamic minLength;
@property(nonatomic) unsigned long long maxLength; // @dynamic maxLength;
@property(nonatomic) unsigned long long size; // @dynamic size;
@property(nonatomic) double rectHeight; // @dynamic rectHeight;
@property(nonatomic) double rectWidth; // @dynamic rectWidth;
@property(nonatomic) double rectTop; // @dynamic rectTop;
@property(nonatomic) double rectLeft; // @dynamic rectLeft;
@property(copy, nonatomic) NSString *passwordRules; // @dynamic passwordRules;
@property(copy, nonatomic) NSString *value; // @dynamic value;
- (void)setPlaceholder:(id)arg1;
@property(copy, nonatomic) NSString *nextControlUniqueID; // @dynamic nextControlUniqueID;
@property(copy, nonatomic) NSString *uniqueID; // @dynamic uniqueID;
@property(copy, nonatomic) NSString *tagName; // @dynamic tagName;
@property(copy, nonatomic) NSString *fieldName; // @dynamic fieldName;
@property(copy, nonatomic) NSString *fieldID; // @dynamic fieldID;
@property(copy, nonatomic) NSString *fieldClass; // @dynamic fieldClass;
- (void)setassociatedUsername:(id)arg1;
@property(copy, nonatomic) NSString *addressBookLabel; // @dynamic addressBookLabel;
@property(nonatomic) BOOL looksLikeOneTimeCodeField; // @dynamic looksLikeOneTimeCodeField;
@property(nonatomic) BOOL looksLikePasswordCredentialField; // @dynamic looksLikePasswordCredentialField;
@property(nonatomic) BOOL looksLikeIgnoredDataTypeField; // @dynamic looksLikeIgnoredDataTypeField;
@property(nonatomic) BOOL looksLikeYearField; // @dynamic looksLikeYearField;
@property(nonatomic) BOOL looksLikeMonthField; // @dynamic looksLikeMonthField;
@property(nonatomic) BOOL looksLikeDayField; // @dynamic looksLikeDayField;
@property(nonatomic) BOOL looksLikeCreditCardTypeField; // @dynamic looksLikeCreditCardTypeField;
@property(nonatomic) BOOL looksLikeCreditCardSecurityCodeField; // @dynamic looksLikeCreditCardSecurityCodeField;
@property(nonatomic) BOOL looksLikeCreditCardNumberField; // @dynamic looksLikeCreditCardNumberField;
@property(nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField; // @dynamic looksLikeCreditCardCompositeExpirationDateField;
@property(nonatomic) BOOL looksLikeCreditCardCardholderField; // @dynamic looksLikeCreditCardCardholderField;
@property(nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute; // @dynamic claimsToBeUsernameViaAutocompleteAttribute;
@property(nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute; // @dynamic claimsToBeNewPasswordViaAutocompleteAttribute;
@property(nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute; // @dynamic claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property(nonatomic) BOOL disallowsAutocomplete; // @dynamic disallowsAutocomplete;
@property(nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField; // @dynamic labeledUsernameField;
@property(nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField; // @dynamic userEditedTextField;
@property(nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField; // @dynamic autoFilledTextField;
@property(nonatomic, getter=isSecureTextField) BOOL secureTextField; // @dynamic secureTextField;
@property(nonatomic, getter=isTextField) BOOL textField; // @dynamic textField;
@property(nonatomic, getter=isReadOnly) BOOL readOnly; // @dynamic readOnly;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @dynamic disabled;
@property(nonatomic, getter=isActive) BOOL active; // @dynamic active;
@property(nonatomic, getter=isVisible) BOOL visible; // @dynamic visible;

// Remaining properties
@property(copy, nonatomic) NSString *associatedUsername; // @dynamic associatedUsername;

@end

