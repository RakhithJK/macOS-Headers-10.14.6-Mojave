//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    NSString *_issueListID;
}

@property(readonly, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5;

@end

