//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IPXSearchSuggester, IPXSearchSuggestionViewProvider;

@protocol IPXSearchSuggestion <NSObject>
@property(readonly) __weak id <IPXSearchSuggestionViewProvider> suggestionViewProvider;
@property(readonly, copy, nonatomic) NSString *displayString;

@optional
@property(retain) id <IPXSearchSuggester> sourceSuggester;
@property(readonly) NSString *selectionDisplayString;
@end

