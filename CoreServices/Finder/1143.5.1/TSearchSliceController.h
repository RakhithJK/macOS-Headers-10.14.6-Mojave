//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

#import "NSTextFieldDelegate-Protocol.h"
#import "TSearchCriteriaViewControllerDelegate-Protocol.h"
#import "TSearchScopeSliceControllerDelegate-Protocol.h"

@class NSDictionary, NSSearchField, NSSet, NSString, TBrowserContainerController;

@interface TSearchSliceController : TViewController <NSTextFieldDelegate, TSearchScopeSliceControllerDelegate, TSearchCriteriaViewControllerDelegate>
{
    struct TNSRef<NSStackView, void> _slicesStackView;
    struct TNSRef<TSearchForSliceController, void> _searchForSliceController;
    struct TNSRef<TSearchScopeSliceController, void> _scopeSliceController;
    struct TNSRef<TSearchCriteriaViewController, void> _criteriaController;
    NSSearchField *_toolbarSearchField;
    TBrowserContainerController *_containerController;
    struct TNSRef<NSSet, void> _searchFilterUTIs;
    _Bool _isSaveable;
    _Bool _configuring;
}

+ (void)copySuggestionsFrom:(id)arg1 to:(id)arg2;
+ (void)setSearchFieldState:(id)arg1 withState:(id)arg2;
+ (id)searchFieldState:(id)arg1;
@property _Bool configuring; // @synthesize configuring=_configuring;
@property _Bool isSaveable; // @synthesize isSaveable=_isSaveable;
@property(nonatomic) TBrowserContainerController *containerController; // @synthesize containerController=_containerController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateUIForAction;
- (void)updateQueryWithScope:(int)arg1 clearContent:(_Bool)arg2;
- (void)updateQueryWithScopeIndex:(unsigned long long)arg1 clearContent:(_Bool)arg2;
- (void)updateQueryFromUIAndClearContent:(_Bool)arg1;
- (id)generateQueryStringForScope:(int)arg1 filteredSavedSearch:(_Bool)arg2;
- (id)queryStringForSearchField;
- (int)searchWhen;
- (id)appendSearchWhen:(int)arg1 toString:(id)arg2;
- (_Bool)queryIsCannedSearch;
@property(readonly, nonatomic) struct TMDQueryAliasNode *queryNode;
- (void)configureForAction:(int)arg1 forSearchString:(id)arg2;
- (void)setDefaultFileNameOnly:(int)arg1;
- (void)setSuggestionFieldScope:(long long)arg1;
- (void)setCriteriaTo:(id)arg1;
- (void)showDefaultCriteria:(_Bool)arg1;
- (void)setCriteriaIsVisible:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasCriteria;
@property(readonly, nonatomic) _Bool criteriaIsCollapsed;
- (void)removeCriteria;
- (_Bool)addSearchStringAndSuggestionsToCriteria;
- (void)addCriteria;
- (void)makeCriteriaController;
- (_Bool)criteriaIsVisible;
@property(readonly, nonatomic) NSDictionary *userSlices;
- (id)userCriteria:(_Bool)arg1;
@property(readonly, nonatomic) NSSearchField *currentSearchField;
- (void)setToolbarSearchField:(id)arg1;
@property(readonly, nonatomic) NSString *searchForSliceString;
- (void)setScopePlusMinusButtonTitle:(_Bool)arg1;
- (void)setScopePlusMinusButtonEnabled:(_Bool)arg1;
- (void)autoEnableScopeSaveButton;
- (_Bool)setScopeIsVisible:(_Bool)arg1;
- (void)removeScopeSlice;
- (void)addScopeSlice;
@property(readonly, nonatomic) _Bool makeSearchForSliceFirstResponder;
@property(readonly, nonatomic) _Bool searchForSliceIsVisible;
- (void)setSearchForIsVisible:(_Bool)arg1;
- (void)clearSearchField;
- (void)setSearchFieldText:(id)arg1;
- (void)removeSearchForSlice;
- (void)addSearchForSlice;
- (_Bool)isBackupBrowser;
- (void)criteriaSliceChange;
- (void)scopeSetByUser:(unsigned long long)arg1;
- (void)plusMinusButtonPressed:(id)arg1 title:(_Bool)arg2;
- (void)updateScopePlusMinusButton;
- (void)removeAllCriteriaSlices;
- (void)saveButtonPressed:(id)arg1;
- (void)saveQuery;
- (void)fieldChanged:(id)arg1 nameOnly:(_Bool)arg2;
- (void)scopeChanged:(id)arg1 index:(unsigned long long)arg2;
- (void)controlTextDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *currentScopeString;
@property(readonly, nonatomic) _Bool scopeSliceIsVisible;
- (void)toggleSlices;
@property(copy) NSSet *searchFilterUTIs; // @dynamic searchFilterUTIs;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

