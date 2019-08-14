//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacementGenerator : NSObject
{
    UITextRange *_replacementRange;
    NSString *_stringToReplace;
}

@property(copy, nonatomic) NSString *stringToReplace; // @synthesize stringToReplace=_stringToReplace;
@property(retain, nonatomic) UITextRange *replacementRange; // @synthesize replacementRange=_replacementRange;
- (void).cxx_destruct;
- (BOOL)isStringToReplaceMisspelled;
- (id)replacements;
- (void)addPlaceholderForEmptyReplacements:(id)arg1;
- (id)replacementWithText:(id)arg1;
- (BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2;

@end

