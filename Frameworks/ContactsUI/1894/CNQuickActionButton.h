//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABOnBlueButton.h>

#import <ContactsUI/NSAccessibilityButton-Protocol.h>

@class NSString;
@protocol CNCancelable;

@interface CNQuickActionButton : ABOnBlueButton <NSAccessibilityButton>
{
    CDUnknownBlockType _mouseDownHandler;
    CDUnknownBlockType _secondaryMouseDownHandler;
    id <CNCancelable> _performDefaultActionToken;
    id <CNCancelable> _showDisambiguationUIToken;
}

@property(retain) id <CNCancelable> showDisambiguationUIToken; // @synthesize showDisambiguationUIToken=_showDisambiguationUIToken;
@property(retain) id <CNCancelable> performDefaultActionToken; // @synthesize performDefaultActionToken=_performDefaultActionToken;
@property(copy, nonatomic) CDUnknownBlockType secondaryMouseDownHandler; // @synthesize secondaryMouseDownHandler=_secondaryMouseDownHandler;
@property(copy, nonatomic) CDUnknownBlockType mouseDownHandler; // @synthesize mouseDownHandler=_mouseDownHandler;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (BOOL)accessibilityPerformPress;
- (void)attachShowDisambiguationUIRecognizer;
- (void)attachPerformDefaultActionRecognizer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

