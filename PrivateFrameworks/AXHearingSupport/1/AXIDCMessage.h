//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXHearingSupport/AXSimpleMessage.h>

@class NSString;

@interface AXIDCMessage : AXSimpleMessage
{
    NSString *_UUID;
    CDUnknownBlockType _sendCompletion;
}

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType sendCompletion; // @synthesize sendCompletion=_sendCompletion;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)transportPayload;
- (id)initWithPayload:(id)arg1;

@end

