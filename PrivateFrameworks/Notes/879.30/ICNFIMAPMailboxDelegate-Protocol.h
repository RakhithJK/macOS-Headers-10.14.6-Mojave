//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class ICNFIMAPMailbox;

@protocol ICNFIMAPMailboxDelegate <NSObject>
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(ICNFIMAPMailbox *)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(ICNFIMAPMailbox *)arg1;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(ICNFIMAPMailbox *)arg1;
- (void)updateSelectedGatewayFromMailbox:(ICNFIMAPMailbox *)arg1;
- (void)processResponsesFromMailbox:(ICNFIMAPMailbox *)arg1;
- (void)updateUidValidityFromMailbox:(ICNFIMAPMailbox *)arg1;
- (void)updateCountFromMailbox:(ICNFIMAPMailbox *)arg1 fromIDLE:(BOOL)arg2;
@end

