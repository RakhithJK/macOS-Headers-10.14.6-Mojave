//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject
{
    NSString *_string;
    unsigned long long _index;
}

+ (id)parseKeyValuePairsFromString:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_isAtEnd;
- (unsigned short)_consumeCharacter;
- (unsigned short)_previewCharacter;
- (void)_skipWhitespace;
- (id)_parseUpToCharacterFromSet:(id)arg1;
- (id)_parseJSONValue;
- (id)_parseValue;
- (id)_parseKey;
- (BOOL)_parseKeyValuePairWithKey:(id *)arg1 value:(id *)arg2;
- (id)_parseKeyValuePairs;
- (id)_initWithString:(id)arg1;

@end
