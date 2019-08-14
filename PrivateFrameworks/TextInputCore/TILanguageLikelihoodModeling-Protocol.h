//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TILanguageLikelihoodModeling <NSObject>
- (unsigned long long)emojiUsageCountForApp:(NSString *)arg1 lastEmojiCountUpdateTime:(double *)arg2;
- (double)lastOfflineAdaptationTimeForApp:(NSString *)arg1;
- (void)priorProbabilityForLanguages:(NSArray *)arg1 recipient:(NSString *)arg2 handler:(void (^)(NSString *, float, char *))arg3;
- (NSArray *)rankedLanguagesForRecipient:(NSString *)arg1;
- (void)addEvidence:(NSString *)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(NSString *)arg4 app:(NSString *)arg5 language:(NSString *)arg6;
@end

