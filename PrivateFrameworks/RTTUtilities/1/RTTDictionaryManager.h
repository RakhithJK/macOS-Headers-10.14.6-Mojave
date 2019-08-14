//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

@interface RTTDictionaryManager : NSObject
{
    NSCondition *_condition;
    NSArray *_availableDictionaries;
}

+ (id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1;
@property(retain, nonatomic) NSArray *availableDictionaries; // @synthesize availableDictionaries=_availableDictionaries;
- (void).cxx_destruct;
- (id)_ttyDictionaryAsset;
- (BOOL)_isStalledAutoDownloadAsset:(id)arg1;
- (void)deactivateTTYDictionary;
- (void)activateTTYDictionary;
- (BOOL)downloadAsset:(id)arg1 withError:(id *)arg2;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;
- (void)dealloc;
- (id)init;

@end

