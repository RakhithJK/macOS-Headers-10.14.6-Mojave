//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedSuggestedResult : SAAceView
{
}

+ (id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)paraphrasedSuggestedResult;
@property(nonatomic) long long rank;
@property(copy, nonatomic) NSString *displayText;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

