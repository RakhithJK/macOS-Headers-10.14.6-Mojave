//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol SidebarContentFilterDelegate;

__attribute__((visibility("hidden")))
@interface SidebarContentFilter : NSObject
{
    id <SidebarContentFilterDelegate> _delegate;
    NSString *_searchString;
    NSMutableArray *_matches;
    BOOL _resultsReady;
}

+ (id)searchTermsFromString:(id)arg1;
+ (BOOL)string:(id)arg1 matchesSearchTerms:(id)arg2;
@property(nonatomic) BOOL resultsReady; // @synthesize resultsReady=_resultsReady;
@property(retain, nonatomic) NSMutableArray *matches; // @synthesize matches=_matches;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) __weak id <SidebarContentFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)filterItems:(id)arg1 withSearchString:(id)arg2 itemsDidChange:(BOOL)arg3;
- (void)removeObjectsFromResults:(id)arg1;
- (void)reset;
- (id)init;

@end

