//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ConversationMember, MCActivityMonitor, MCMessageHeaders, MCTaskOperation, MUIWebDocument, NSMutableArray, NSOperationQueue;

@interface WebDocumentGenerator : NSObject
{
    NSMutableArray *_asyncLoadCompletionHandlers;
    MCActivityMonitor *_loadMonitor;
    MCTaskOperation *_fetchOperation;
    MCTaskOperation *_parseOperation;
    BOOL _startedLoad;
    BOOL _registeredForMessageDataAvailableNotification;
    MUIWebDocument *_webDocument;
    MCMessageHeaders *_messageHeaders;
    NSOperationQueue *_configurationSerialQueue;
    ConversationMember *_conversationMember;
}

@property(readonly, nonatomic) __weak ConversationMember *conversationMember; // @synthesize conversationMember=_conversationMember;
@property(readonly, nonatomic) NSOperationQueue *configurationSerialQueue; // @synthesize configurationSerialQueue=_configurationSerialQueue;
@property(retain, nonatomic) MCMessageHeaders *messageHeaders; // @synthesize messageHeaders=_messageHeaders;
@property(retain, nonatomic) MUIWebDocument *webDocument; // @synthesize webDocument=_webDocument;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)_messageBodyDataBecameAvailable:(id)arg1;
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_dataDetectorsContextForMessage:(id)arg1;
- (id)_loadQueue;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithConversationMember:(id)arg1;

@end

