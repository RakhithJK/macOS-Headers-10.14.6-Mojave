//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCMessageBody.h>

@class ICNFMCOutgoingMessage, NSMutableData;

@interface _ICNFMCOutgoingMessageBody : ICNFMCMessageBody
{
    NSMutableData *_rawData;
}

@property(retain, nonatomic) NSMutableData *rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;
@property __weak ICNFMCOutgoingMessage *message;
- (id)init;

@end

