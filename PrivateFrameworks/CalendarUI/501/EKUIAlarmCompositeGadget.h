//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/EKUICompositeGadget.h>

@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget
{
    BOOL _showingNewAlarm;
    NSMutableArray *_alarmGadgets;
    NSArray *_existingConstraints;
}

+ (id)interestedChangeKeys;
@property(retain) NSArray *existingConstraints; // @synthesize existingConstraints=_existingConstraints;
@property(retain) NSMutableArray *alarmGadgets; // @synthesize alarmGadgets=_alarmGadgets;
@property BOOL showingNewAlarm; // @synthesize showingNewAlarm=_showingNewAlarm;
- (void).cxx_destruct;
- (BOOL)updateWithDiff:(id)arg1;
- (double)preferredWidth;
- (BOOL)isEditable;
- (void)setObject:(id)arg1;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (id)addAlarmGadget;
- (void)updateGadgetsAddButton;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateConstraints;
- (id)initWithViewController:(id)arg1;

@end

