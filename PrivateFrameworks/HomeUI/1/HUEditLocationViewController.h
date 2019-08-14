//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HFHomeManagerObserver-Protocol.h>
#import <HomeUI/HUAddPeopleViewControllerDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUWallpaperEditingViewControllerDelegate-Protocol.h>
#import <HomeUI/HUWallpaperPickerInlineViewControllerDelegate-Protocol.h>
#import <HomeUI/HUWallpaperPickerViewControllerDelegate-Protocol.h>
#import <HomeUI/HUWallpaperThumbnailCellDelegate-Protocol.h>
#import <HomeUI/UIImagePickerControllerDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UITextFieldDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFHomeBuilder, HUEditLocationItemManager, HUEditableTextCell, HUEditableTextViewCell, HUHomeUsersCollectionViewController, HUUserNotificationTopicListModuleController, HUWallpaperPickerInlineViewController, NSString, UIBarButtonItem;
@protocol HUEditLocationViewControllerAddLocationDelegate, HUPresentationDelegate;

@interface HUEditLocationViewController : HUItemTableViewController <UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUPresentationDelegateHost>
{
    id <HUPresentationDelegate> _presentationDelegate;
    HUHomeUsersCollectionViewController *_usersViewController;
    HFHomeBuilder *_homeBuilder;
    id <HUEditLocationViewControllerAddLocationDelegate> _addLocationDelegate;
    unsigned long long _context;
    HUUserNotificationTopicListModuleController *_notificationTopicModuleController;
    HUEditLocationItemManager *_homeItemManager;
    HUEditableTextCell *_nameCell;
    NSString *_editedName;
    HUEditableTextViewCell *_detailNotesCell;
    NSString *_editedNotes;
    HUWallpaperPickerInlineViewController *_wallpaperPickerViewController;
    UIBarButtonItem *_savedButtonBarItem;
}

@property(retain, nonatomic) UIBarButtonItem *savedButtonBarItem; // @synthesize savedButtonBarItem=_savedButtonBarItem;
@property(readonly, nonatomic) HUWallpaperPickerInlineViewController *wallpaperPickerViewController; // @synthesize wallpaperPickerViewController=_wallpaperPickerViewController;
@property(retain, nonatomic) NSString *editedNotes; // @synthesize editedNotes=_editedNotes;
@property(nonatomic) __weak HUEditableTextViewCell *detailNotesCell; // @synthesize detailNotesCell=_detailNotesCell;
@property(retain, nonatomic) NSString *editedName; // @synthesize editedName=_editedName;
@property(nonatomic) __weak HUEditableTextCell *nameCell; // @synthesize nameCell=_nameCell;
@property(nonatomic) __weak HUEditLocationItemManager *homeItemManager; // @synthesize homeItemManager=_homeItemManager;
@property(retain, nonatomic) HUUserNotificationTopicListModuleController *notificationTopicModuleController; // @synthesize notificationTopicModuleController=_notificationTopicModuleController;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <HUEditLocationViewControllerAddLocationDelegate> addLocationDelegate; // @synthesize addLocationDelegate=_addLocationDelegate;
@property(readonly, nonatomic) HFHomeBuilder *homeBuilder; // @synthesize homeBuilder=_homeBuilder;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)addPeopleViewControllerDidCancel:(id)arg1;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1;
- (void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3;
- (void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (BOOL)shouldManageTextFieldForItem:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNotificationTopicsAnimated:(BOOL)arg1;
@property(readonly, nonatomic) HUHomeUsersCollectionViewController *usersViewController; // @synthesize usersViewController=_usersViewController;
- (void)viewDidLoad;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 context:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

