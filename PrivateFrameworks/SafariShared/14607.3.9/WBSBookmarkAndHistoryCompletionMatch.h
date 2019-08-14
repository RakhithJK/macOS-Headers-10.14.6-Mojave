//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> _match;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float weight;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (id)initWithWBSBookmarkAndHistoryCompletionMatch:(id)arg1 userInput:(id)arg2;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_a2762e75 *)arg1 userInput:(id)arg2;

@end

