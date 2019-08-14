//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class NSString, SCRBrailleLineManager;

__attribute__((visibility("hidden")))
@interface SCRImage : SCRElement
{
    NSString *_localizedPhotoEvaluationString;
    SCRBrailleLineManager *__brailleLineManager;
}

@property(retain, nonatomic, setter=_setBrailleLineManager:) SCRBrailleLineManager *_brailleLineManager; // @synthesize _brailleLineManager=__brailleLineManager;
- (void).cxx_destruct;
- (id)brailleLineManager;
- (unsigned long long)groupBehavior;
- (BOOL)shouldMapElement:(id)arg1;
- (id)typeDescription;
- (id)persistentUserLabel;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)persistentElementLabelData;
- (id)persistentUserLabelIDForData:(id)arg1;
- (BOOL)isImage;

@end

