//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class NSArray;

@interface SGTMailPrioritySuggester : SGTSuggester
{
    NSArray *mailPriorities;
}

+ (id)menuPriorityImageForSuggestion:(id)arg1;
+ (id)tokenPriorityImageForSuggestion:(id)arg1;
+ (id)priorityImageForSuggestion:(id)arg1;
+ (id)representedObjectForMailPriorityRepresentedObject:(id)arg1;
+ (id)mailPriorityRepresentedObjectForRepresentedObject:(id)arg1;
+ (BOOL)isMailPriorityRepresentedObject:(id)arg1;
+ (id)prioritiesCategory;
@property(copy) NSArray *mailPriorities; // @synthesize mailPriorities;
- (void).cxx_destruct;
- (void)setInput:(id)arg1;

@end
