//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/ABContactViewDataSource-Protocol.h>
#import <ContactsUI/ABContactViewDelegate-Protocol.h>
#import <ContactsUI/CNContactActionDelegate-Protocol.h>
#import <ContactsUI/CNContactContentViewController-Protocol.h>
#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactGroupPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactHeaderViewDelegate-Protocol.h>
#import <ContactsUI/CNContactInlineActionsViewControllerDelegate_Internal-Protocol.h>
#import <ContactsUI/CNPresenterDelegate-Protocol.h>
#import <ContactsUI/CNPropertyActionDelegate-Protocol.h>
#import <ContactsUI/CNPropertyCellDelegate-Protocol.h>
#import <ContactsUI/CNPropertyGroupItemDelegate-Protocol.h>
#import <ContactsUI/CNShareLocationProtocol-Protocol.h>
#import <ContactsUI/CNUIObjectViewControllerDelegate-Protocol.h>
#import <ContactsUI/NSUserActivityDelegate-Protocol.h>
#import <ContactsUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ContactsUI/UIPopoverControllerDelegate-Protocol.h>
#import <ContactsUI/UIViewControllerRestoration-Protocol.h>

@class CNCardFaceTimeGroup, CNCardGroup, CNCardLinkedCardsGroup, CNContact, CNContactAction, CNContactAddFavoriteAction, CNContactAddLinkedCardAction, CNContactAddNewFieldAction, CNContactAddToExistingContactAction, CNContactCreateNewContactAction, CNContactFormatter, CNContactHeaderDisplayView, CNContactHeaderEditView, CNContactHeaderView, CNContactInlineActionsViewController, CNContactStore, CNContactSuggestionAction, CNContactToggleBlockCallerAction, CNContactUpdateExistingContactAction, CNContactView, CNContactViewCache, CNContainer, CNGroup, CNManagedConfiguration, CNMutableContact, CNPolicy, CNPropertyAction, CNPropertyFaceTimeAction, CNPropertyLinkedCardsAction, CNPropertyNoteCell, CNShareLocationController, CNSiriContactContextProvider, CNUIContactsEnvironment, CNUIUserActionListDataSource, CNUIUserActivityManager, NSArray, NSDictionary, NSLayoutConstraint, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, UIKeyCommand, UITableView, UIView;
@protocol CNCancelable, CNContactContentViewControllerDelegate, CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, CNPresenterDelegate;

@interface CNContactContentViewController : UIViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, NSUserActivityDelegate, CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration>
{
    NSArray *_displayedProperties;
    BOOL _needsReload;
    BOOL _needsRefetch;
    BOOL _disablingRotation;
    BOOL _changingContacts;
    BOOL _saving;
    int _animating;
    BOOL _navBarWasVisibleWhenPresented;
    BOOL _isMailVIP;
    BOOL _highlightedPropertyImportant;
    BOOL _allowsEditing;
    BOOL _alwaysEditing;
    BOOL _allowsActions;
    BOOL _allowsPropertyActions;
    BOOL _allowsCardActions;
    BOOL _allowsConferencing;
    BOOL _allowsSharing;
    BOOL _allowsAddToFavorites;
    BOOL _allowsSendMessage;
    BOOL _allowsContactBlocking;
    BOOL _allowsAddingToAddressBook;
    BOOL _shouldShowLinkedContacts;
    BOOL _allowsSettingLinkedContactsAsPreferred;
    BOOL _allowsDeletion;
    BOOL _allowsActionsModel;
    BOOL _hideCardActions;
    BOOL _outOfProcessSetupComplete;
    BOOL _didSetFirstResponder;
    BOOL _contactSupportsTTYCalls;
    BOOL _runningPPT;
    BOOL _allowsEditInApp;
    BOOL _showingMeContact;
    id <CNContactViewHostProtocol> _delegate;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    CNContact *_contact;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    NSString *_alternateName;
    NSString *_message;
    NSString *_primaryProperty;
    UIViewController *_personHeaderViewController;
    CNCardGroup *_cardTopGroup;
    CNCardGroup *_cardBottomGroup;
    CNCardGroup *_cardFooterGroup;
    id <CNContactContentViewControllerDelegate> _contactDelegate;
    id <CNPresenterDelegate> _presentingDelegate;
    CNMutableContact *_mutableContact;
    NSMutableArray *_issuedSaveRequestIdentifiers;
    CNMutableContact *_fakeEditableContact;
    CNContactView *_displayContactView;
    CNContactView *_editingContactView;
    CNContactFormatter *_contactFormatter;
    CNContactHeaderDisplayView *_displayHeaderView;
    CNContactHeaderEditView *_editingHeaderView;
    NSMutableArray *_editingGroups;
    NSArray *_nameEditingGroups;
    NSMutableDictionary *_groupsAfterGroup;
    NSMapTable *_cachedLabelWidths;
    NSArray *_extraBarButtonItems;
    CNCardGroup *_cardPrimaryPropertyActionsGroup;
    CNCardGroup *_cardActionsGroup;
    CNCardGroup *_cardMedicalIDGroup;
    CNCardGroup *_cardBlockContactGroup;
    CNCardLinkedCardsGroup *_cardLinkedCardsGroup;
    NSArray *_customActions;
    CNPropertyNoteCell *_noteCell;
    CNPropertyAction *_sendMessageAction;
    CNPropertyFaceTimeAction *_faceTimeAction;
    CNPropertyFaceTimeAction *_faceTimeAudioAction;
    CNPropertyLinkedCardsAction *_linkedCardsAction;
    CNContactAddLinkedCardAction *_addLinkedCardAction;
    CNContactAction *_shareContactAction;
    CNContactAction *_createReminderAction;
    CNContactAddFavoriteAction *_addFavoriteAction;
    CNContactToggleBlockCallerAction *_blockAction;
    CNContactAddNewFieldAction *_addNewFieldAction;
    CNContactCreateNewContactAction *_createNewContactAction;
    CNContactAddToExistingContactAction *_addToExistingContactAction;
    CNContactUpdateExistingContactAction *_updateExistingContactAction;
    CNContactSuggestionAction *_suggestedContactAction;
    NSArray *_activatedConstraints;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_displayHeaderOverflowHeightConstraint;
    CNShareLocationController *_shareLocationController;
    CNContactInlineActionsViewController *_actionsViewController;
    UIView *_actionsWrapperView;
    UIView *_headerDropShadowView;
    UIView *_displayHeaderOverflowView;
    UIView *_footerOverflowView;
    CNCardGroup *_cardEditingActionsGroup;
    CNCardGroup *_cardEditingDeleteContactGroup;
    CNContactAction *_deleteContactAction;
    CNContactAction *_ignoreContactAction;
    CNSiriContactContextProvider *_siriContextProvider;
    NSMutableArray *_editingLinkedContacts;
    id <CNCancelable> _iMessageIDSLookupToken;
    id <CNCancelable> _faceTimeIDSLookupToken;
    NSDictionary *_userActivityUserInfo;
    NSArray *_highlightedProperties;
    CNUIUserActionListDataSource *_actionsDataSource;
    UIKeyCommand *_saveCommand;
    UIKeyCommand *_editCommand;
    UIKeyCommand *_cancelCommand;
    double _keyboardVerticalOverlap;
    NSArray *_preEditLeftBarButtonItems;
    CNUIContactsEnvironment *_environment;
    CNContactViewCache *_contactViewCache;
    CNUIUserActivityManager *_activityManager;
    CNPolicy *_policy;
    NSDictionary *_linkedPoliciesByContactIdentifier;
    long long _mode;
    CNContactStore *_contactStore;
    CNManagedConfiguration *_managedConfiguration;
    NSArray *_originalContacts;
    NSDictionary *_propertyGroups;
    CNCardFaceTimeGroup *_cardFaceTimeGroup;
    NSMutableArray *_displayGroups;
    struct UIEdgeInsets _peripheryInsets;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (id)boolStateRestorationProperties;
+ (BOOL)actionModelIncludesTTY:(id)arg1;
+ (void)_telemetryForContact:(id)arg1;
+ (BOOL)enablesTransportButtons;
+ (id)createActionsControllerWithActionListDataSource:(id)arg1;
+ (id)descriptorForRequiredKeysWithDescription:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysForContact:(id)arg1;
@property(nonatomic) BOOL showingMeContact; // @synthesize showingMeContact=_showingMeContact;
@property(retain, nonatomic) NSMutableArray *displayGroups; // @synthesize displayGroups=_displayGroups;
@property(retain, nonatomic) CNCardFaceTimeGroup *cardFaceTimeGroup; // @synthesize cardFaceTimeGroup=_cardFaceTimeGroup;
@property(readonly, nonatomic) NSDictionary *propertyGroups; // @synthesize propertyGroups=_propertyGroups;
@property(nonatomic) BOOL allowsEditInApp; // @synthesize allowsEditInApp=_allowsEditInApp;
@property(retain, nonatomic) NSArray *originalContacts; // @synthesize originalContacts=_originalContacts;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // @synthesize linkedPoliciesByContactIdentifier=_linkedPoliciesByContactIdentifier;
@property(retain, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets; // @synthesize peripheryInsets=_peripheryInsets;
@property(nonatomic) BOOL runningPPT; // @synthesize runningPPT=_runningPPT;
@property(readonly, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
@property(readonly, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(readonly, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSArray *preEditLeftBarButtonItems; // @synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems;
@property(nonatomic) double keyboardVerticalOverlap; // @synthesize keyboardVerticalOverlap=_keyboardVerticalOverlap;
@property(retain, nonatomic) UIKeyCommand *cancelCommand; // @synthesize cancelCommand=_cancelCommand;
@property(retain, nonatomic) UIKeyCommand *editCommand; // @synthesize editCommand=_editCommand;
@property(retain, nonatomic) UIKeyCommand *saveCommand; // @synthesize saveCommand=_saveCommand;
@property(nonatomic) BOOL contactSupportsTTYCalls; // @synthesize contactSupportsTTYCalls=_contactSupportsTTYCalls;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
@property(retain, nonatomic) NSArray *highlightedProperties; // @synthesize highlightedProperties=_highlightedProperties;
@property(nonatomic) BOOL didSetFirstResponder; // @synthesize didSetFirstResponder=_didSetFirstResponder;
@property(nonatomic) BOOL outOfProcessSetupComplete; // @synthesize outOfProcessSetupComplete=_outOfProcessSetupComplete;
@property(retain, nonatomic) NSDictionary *userActivityUserInfo; // @synthesize userActivityUserInfo=_userActivityUserInfo;
@property(retain, nonatomic) id <CNCancelable> faceTimeIDSLookupToken; // @synthesize faceTimeIDSLookupToken=_faceTimeIDSLookupToken;
@property(retain, nonatomic) id <CNCancelable> iMessageIDSLookupToken; // @synthesize iMessageIDSLookupToken=_iMessageIDSLookupToken;
@property(retain, nonatomic) NSMutableArray *editingLinkedContacts; // @synthesize editingLinkedContacts=_editingLinkedContacts;
@property(retain, nonatomic) CNSiriContactContextProvider *siriContextProvider; // @synthesize siriContextProvider=_siriContextProvider;
@property(retain, nonatomic) CNContactAction *ignoreContactAction; // @synthesize ignoreContactAction=_ignoreContactAction;
@property(retain, nonatomic) CNContactAction *deleteContactAction; // @synthesize deleteContactAction=_deleteContactAction;
@property(retain, nonatomic) CNCardGroup *cardEditingDeleteContactGroup; // @synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup;
@property(retain, nonatomic) CNCardGroup *cardEditingActionsGroup; // @synthesize cardEditingActionsGroup=_cardEditingActionsGroup;
@property(retain, nonatomic) UIView *footerOverflowView; // @synthesize footerOverflowView=_footerOverflowView;
@property(retain, nonatomic) UIView *displayHeaderOverflowView; // @synthesize displayHeaderOverflowView=_displayHeaderOverflowView;
@property(retain, nonatomic) UIView *headerDropShadowView; // @synthesize headerDropShadowView=_headerDropShadowView;
@property(retain, nonatomic) UIView *actionsWrapperView; // @synthesize actionsWrapperView=_actionsWrapperView;
@property(retain, nonatomic) CNContactInlineActionsViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) CNShareLocationController *shareLocationController; // @synthesize shareLocationController=_shareLocationController;
@property(retain, nonatomic) NSLayoutConstraint *displayHeaderOverflowHeightConstraint; // @synthesize displayHeaderOverflowHeightConstraint=_displayHeaderOverflowHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) CNContactSuggestionAction *suggestedContactAction; // @synthesize suggestedContactAction=_suggestedContactAction;
@property(retain, nonatomic) CNContactUpdateExistingContactAction *updateExistingContactAction; // @synthesize updateExistingContactAction=_updateExistingContactAction;
@property(retain, nonatomic) CNContactAddToExistingContactAction *addToExistingContactAction; // @synthesize addToExistingContactAction=_addToExistingContactAction;
@property(retain, nonatomic) CNContactCreateNewContactAction *createNewContactAction; // @synthesize createNewContactAction=_createNewContactAction;
@property(retain, nonatomic) CNContactAddNewFieldAction *addNewFieldAction; // @synthesize addNewFieldAction=_addNewFieldAction;
@property(retain, nonatomic) CNContactToggleBlockCallerAction *blockAction; // @synthesize blockAction=_blockAction;
@property(retain, nonatomic) CNContactAddFavoriteAction *addFavoriteAction; // @synthesize addFavoriteAction=_addFavoriteAction;
@property(retain, nonatomic) CNContactAction *createReminderAction; // @synthesize createReminderAction=_createReminderAction;
@property(retain, nonatomic) CNContactAction *shareContactAction; // @synthesize shareContactAction=_shareContactAction;
@property(retain, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction; // @synthesize addLinkedCardAction=_addLinkedCardAction;
@property(retain, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction; // @synthesize linkedCardsAction=_linkedCardsAction;
@property(retain, nonatomic) CNPropertyFaceTimeAction *faceTimeAudioAction; // @synthesize faceTimeAudioAction=_faceTimeAudioAction;
@property(retain, nonatomic) CNPropertyFaceTimeAction *faceTimeAction; // @synthesize faceTimeAction=_faceTimeAction;
@property(retain, nonatomic) CNPropertyAction *sendMessageAction; // @synthesize sendMessageAction=_sendMessageAction;
@property(retain, nonatomic) CNPropertyNoteCell *noteCell; // @synthesize noteCell=_noteCell;
@property(retain, nonatomic) NSArray *customActions; // @synthesize customActions=_customActions;
@property(retain, nonatomic) CNCardLinkedCardsGroup *cardLinkedCardsGroup; // @synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup;
@property(retain, nonatomic) CNCardGroup *cardBlockContactGroup; // @synthesize cardBlockContactGroup=_cardBlockContactGroup;
@property(retain, nonatomic) CNCardGroup *cardMedicalIDGroup; // @synthesize cardMedicalIDGroup=_cardMedicalIDGroup;
@property(retain, nonatomic) CNCardGroup *cardActionsGroup; // @synthesize cardActionsGroup=_cardActionsGroup;
@property(retain, nonatomic) CNCardGroup *cardPrimaryPropertyActionsGroup; // @synthesize cardPrimaryPropertyActionsGroup=_cardPrimaryPropertyActionsGroup;
@property(retain, nonatomic) NSArray *extraBarButtonItems; // @synthesize extraBarButtonItems=_extraBarButtonItems;
@property(retain, nonatomic) NSMapTable *cachedLabelWidths; // @synthesize cachedLabelWidths=_cachedLabelWidths;
@property(retain, nonatomic) NSMutableDictionary *groupsAfterGroup; // @synthesize groupsAfterGroup=_groupsAfterGroup;
@property(retain, nonatomic) NSArray *nameEditingGroups; // @synthesize nameEditingGroups=_nameEditingGroups;
@property(retain, nonatomic) NSMutableArray *editingGroups; // @synthesize editingGroups=_editingGroups;
@property(retain, nonatomic) CNContactHeaderEditView *editingHeaderView; // @synthesize editingHeaderView=_editingHeaderView;
@property(retain, nonatomic) CNContactHeaderDisplayView *displayHeaderView; // @synthesize displayHeaderView=_displayHeaderView;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContactView *editingContactView; // @synthesize editingContactView=_editingContactView;
@property(retain, nonatomic) CNContactView *displayContactView; // @synthesize displayContactView=_displayContactView;
@property(retain, nonatomic) CNMutableContact *fakeEditableContact; // @synthesize fakeEditableContact=_fakeEditableContact;
@property(retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // @synthesize issuedSaveRequestIdentifiers=_issuedSaveRequestIdentifiers;
@property(retain, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
@property(nonatomic) __weak id <CNPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(nonatomic) __weak id <CNContactContentViewControllerDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(readonly, nonatomic) CNCardGroup *cardFooterGroup; // @synthesize cardFooterGroup=_cardFooterGroup;
@property(retain, nonatomic) CNCardGroup *cardBottomGroup; // @synthesize cardBottomGroup=_cardBottomGroup;
@property(retain, nonatomic) CNCardGroup *cardTopGroup; // @synthesize cardTopGroup=_cardTopGroup;
@property(retain, nonatomic) UIViewController *personHeaderViewController; // @synthesize personHeaderViewController=_personHeaderViewController;
@property(retain, nonatomic) NSString *primaryProperty; // @synthesize primaryProperty=_primaryProperty;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(nonatomic) BOOL hideCardActions; // @synthesize hideCardActions=_hideCardActions;
@property(nonatomic) BOOL allowsActionsModel; // @synthesize allowsActionsModel=_allowsActionsModel;
@property(nonatomic) BOOL allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(nonatomic) BOOL allowsSettingLinkedContactsAsPreferred; // @synthesize allowsSettingLinkedContactsAsPreferred=_allowsSettingLinkedContactsAsPreferred;
@property(nonatomic) BOOL shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(nonatomic) BOOL allowsAddingToAddressBook; // @synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook;
@property(nonatomic) BOOL allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) BOOL allowsSendMessage; // @synthesize allowsSendMessage=_allowsSendMessage;
@property(nonatomic) BOOL allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
@property(nonatomic) BOOL allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(nonatomic) BOOL allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(nonatomic) BOOL allowsCardActions; // @synthesize allowsCardActions=_allowsCardActions;
@property(nonatomic) BOOL allowsPropertyActions; // @synthesize allowsPropertyActions=_allowsPropertyActions;
@property(nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) BOOL alwaysEditing; // @synthesize alwaysEditing=_alwaysEditing;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(retain, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(retain, nonatomic) CNGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL highlightedPropertyImportant; // @synthesize highlightedPropertyImportant=_highlightedPropertyImportant;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property(nonatomic) __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)applyContactStyle;
- (BOOL)shouldShowFooterOverflowViewForEditingState:(BOOL)arg1;
- (void)updateFooterOverflowViewForTableView:(id)arg1 editing:(BOOL)arg2;
- (void)updateTableView:(id)arg1 contentInsetsTo:(struct UIEdgeInsets)arg2 withScrollIndicatorInsets:(struct UIEdgeInsets)arg3;
- (struct UIEdgeInsets)insetsForEditingTableView:(id)arg1;
- (struct UIEdgeInsets)scrollIndicatorInsetsForDisplayTableView:(id)arg1 withContentInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)insetsForDisplayTableView:(id)arg1;
- (void)initializeTableViewsForHeaderHeight;
- (void)updateInsetsIfNeededForTableView:(id)arg1 isEditing:(BOOL)arg2;
- (void)scrollScrollViewAllTheWayUp:(id)arg1;
- (BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg1;
- (double)updateHeaderConstraintForGlobalHeaderHeight:(double)arg1 direction:(long long)arg2 animated:(BOOL)arg3;
- (void)updateHeaderHeightToMatchScrollViewState:(id)arg1 scrollDirection:(long long)arg2 animated:(BOOL)arg3;
- (double)contentOffsetYForGlobalHeaderHeight:(double)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (double)globalHeaderHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (void)sharingStatusDidChange;
- (void)presentViewController:(id)arg1 sourceView:(id)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditKeyboardShortcutEnabled:(BOOL)arg1;
- (void)setCancelKeyboardShortcutEnabled:(BOOL)arg1;
- (void)setSaveKeyboardShortcutEnabled:(BOOL)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)_updateUserActivity;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_addedGroupWithName:(id)arg1;
- (BOOL)_indexPathIsActionItem:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_cardGroupAtTableViewSectionIndex:(long long)arg1;
- (id)_currentGroups;
- (id)saveLinkedContactChanges;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_validateGroup:(id)arg1;
- (BOOL)_modelIsEmpty;
- (BOOL)_modelHasChanges;
- (id)_loadNameEditingGroups;
- (id)_loadEditingGroups;
- (id)_loadDisplayGroups;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (void)_reloadLinkedCardsGroup;
- (BOOL)shouldReallyShowLinkedContactsForEditingState:(BOOL)arg1;
- (void)_reloadMedicalIDGroup;
- (void)_addFaceTimeGroupAnimated:(BOOL)arg1;
- (void)_reloadFaceTimeGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg1;
- (id)_loadPropertyGroups;
- (Class)groupClassForProperty:(id)arg1;
- (void)_updateTTYTransportButtonsForItems:(id)arg1;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (void)_updateAvailableTransports;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
- (id)_updateExistingContactAction;
- (id)_addToExistingContactAction;
- (id)_addCreateNewContactAction;
- (id)_addNewFieldAction;
- (id)_addFavoriteActionWithConferencing:(BOOL)arg1 telephony:(BOOL)arg2;
- (id)_createReminderAction;
- (id)_shareContactAction;
- (id)_addLinkedCardAction;
- (id)_linkedCardsAction;
- (id)_faceTimeAudioAction;
- (id)_faceTimeAction;
- (id)_sendMessageActionAllowingEmailIDs:(BOOL)arg1;
- (id)_propertyGroupsForKeys:(id)arg1;
- (void)_setupCustomActions;
- (void)_setupPrimaryPropertyActions;
- (void)_setupEditingCardActions;
- (void)_setupAddToAddressBookActions;
- (void)_setupSuggestionActions;
- (void)_setupContactBlockingActionsWithUpdate:(BOOL)arg1;
- (void)setupShareLocationActionReload:(BOOL)arg1;
- (void)_setupCardActions;
- (void)_retrieveActionsModelPreservingChanges:(BOOL)arg1;
- (void)setupActionsPreservingChanges:(BOOL)arg1;
- (void)blockListDidChange:(id)arg1;
- (void)updateContactsViewWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)requiredSizeForVisibleTableView;
- (double)desiredHeightForWidth:(double)arg1;
- (void)reloadUnifiedContact;
- (void)removeLinkedContact:(id)arg1;
- (void)addLinkedContact:(id)arg1;
- (void)_setupEditingLinkedContactsForKeys:(id)arg1;
- (void)updatedExistingContact:(id)arg1;
- (void)createdNewContact:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (void)_didCompleteWithContact:(id)arg1;
- (void)_updateItemsInGroup:(id)arg1;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (long long)_numberOfItemsInCustomGroup:(id)arg1;
- (void)_updateLabelWidthsForAllVisibleCells;
- (void)_updateLabelWidthForCellsInGroup:(id)arg1 reset:(BOOL)arg2;
- (void)_updateLabelWidthForCell:(id)arg1;
- (void)_updateCachedLabelWidthsIfNeeded;
- (void)_setNeedsUpdateCachedLabelWidths;
- (void)_updateCachedLabelWidths;
- (void)_updateCachedLabelWidthsForGroup:(id)arg1;
- (void)_updateCachedLabelWidthsForItem:(id)arg1;
- (id)_labelWidthKeyForItem:(id)arg1;
- (id)_labelWidthKeyForGroup:(id)arg1;
- (void)removeFirstSectionHeaderViewControllerFromHierarchy;
- (unsigned long long)tableViewSectionIndexFromGroupIndex:(unsigned long long)arg1;
- (unsigned long long)groupIndexFromTableViewSectionIndex:(unsigned long long)arg1;
- (BOOL)isTableViewHeaderFirstSectionIndexPath:(id)arg1;
- (id)tableViewHeaderFirstSectionCellForTableView:(id)arg1;
- (BOOL)hasTableViewHeaderFirstSection;
- (id)_cellForIndexPath:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2;
- (id)_currentTopVisibleGroupInContactView:(id)arg1;
- (BOOL)needsReload;
- (BOOL)reloadDataIfNeeded;
- (void)setNeedsReloadLazy;
- (void)setNeedsReload;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (BOOL)shouldShowActionsForAvatarView:(id)arg1;
- (id)viewControllerForHeaderView:(id)arg1;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerViewDidUpdateLabelSizes;
- (void)headerPhotoDidUpdate;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (id)alreadyPickedGroups;
- (id)sharedActionsDataSource;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)_dateForProperty:(id)arg1;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)actionWasCanceled:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg1;
- (BOOL)contactInlineActionsViewController:(id)arg1 shouldPerformActionOfType:(id)arg2 withContactProperty:(id)arg3;
@property(readonly) BOOL isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)isStandardGroup:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (long long)numberOfGroupsInContactView:(id)arg1;
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToEditMode:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)setupTableHeaderView;
- (void)alignEditingHeaderViewTrailingEdgeWithSeparators;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)contactDidAppear;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateDisplayHeaderOverflowHeightConstant;
- (void)updateViewConstraints;
- (void)setupConstraints;
- (BOOL)shouldDisplayAvatarHeaderView;
- (void)viewDidLoad;
- (void)setupViewHierarchyIncludingAvatarHeader:(BOOL)arg1 editing:(BOOL)arg2;
- (void)loadContactViewControllerViews;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)toggleEditing:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)saveModelChangesToContact;
- (BOOL)saveChanges;
- (void)clearMapsDataIfEdited;
- (void)editCancel:(id)arg1;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(BOOL)arg1;
- (id)navigationItemController;
- (id)contentScrollView;
- (id)_policyForContact:(id)arg1 mode:(long long)arg2;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (void)adjustPreferredContentSize;
- (void)reloadCardGroup:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(BOOL)arg5;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (long long)sectionOfGroupInTableView:(id)arg1;
- (id)cardGroupForProperty:(id)arg1;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
@property(retain, nonatomic) UIView *personHeaderView;
- (void)_refetchContact;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)prepareCell:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(readonly, nonatomic) NSArray *cardActions;
- (BOOL)isOutOfProcess;
@property(nonatomic) BOOL isMailVIP; // @synthesize isMailVIP=_isMailVIP;
@property(readonly, nonatomic) CNContactHeaderView *contactHeaderView;
@property(readonly, nonatomic) CNContactView *contactView;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)indexOfGroup:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @dynamic tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
