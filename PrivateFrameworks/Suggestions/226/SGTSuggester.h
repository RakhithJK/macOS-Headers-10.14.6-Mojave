//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SGTCategory, SGTQueryGenius, SGTSuggesterReserved;
@protocol SGTSuggesterDelegate;

@interface SGTSuggester : NSObject
{
    SGTSuggesterReserved *_reserved;
}

+ (id)suggestersForContainerAtPath:(id)arg1;
+ (id)suggestersForFiles;
+ (id)suggestersForMailsWithMailLibraryPath:(id)arg1;
+ (id)suggestersForMails;
- (void).cxx_destruct;
- (id)_suggestionWithDisplayName:(id)arg1 attributeNames:(id)arg2 values:(id)arg3 scope:(long long)arg4 representedObjectAsPlist:(id)arg5;
- (id)_identifier;
@property(retain) SGTCategory *category;
- (void)dealloc;
@property(retain) SGTQueryGenius *genius;
- (id)_staticSuggestionDisplayNames;
@property(readonly) NSArray *staticSuggestions;
@property(readonly) BOOL canHaveStaticSuggestions;
@property __weak id <SGTSuggesterDelegate> delegate;
- (void)setInput:(id)arg1;
- (id)init;
- (void)_searchFieldDidValidateSuggestion:(id)arg1;

@end

