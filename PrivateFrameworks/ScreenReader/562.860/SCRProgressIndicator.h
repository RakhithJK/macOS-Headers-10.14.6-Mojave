//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class SCRBrailleLineManager;

__attribute__((visibility("hidden")))
@interface SCRProgressIndicator : SCRElement
{
    double _lastValueChangedTime;
    SCRBrailleLineManager *__brailleLineManager;
}

@property(retain, nonatomic, setter=_setBrailleLineManager:) SCRBrailleLineManager *_brailleLineManager; // @synthesize _brailleLineManager=__brailleLineManager;
- (id)brailleLineManager;
- (BOOL)_isBusyIndicator;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (id)maxValue;
- (id)minValue;
- (double)_percentValue;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)canHandleValueChange;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

