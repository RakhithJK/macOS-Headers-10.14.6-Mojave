//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, NSMutableDictionary;

@interface MFUnreadCountQueryObserver : NSObject
{
    struct __MDQuery *_query;
    BOOL _queryIsCancelled;
    BOOL _useTotalCount;
    BOOL _checkWhereFromsPaths;
    long long _nextIndexToProcess;
    NSMutableDictionary *_seenIDs;
    NSMutableDictionary *_messageIDsFromAttachments;
    MFMailbox *_mailbox;
}

@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(readonly, nonatomic) NSMutableDictionary *messageIDsFromAttachments; // @synthesize messageIDsFromAttachments=_messageIDsFromAttachments;
@property(readonly, nonatomic) NSMutableDictionary *seenIDs; // @synthesize seenIDs=_seenIDs;
@property(nonatomic) BOOL checkWhereFromsPaths; // @synthesize checkWhereFromsPaths=_checkWhereFromsPaths;
@property(nonatomic) BOOL useTotalCount; // @synthesize useTotalCount=_useTotalCount;
@property(nonatomic) long long nextIndexToProcess; // @synthesize nextIndexToProcess=_nextIndexToProcess;
@property(nonatomic) BOOL queryIsCancelled; // @synthesize queryIsCancelled=_queryIsCancelled;
- (void).cxx_destruct;
- (void)clearMailbox;
- (struct __MDQuery *)query;
- (void)dealloc;
- (id)init;
- (id)initWithMailbox:(id)arg1 query:(struct __MDQuery *)arg2 useTotalCount:(BOOL)arg3;

@end

