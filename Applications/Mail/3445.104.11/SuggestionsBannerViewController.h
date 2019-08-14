//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "SuggestedContactPopoverControllerDelegate-Protocol.h"
#import "SuggestedEventPopoverControllerDelegate-Protocol.h"

@class ConversationMember, NSArray, NSAttributedString, NSButton, NSImage, NSPopover, NSStackView, NSString, NSTextField;

@interface SuggestionsBannerViewController : NSViewController <SuggestedContactPopoverControllerDelegate, SuggestedEventPopoverControllerDelegate>
{
    BOOL _isSingleton;
    BOOL _observingEventStore;
    NSButton *_closeButton;
    NSButton *_addButton;
    NSTextField *_suggestionText;
    NSStackView *_suggestionsStackView;
    NSPopover *_eventPopover;
    NSPopover *_contactPopover;
    NSArray *_orderedSuggestions;
}

+ (id)keyPathsForValuesAffectingBannerAddButtonText;
+ (id)keyPathsForValuesAffectingBannerDataText;
+ (id)keyPathsForValuesAffectingBannerText;
+ (id)keyPathsForValuesAffectingBannerImage;
+ (id)keyPathsForValuesAffectingCurrentSuggestionGroup;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_calendarImage;
+ (id)eventKitEventForRealtimeEvent:(id)arg1;
+ (BOOL)_isRealtimeContactNew:(id)arg1;
+ (id)_suggestionsService;
+ (id)_eventStore;
+ (id)suggestionsServiceLog;
@property(nonatomic) BOOL observingEventStore; // @synthesize observingEventStore=_observingEventStore;
@property(copy, nonatomic) NSArray *orderedSuggestions; // @synthesize orderedSuggestions=_orderedSuggestions;
@property(retain, nonatomic) NSPopover *contactPopover; // @synthesize contactPopover=_contactPopover;
@property(retain, nonatomic) NSPopover *eventPopover; // @synthesize eventPopover=_eventPopover;
@property(nonatomic) __weak NSStackView *suggestionsStackView; // @synthesize suggestionsStackView=_suggestionsStackView;
@property(nonatomic) __weak NSTextField *suggestionText; // @synthesize suggestionText=_suggestionText;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)commitSuggestedContact:(id)arg1;
- (void)cancelSuggestedContactPopoverController:(id)arg1;
- (void)suggestedEventPopoverController:(id)arg1 didIgnoreSuggestedEvent:(id)arg2;
- (void)suggestedEventPopoverController:(id)arg1 didCommitSuggestedEvent:(id)arg2 asEvent:(id)arg3;
- (void)cancelSuggestedEventPopoverController:(id)arg1;
- (id)_multiDayDateFormatter;
- (id)_singleDayTimeFormatter;
- (id)_singleDayDateFormatter;
- (id)_fullDayFormatter;
- (id)_allDayFormatter;
- (id)_addButtonTextForEvents:(id)arg1;
@property(retain, nonatomic) ConversationMember *representedObject;
- (id)_dateStringForSingleEvent:(id)arg1;
- (id)_titleForEvents:(id)arg1;
- (id)_prefixForEvents:(id)arg1;
- (id)_addButtonTextForContacts:(id)arg1;
- (id)_subtitleForRealtimeContact:(id)arg1;
- (id)_titleForContacts:(id)arg1;
- (id)_prefixForContacts:(id)arg1;
@property(nonatomic) BOOL isSingleton;
@property(readonly, copy, nonatomic) NSAttributedString *bannerAddButtonText;
@property(readonly, copy, nonatomic) NSString *bannerDataText;
- (id)_prevailingSuggestionInGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bannerText;
@property(readonly, copy, nonatomic) NSImage *bannerImage;
@property(readonly, copy, nonatomic) NSArray *currentSuggestionGroup;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (void)_rejectSuggestion:(id)arg1;
- (void)_showContactPopoverForRealtimeContact:(id)arg1 sender:(id)arg2;
- (void)_showEventPopoverForRealtimeEvents:(id)arg1 sender:(id)arg2;
- (void)confirmSuggestion:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(BOOL)arg1;
- (void)dismissBanner:(id)arg1;
- (void)_eventStoreDidChange:(id)arg1;
- (void)_updateViewAppearance;
- (void)_update;
- (void)_reloadIntelligentSuggestionsCoalescingIfNeeded;
- (void)_stopObservingEventStoreChangeNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

