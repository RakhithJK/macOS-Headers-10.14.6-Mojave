//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairAckMessage : IDSSocketPairMessage
{
    unsigned int _sequenceNumber;
}

@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end
