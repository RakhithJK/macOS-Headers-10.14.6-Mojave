//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class CALMainController;

@interface CalAddEventSegmentedControl : NSSegmentedControl
{
    CALMainController *_mainController;
}

@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)includeEventCalendars;
- (void)calendarSelected:(id)arg1;
- (id)menu;
- (id)initWithController:(id)arg1;

@end

