//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PrettyPinyin : NSObject
{
    NSDictionary *_finalToneDictionary;
}

@property(readonly, nonatomic) NSDictionary *finalToneDictionary; // @synthesize finalToneDictionary=_finalToneDictionary;
- (void).cxx_destruct;
- (id)toneStringFromToneNumberString:(id)arg1;
- (id)init;
- (id)_toneStringWithDictionary:(id)arg1;
- (id)_dictionaryFromPinyinString:(id)arg1;
- (unsigned long long)_vowelPositionForString:(id)arg1;

@end

