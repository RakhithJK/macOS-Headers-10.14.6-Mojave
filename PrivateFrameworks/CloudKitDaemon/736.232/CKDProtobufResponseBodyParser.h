//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDResponseBodyParser.h>

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser
{
    BOOL _parsingStandaloneMessage;
    BOOL _isParsing;
    Class _messageClass;
    NSMutableData *_tailParserData;
    unsigned long long _curObjectLength;
    struct CC_SHA256state_st _mescalSignature;
}

@property(nonatomic) struct CC_SHA256state_st mescalSignature; // @synthesize mescalSignature=_mescalSignature;
@property(nonatomic) BOOL isParsing; // @synthesize isParsing=_isParsing;
@property(nonatomic) unsigned long long curObjectLength; // @synthesize curObjectLength=_curObjectLength;
@property(retain, nonatomic) NSMutableData *tailParserData; // @synthesize tailParserData=_tailParserData;
@property(nonatomic) BOOL parsingStandaloneMessage; // @synthesize parsingStandaloneMessage=_parsingStandaloneMessage;
@property(nonatomic) Class messageClass; // @synthesize messageClass=_messageClass;
- (void).cxx_destruct;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1;
- (BOOL)_parseObjects:(BOOL)arg1;
- (BOOL)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (id)initWithQoS:(long long)arg1;

@end

