//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/NSObject-Protocol.h>

@class NSString, SGTSearchField;

@protocol SGTSearchFieldQueryScopeDelegate <NSObject>
- (NSString *)searchFieldWidenScopeMenuSpinnerTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuItemTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuTitleString:(SGTSearchField *)arg1;
- (void)searchFieldWidenQueryScope:(SGTSearchField *)arg1;
- (BOOL)searchField:(SGTSearchField *)arg1 hasResultsForQuery:(NSString *)arg2;
- (BOOL)searchFieldUsesRestrictedQueryScope:(SGTSearchField *)arg1;
@end

