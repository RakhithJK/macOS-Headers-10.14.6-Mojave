//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject
{
    NSMutableDictionary *_formattersForKey;
}

+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;
@property(retain, nonatomic) NSMutableDictionary *formattersForKey; // @synthesize formattersForKey=_formattersForKey;
- (void).cxx_destruct;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(BOOL)arg2;
- (id)init;

@end

