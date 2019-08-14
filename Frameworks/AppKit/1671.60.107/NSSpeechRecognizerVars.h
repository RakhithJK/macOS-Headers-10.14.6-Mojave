//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSString;
@protocol NSSpeechRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface NSSpeechRecognizerVars : NSObject
{
    id <NSSpeechRecognizerDelegate> _delegate;
    NSArray *_simpleCommandsArray;
    NSArray *_displayedStringsArray;
    NSString *_displayedStringsTitle;
    struct __RXRecognitionSystem *_recognitionSystem;
    struct __RXRecognizer *_recognizer;
    NSLocale *_locale;
}

@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property struct __RXRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property struct __RXRecognitionSystem *recognitionSystem; // @synthesize recognitionSystem=_recognitionSystem;
@property(copy) NSString *displayedStringsTitle; // @synthesize displayedStringsTitle=_displayedStringsTitle;
@property(retain) NSArray *displayedStringsArray; // @synthesize displayedStringsArray=_displayedStringsArray;
@property(copy) NSArray *simpleCommandsArray; // @synthesize simpleCommandsArray=_simpleCommandsArray;
@property __weak id <NSSpeechRecognizerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

