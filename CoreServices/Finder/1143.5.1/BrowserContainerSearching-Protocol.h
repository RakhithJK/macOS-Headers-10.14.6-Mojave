//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSMenu, NSSearchField, NSSet, TBrowserContainerController;

@protocol BrowserContainerSearching
- (void)searchWasChanged;
- (void)searchDidBeginWithScopes:(const vector_757c8b87 *)arg1 selectedScopeIndex:(unsigned int)arg2;
- (NSMenu *)toolbarHistorySearchTemplate;
- (_Bool)toolbarMakeSearchFieldFirstResponder;
- (NSSearchField *)toolbarSearchField;
- (_Bool)toolbarSearchFieldIsVisible;
- (NSSet *)containerQuerySearchUTIs:(TBrowserContainerController *)arg1;
@end

