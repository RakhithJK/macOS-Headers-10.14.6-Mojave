//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXSearchFieldDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IPXAudioCollection, IPXAudioLibrary, IPXSearchField, NSArray, NSArrayController, NSButton, NSLayoutConstraint, NSPopUpButton, NSScrollView, NSString, NSTableView, NSView, UXView;
@protocol MusicPickerViewControllerDelegate;

@interface IPXMusicPickerViewController : IPXViewController <NSTableViewDataSource, NSTableViewDelegate, IPXSearchFieldDelegate>
{
    IPXAudioCollection *_audioCollection;
    IPXAudioLibrary *_audioLibrary;
    BOOL _isShowingDRMWarning;
    BOOL _isFiltered;
    id <MusicPickerViewControllerDelegate> _delegate;
    NSArray *_selectedAudioItems;
    NSView *_openiTunesView;
    NSView *_backgroundView;
    NSArrayController *_arrayController;
    NSPopUpButton *_popupButton;
    NSButton *_timeSortButton;
    NSButton *_artistSortButton;
    NSButton *_nameSortButton;
    NSButton *_searchToggle;
    UXView *_line;
    NSView *_tableViewBackground;
    NSTableView *_tableView;
    NSScrollView *_musicTableScrollView;
    NSView *_messageView;
    NSLayoutConstraint *_topHeightConstraint;
    IPXSearchField *_searchField;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSLayoutConstraint *_lineLeftConstraint;
    NSLayoutConstraint *_lineRightConstraint;
    NSArray *_items;
    NSArray *_filteredArray;
}

@property(retain) NSArray *filteredArray; // @synthesize filteredArray=_filteredArray;
@property BOOL isFiltered; // @synthesize isFiltered=_isFiltered;
@property(retain) NSArray *items; // @synthesize items=_items;
@property __weak NSLayoutConstraint *lineRightConstraint; // @synthesize lineRightConstraint=_lineRightConstraint;
@property __weak NSLayoutConstraint *lineLeftConstraint; // @synthesize lineLeftConstraint=_lineLeftConstraint;
@property __weak NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property __weak NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property __weak IPXSearchField *searchField; // @synthesize searchField=_searchField;
@property __weak NSLayoutConstraint *topHeightConstraint; // @synthesize topHeightConstraint=_topHeightConstraint;
@property __weak NSView *messageView; // @synthesize messageView=_messageView;
@property __weak NSScrollView *musicTableScrollView; // @synthesize musicTableScrollView=_musicTableScrollView;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSView *tableViewBackground; // @synthesize tableViewBackground=_tableViewBackground;
@property __weak UXView *line; // @synthesize line=_line;
@property __weak NSButton *searchToggle; // @synthesize searchToggle=_searchToggle;
@property __weak NSButton *nameSortButton; // @synthesize nameSortButton=_nameSortButton;
@property __weak NSButton *artistSortButton; // @synthesize artistSortButton=_artistSortButton;
@property __weak NSButton *timeSortButton; // @synthesize timeSortButton=_timeSortButton;
@property __weak NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property __weak NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property __weak NSView *openiTunesView; // @synthesize openiTunesView=_openiTunesView;
@property(readonly) NSArray *selectedAudioItems; // @synthesize selectedAudioItems=_selectedAudioItems;
@property(nonatomic) __weak id <MusicPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setLineRightPadding:(double)arg1;
- (void)setLineLeftPadding:(double)arg1;
- (void)setRightPadding:(double)arg1;
- (void)setLeftPadding:(double)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)searchFieldSelectCurrentResult:(id)arg1;
- (void)searchFieldStringHasChanged:(id)arg1;
- (void)toggleSearch:(id)arg1;
- (void)openiTunes:(id)arg1;
- (void)searchChanged:(id)arg1;
- (BOOL)isEmptyiTunesLibrary:(id)arg1;
- (void)showAudioCollection:(id)arg1;
- (BOOL)is_iTunesCollection:(id)arg1;
- (void)filterAndFlatten;
- (void)addArtist:(id)arg1 toArray:(id)arg2;
- (void)addAlbum:(id)arg1 toArray:(id)arg2;
- (void)populatePopUpButton;
- (id)theAudioLibrary;
- (void)sourcePopupChanged:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDeselectRow:(long long)arg2;
- (void)tableView:(id)arg1 willSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
@property(readonly) BOOL isShowingDRMWarning; // @synthesize isShowingDRMWarning=_isShowingDRMWarning;
- (void)showDRMWarning;
- (void)showDeletingDRMsWarning:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (void)showLaunchiTunesMessage:(BOOL)arg1;
- (void)viewDidLoad;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

