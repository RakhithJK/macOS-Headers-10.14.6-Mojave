//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFConversation, SVSTranscriptStackViewController;
@protocol SiriUIDomainObjectStore;

@protocol SVSTranscriptStackViewControllerDataSource <NSObject>
- (id <SiriUIDomainObjectStore>)domainObjectStoreForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (AFConversation *)conversationForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (long long)siriStateForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
@end
